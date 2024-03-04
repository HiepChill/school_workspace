using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace DanhSachSV
{
    class SinhVien
    {
        
            public string MaSV { get; set; }
            public string HotenSV { get; set; }
            public DateTime Ngaysinh { get; set; }
            public bool Gioitinh { get; set; }
            public string Quequan { get; set; }
            public string Lop { get; set; }
            public string Khoa { get; set; }
            public SinhVien()
            {
                MaSV = "00001";
                HotenSV = "Nguyễn Văn A";
                Ngaysinh = new DateTime(2000, 1, 1);
                Gioitinh = true;
                Quequan = "Hà Nội";
                Lop = "62TH1";
                Khoa = "CNTT";
            }
            public SinhVien(string ma, string ten,DateTime ns,bool gt, string que,string lop, string khoa)
            {
                MaSV = ma;
                HotenSV = ten;
                Ngaysinh = ns;
                Gioitinh = gt;
                Quequan = que;
                Lop = lop;
                Khoa = khoa;
            }
    }
}
