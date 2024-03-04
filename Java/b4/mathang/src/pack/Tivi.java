package pack;

import com.sun.tools.javac.Main;

import java.util.Scanner;

public class Tivi extends MatHang{
    public String loaiTV;
    public int manHinh;
    static Scanner s = new Scanner(System.in);

    public Tivi() {
    }

    public Tivi(String loaiTV, int manHinh) {
        this.loaiTV = loaiTV;
        this.manHinh = manHinh;
    }

    public Tivi(String maMH, String ten, double dongia, String loaiTV, int manHinh) {
        super(maMH, ten, dongia);
        this.loaiTV = loaiTV;
        this.manHinh = manHinh;
    }

    public String getLoaiTV() {
        return loaiTV;
    }

    public void setLoaiTV(String loaiTV) {
        this.loaiTV = loaiTV;
    }

    public int getManHinh() {
        return manHinh;
    }

    public void setManHinh(int manHinh) {
        this.manHinh = manHinh;
    }

    @Override
    public void nhap() {
        System.out.print("Nhap ma mat hang: ");
        String ma = s.nextLine();
        System.out.print("Nhap ten: ");
        String ten = s.nextLine();
        System.out.print("Nhap don gia: ");
        double gia = s.nextDouble();
        s.nextLine();
        System.out.print("Nhap loai TV: ");
        String loai = s.nextLine();
        System.out.print("Nhap man hinh: ");
        int man = s.nextInt();
    }

    @Override
    public String hienThi() {
        return "Tivi{" +
                "loaiTV='" + this.getLoaiTV() + '\'' +
                ", manHinh=" + manHinh +
                ", maMH='" + maMH + '\'' +
                ", ten='" + ten + '\'' +
                ", dongia=" + dongia +
                '}';
    }

    public static void main(String[] args) {
        Tivi tivi = new Tivi();
        tivi.nhap();
        tivi.hienThi();
    }
}
