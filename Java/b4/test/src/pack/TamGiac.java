package pack;

public class TamGiac extends Shape {
    public double canh1, canh2, canh3;
    public TamGiac() {

    }
    public TamGiac(double canh1, double canh2, double canh3) {
        this.canh1 = canh1;
        this.canh2 = canh2;
        this.canh3 = canh3;
    }
    public TamGiac(String mau, boolean fillMau, double canh1, double canh2, double canh3) {
        super(mau, fillMau);
        this.canh1 = canh1;
        this.canh2 = canh2;
        this.canh3 = canh3;
    }

    public double getCanh1() {
        return canh1;
    }

    public void setCanh1(double canh1) {
        this.canh1 = canh1;
    }

    public double getCanh2() {
        return canh2;
    }

    public void setCanh2(double canh2) {
        this.canh2 = canh2;
    }

    public double getCanh3() {
        return canh3;
    }

    public void setCanh3(double canh3) {
        this.canh3 = canh3;
    }
    @Override
    public boolean kiemTra() {
        return canh1 > 0 && canh2 > 0 && canh3 > 0 && (canh1 + canh2) > canh3 && (canh2 + canh3) > canh1 && (canh3 + canh1) > canh2;
    }
    @Override
    public double tinhDienTich() {
        double p = (canh1 + canh2 + canh3) / 2;
        return Math.sqrt(p * (p - canh1) * (p - canh2) * (p - canh3));
    }

    @Override
    public double tinhChuVi() {
        return canh1 + canh2 + canh3;
    }
}
