create database Quan_Ly_Nhan_Vien
go

use Quan_Ly_Nhan_Vien
go

create table DONVI
(
	MaDV varchar(4) primary key,
	TenDV nvarchar(50),
)
go

create table NHANVIEN
(
	MaNV varchar(8) primary key,
	HoTen nvarchar(30),
	CongViec nvarchar(50),
	Luong int,
	MaDV varchar(4),
	MaPT varchar(8),

	foreign key (MaDV) references DONVI(MaDV),
)
go

create table BACLUONG
(
	MaBac varchar(50) primary key,
	BacThap int,
	BacCao int,
)
go

--Câu 3:Thêm dữ liệu cho bảng NHANVIEN
insert into NHANVIEN
values 
	('NV001' , 'Phạm Thị Nhàn' , 'Thư ký' , 500 , '0001' , null),
	('NV002' , 'Hoàng Thanh Vân' , 'Giáo viên' , 600 , '0001' , null),
	('NV003' , 'Hoàng Thị Lan' , 'Giáo viên' , 200 , '0002' , null),
	('NV004' , 'Đỗ Trung Dũng' , 'Thư ký' , 700 , '0003' , null);

--Câu 4:Thêm dữ liệu cho bảng đươn vị
insert into DONVI
values 
	('0001' , 'KHTN'),
	('0002' , 'DHTL'),
	('0003' , 'DHQG');

--Câu 5:Thêm dữ liệu cho bảng BACLUONG
insert into BACLUONG
values 
	('1' , 400 , 500),
	('2' , 501 , 600),
	('3' , 601 , 800);

--Câu 6:Dung câu lệnh truy vấn dữ liệu , đưa ra tất cả thông tin về nhân viên
select * from NHANVIEN

--Câu 7:Đưa ra HoTen , CongViec , Luong của tất cả các nhân viên
select HoTen , CongViec , Luong from NHANVIEN

--Câu 8:Đưa ra toàn bộ công việc của các nhân viên ,các giá trị không trùng nhau
select distinct CongViec from NHANVIEN

--Câu 9:Đưa ra Hoten, LuongQuy của tất cả các nhân viên, với LuongQuy= Luong*3.
select HoTen , Luong * 3 as "LuongQuy" from NHANVIEN

--Câu 10:Đưa ra Hoten, Luong sắp xếp theo thứ tự tăng dần/ giảm dần của Luong.
select HoTen , Luong from NHANVIEN
order by Luong asc --desc

--Câu 11:Đưa ra Hoten, Luong của các nhân viên có Luong>300.
select HoTen , Luong from NHANVIEN
where Luong > 300

--Câu 12:Đưa ra Hoten, Luong của các nhân viên có Luong>300 và làm công việc là Giáo viên.
select HoTen , Luong from NHANVIEN
where Luong > 300 and CongViec = 'Giáo viên'

--Câu 13:Đưa ra những nhân viên có lương hoặc 200, 300, 600.
select HoTen from NHANVIEN
where Luong = 200 or Luong = 300 or Luong = 600

--Câu 14:Đưa ra những nhân viên có Lương trong khoảng 300 đến 600.
select HoTen from NHANVIEN
where Luong >= 300 and Luong <= 600

--Câu 15:Đưa ra Hoten, Congviec của các nhân viên có Họ tên bắt đầu bằng chữ ‘Hoàng’.
select HoTen , CongViec from NHANVIEN
where HoTen like 'Hoàng%'

--Câu 16:Đưa ra lương trung bình, lương lớn nhất, nhỏ nhất của tất cả các nhân viên trong bảng NHANVIEN.
select avg(Luong) as "Lương trung bình" , max(Luong) as "Lương lớn nhất" , min(Luong) as "Lương nhỏ nhát" from NHANVIEN

--Câu 17:Đưa ra Côngviệc, Lương trung bình của từng loại công việc.
select CongViec , avg(Luong) from NHANVIEN
group by CongViec

--Câu 18:1Đưa ra Côngviệc, Lương trung bình của tất cả các nhân viên có Luong>200 theo từng loại công việc.
select CongViec , avg(Luong) as "Luong trung bình của các nhân viên" from NHANVIEN
where Luong > 200
group by CongViec

--Câu 19:Đưa ra tổng lương của từng nhóm công việc trong từng đơn vị.
Select MaDV , CongViec , sum(Luong) as "Tổng lương" from NHANVIEN nv group by CongViec , MaDV

--Câu 20:Đưa ra những Congviec và trung bình lương của các công việc có trung bình lương >= 300
select CongViec , avg(Luong) as "Luong TB" from NHANVIEN
group by CongViec
having avg(Luong) >= 300

--Câu 21.Đưa ra những đơn vị và lương lớn nhất của các đơn vị có lương lớn nhất >=300.
select MaDV , max(Luong) from NHANVIEN
group by MaDV
having max(Luong) >= 300

--Câu 22.Đưa ra Hoten, Congviec, TenDV của tất cả nhân viên.
select HoTen , CongViec , TenDV from DONVI d, NHANVIEN nv
where nv.MaDV = d.MaDV

--Câu 23.Câu lệnh sau cho kết quả như thế nào.
SELECT HoTen, CongViec, TenDV
FROM NHANVIEN NV, DONVI DV
WHERE NV.MaDV= DV.MaDV

--Câu 24.Đưa ra HoTen, Congviec, TenDV, Luong của những nhân viên có Luong>=500.
select HoTen , CongViec , TenDv , Luong from NHANVIEN nv , DONVI dv
where nv.MaDV = dv.MaDV and Luong >= 500

--Câu 25.Câu lệnh sau cho kết quả như thế nào.
SELECT NV.MaNV, NV.Hoten, PT.MaNV, PT.Hoten
FROM NHANVIEN NV, NHANVIEN PT
WHERE (NV.MaNV=PT.MaPT) AND (NV.Luong>PT.Luong);

--Câu 27.Đưa ra những công việc trong đơn vị 1 có MaDV là 0001 và đơn vị 2 có MaDV là 0002.
select MaDV , CongViec from NHANVIEN
where MaDV = '0001' or MaDV = '0002'

--Câu 28.Đưa ra Hoten, TenDV, Congviec, Luong của những người có lương lớn hơn lương trung bình của toàn bộ nhân viên.
select HoTen , TenDV, Congviec, Luong from NHANVIEN nv , DONVI dv
where nv.MaDV = dv.MaDV
and Luong > (select(avg(Luong)) from NHANVIEN)

--Câu 29.Đưa ra những nhân viên có lương lớn hơn người có lương lớn nhất trong đơn vị có tên là DHTL.
Select hoten from nhanvien 
where (Luong > (select max(Luong) 
				from NHANVIEN nv , DONVI dv 
				where nv.MaDV = dv.MaDV
				and dv.TenDV = 'DHTL'))

--Câu 30.Đưa ra Hoten, MaDV, Luong của các nhân viên có Luong=Luong thấp nhất trong đơn vị của họ.
select Hoten, MaDV, Luong from NHANVIEN nv1
where (Luong = (select min(Luong)
				from NHANVIEN nv2
				where nv1.MaDV = nv2.MaDV))

--Câu 31.Đưa ra Hoten, MaDV, Luong của các nhân viên có Luong=Luong thấp nhất trong một đơn vị nào đó.
select Hoten, MaDV, Luong from NHANVIEN 
where (Luong = (select min(Luong)
				from NHANVIEN))

--Câu 32.Đưa ra Hoten, Luong của các nhân viên có Luong lớn nhất của đơn vị có mã đơn vị là 0002.
select HoTen , max(Luong from NHANVIEN
