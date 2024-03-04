package pack;

public abstract class Shape {
    public String mau;
    public boolean fillMau;

    public Shape() {

    }
    public Shape(String mau, boolean fillMau) {
        this.mau = mau;
        this.fillMau = fillMau;
    }

    public String getMau() {
        return mau;
    }

    public void setMau(String mau) {
        this.mau = mau;
    }

    public boolean isFillMau() {
        return fillMau;
    }

    public void setFillMau(boolean fillMau) {
        this.fillMau = fillMau;
    }
    public abstract boolean kiemTra();
    public abstract double tinhDienTich();
    public abstract double tinhChuVi();
}
