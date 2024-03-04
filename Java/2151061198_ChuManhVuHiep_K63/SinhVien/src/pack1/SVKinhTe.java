package pack1;

import java.sql.Date;

public class SVKinhTe extends SinhVien{
    public int linhVuc;
    public double toan, van, anh;

    public SVKinhTe() {
    }

    public SVKinhTe(int linhVuc, double toan, double van, double anh) {
        this.linhVuc = linhVuc;
        this.toan = toan;
        this.van = van;
        this.anh = anh;
    }

    public SVKinhTe(int ma, String ten, String queQuan, Date birthDay, int linhVuc, double toan, double van, double anh) {
        super(ma, ten, queQuan, birthDay);
        this.linhVuc = linhVuc;
        this.toan = toan;
        this.van = van;
        this.anh = anh;
    }

    public int getLinhVuc() {
        return linhVuc;
    }

    public void setLinhVuc(int linhVuc) {
        this.linhVuc = linhVuc;
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
        double dtb = (toan + anh + van) / 3;
        System.out.println(dtb);
    }
}
