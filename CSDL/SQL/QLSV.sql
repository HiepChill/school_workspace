CREATE DATABASE Quan_Ly_Sinh_Vien
go

use Quan_Ly_Sinh_Vien
go

create table KHOA
(
	Makh varchar(10) primary key, 
	Vpkh nvarchar(100), --thêm n để viết đc unicode
)
go

create table LOP
(
	Malop varchar(10) primary key,
	Makh varchar(10) not null,  

	foreign key (Makh) references KHOA(Makh),
)
go

create table SINHVIEN
(
	Masv varchar(10) primary key,
	Hosv nvarchar(10),
	Tensv nvarchar(10),
	Nssv date,
	Dcsv varchar(100),
	Loptr varchar(10),
	Malop varchar(10) not null,

	foreign key (Malop) references LOP(Malop),
)
go

create table MONHOC
(
	Mamh varchar(10) primary key,
	Tenmh nvarchar(100),
	LT int,
	TH int,
)
go

create table CTHOC
(
	Malop varchar(10) not null,
	HK varchar(10) not null,
	Mamh varchar(10) not null,

	primary key(Malop , Mamh , HK),

	foreign key (Malop) references LOP(Malop),
	foreign key (Mamh) references MONHOC(Mamh),
)
go

create table DIEMSV
(
	Masv varchar(10) not null,
	Mamh varchar(10) not null,
	Lan int not null,
	Diem float,

	primary key(Masv , Mamh , Lan),

	foreign key (Mamh) references MONHOC(Mamh),
	foreign key (Masv) references SINhVIEN(Masv),
)
go

--Câu 1:Cho biết danh sách lớp
select Malop from LOP

--Câu 2:Cho biết danh sách sinh viên lớp TH1
select * from SINHVIEN
where Malop = 'TH1'

--Câu 3:Cho biết sinh viên khoa CNTT
select sv.* from SINHVIEN as sv , LOP as l
where sv.Malop = l.Malop
and Makh = 'CNTT'

--Câu 4:Cho biết chuơng trình học lớp TH1
select * from CTHOC
where Malop = 'TH1'

--Câu 5:Điểm lần 1 môn CSDL của sv lớp TH1
select Diem from SINHVIEN as sv , DIEMSV as d , MONHOC as mh
where d.Mamh = mh.Mamh and d.Masv = sv.Masv
and Malop = 'TH1' and Tenmh = 'CSDL'
and Lan = 1

--Câu 6:Điểm trung bình lần 1 môn CTDL của lớp TH1
select avg(Diem) as "Diem thi trung binh lan 1 cau lop TH1" from DIEMSV , SINHVIEN , MONHOC
where Malop = 'TH1' and Tenmh = 'CTDL'
and Lan = 1

--Câu 7:Số lượng sinh viên lớp TH2
select count(*) as "So luong sinh vien lop TH2" from SINHVIEN 
where Malop = 'TH2'

--Câu 8:Lớp TH1 phải học bao nhiêu môn HK1 và Hk2
select count(Mamh) as "So mon" from CTHOC
where Malop = 'TH1'
and (HK = 1 or HK = 2)

--Câu 9:Cho biết 3 sinh viên có điểm thi lần 1 cao nhất môn CSDl
select top 3 (select Tensv from SINHVIEN where SINHVIEN.Masv = DIEMSV.Masv) as "Top 3 sinh vien co diem cao nhat" 
from DIEMSV
where Mamh = 'CSDL' and Lan = 1
order by Diem desc

--Câu 10:Cho biết sĩ số từng lớp
 select Malop,Count(Masv) as "Si so" from SINHVIEN
 group by Malop

 --Câu 11:Khoa nào đông sinh viên nhất
 select top 1 (Makh) , count(Masv) as "So sinh vien"
 from LOP as l, SINHVIEN as sv
 where sv.Malop = l.Malop
 group by Makh
 having count(Masv) >= all(select count (Masv))
 
 --Câu 12:Lớp nào đông nhất khoa CNTT.
 select top 1 (l.Malop)
 from LOP as l , SINHVIEN as sv
 where l.Malop = sv.Malop
 and Makh = 'CNTT'
 group by l.Malop
 having count(sv.Masv) >= all(select count (sv.Masv))

 --Câu 13:Môn học nào mà ở lần thi 1 có số SV không đạt nhiều nhất.
 select top 1 (Tenmh) from MONHOC as mh , SINHVIEN as sv , DIEMSV as d
 where Lan = 1 and Diem < 4
 group by Tenmh
 having count(d.Masv) >= all(select count (Masv)
 from DIEMSV 
 where Lan = 1 and Diem < 4) 

 --Câu 14:Tìm điểm thi lớn nhất của mỗi SV cho mỗi môn học (vì SV được thi nhiều lần).
SELECT Masv , Mamh , MAX(Diem)
FROM DIEMSV
GROUP BY Masv , Mamh

--Câu 15:Điểm trung bình của từng lớp khoa CNTT ở lần thi thứ nhất môn CSDL.
SELECT l.MALOP, AVG(DIEM)
FROM DIEMSV d , SINHVIEN sv , LOP l
WHERE d.Masv= sv.Masv
AND l.Malop = sv.Malop
AND MAKH = 'CNTT' AND LAN = 1 AND d.Mamh = 'CSDL'
GROUP BY l.MALOP

--Câu 16:Sinh viên nào của lớp TH1 đã thi đạt tất cả các môn học ở lần 1 của HK2.
SELECT SINHVIEN.Masv
FROM DIEMSV, SINHVIEN, CTHOC
WHERE SINHVIEN.MASV = DIEMSV.MASV
AND DIEMSV.mamh = CTHOC.Mamh
AND CTHOC.Malop = 'TH1'
AND LAN = 1 AND DIEM > 5 AND HK = 2
GROUP BY SINHVIEN.Masv
HAVING COUNT (DIEMSV.Mamh) = (SELECT COUNT (DIEMSV.Mamh) FROM CTHOC
WHERE Malop = 'TH1' AND HK = 2)

--Câu 17:Danh sách SV nhận học bổng học kỳ 2 của lớp TH2, nghĩa là đạt tất cả các môn học
của học kỳ này ở lần thi thứ nhất.

--Câu 18:Biết rằng lớp TH1 đã học đủ 6 học kỳ, cho biết SV nào đủ điều kiện thi tốt nghiệp,
nghĩa là đã đạt đủ tất cả các môn.

