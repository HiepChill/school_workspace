package pack1;

import java.sql.Date;

public class SVCNTT extends SinhVien{
    public String kyNangDev;
    public double toan, van, anh;

    public SVCNTT() {
    }

    public SVCNTT(String kyNangDev, double toan, double van, double anh) {
        this.kyNangDev = kyNangDev;
        this.toan = toan;
        this.van = van;
        this.anh = anh;
    }

    public SVCNTT(int ma, String ten, String queQuan, Date birthDay, String kyNangDev, double toan, double van, double anh) {
        super(ma, ten, queQuan, birthDay);
        this.kyNangDev = kyNangDev;
        this.toan = toan;
        this.van = van;
        this.anh = anh;
    }

    public String getKyNangDev() {
        return kyNangDev;
    }

    public void setKyNangDev(String kyNangDev) {
        this.kyNangDev = kyNangDev;
    }

    public double getToan() {
        return toan;
    }

    public void setToan(double toan) {
        this.toan = toan;
    }

    public double getVan() {
        return van;
    }

    public void setVan(double van) {
        this.van = van;
    }

    public double getAnh() {
        return anh;
    }

    public void setAnh(double anh) {
        this.anh = anh;
    }

    @Override
    public void DTB() {
        double dtb = (toan * 2 + anh + van) / 4;
        System.out.println(dtb);
    }
}
