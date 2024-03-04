﻿--CREATE DATABASE CSDL_QLBanHang1

CREATE TABLE KHACHHANG
(
	MAKHACHHANG char(10) not NULL Primary Key,
	TENCONGTY text,
	TENGIAODICH text,
	DIACHI text,
	EMAIL text,
	DIENTHOAI text,
	FAX int,
)

CREATE TABLE NHACUNGCAP
(
	MACONGTY char(10) not NULL Primary Key,
	TENCONGTY char(10),
	TENGIAODICH char(10),
	DIACHI char(20),
	DIENTHOAI int,
	FAX int,
	EMAIL char(20),
)

CREATE TABLE NHANVIEN
(
	MANHANVIEN char(10) not NULL Primary Key,
	HO char(10),
	TEN char(10),
	NGAYSINH char(10),
	NGAYLAMVIEC char(10),
	DIACHI char(10),
	DIENTHOAI int,
	LUONGCOBAN int,
	PHUCAP int,
)

CREATE TABLE LOAIHANG
(
	MALOAIHANG char(10) not NULL Primary Key,
	TENLOAIHANG char(10),
)

CREATE TABLE MATHANG
(
	MAHANG char(10) not NULL Primary Key,
	TENHANG char(10),
	MACONGTY char(10),
	MALOAIHANG char(10),
	SOLUONG int,
	DONVITINH char(10),
	GIAHANG money,
	Foreign Key (MACONGTY) references NHACUNGCAP(MACONGTY),
)

CREATE TABLE DONDATHANG
(
	SOHOADON char(10) not NULL Primary Key,
	MAKHACHHANG char(10),
	MANHANVIEN char(10),
	NGAYDATHANG date,
	NGAYGIAOHANG date,
	NGAYCHUYENHANG date,
	NOIGIAOHANG char(10),
	Foreign Key (MAKHACHHANG) references KHACHHANG(MAKHACHHANG),
	Foreign Key (MANHANVIEN) references NHANVIEN(MANHANVIEN),
)

CREATE TABLE CHITIETDATHANG
(
	SOHOADON char(10),
AHANG char(10) not NULL Primary Key,
	GIABAN money,
	SOLUONG int,
	MUCGIAMGIA money,
	Foreign Key (MAHANG) references MATHANG(MAHANG),
)

INSERT into KHACHHANG
Values
	('đ45345' , 312 , 23 , 42342 , 42342 , 23 , 231);
ALTER TABLE CHITIETDATHANG
	ADD CONSTRAINT CHITIETDATHANG
	Default 1 for SOLUONG , Default 0 for MUCGIAMGIA;
ALTER TABLE DONDATHANG
	ADD CONSTRAINT DONDATHANG
	CHECK (NGAYGIAOHANG >= NGAYDATHANG AND NGAYCHUYENHANG >= NGAYDATHANG);
ALTER TABLE NHANVIEN
	ADD CONSTRAINT NHANVIEN
	CHECK (YEAR(GETDATE) - YEAR(NGAYSINH) >= 18 AND YEAR(GETDATE) - YEAR(NGAYSINH) <= 60);

Select *from KHACHHANG

SELECT MACONGTY , TENCONGTY , TENGIAODICH
FROM NHACUNGCAP

SELECT MAHANG , TENHANG , SOLUONG
FROM MATHANG
