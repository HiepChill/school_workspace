package pack;

public class HinhTron extends Shape {
    public double bankinh;

    public HinhTron() {}

    public HinhTron(double bankinh) {
        this.bankinh = bankinh;
    }

    public HinhTron(String mau, boolean fillMau, double bankinh) {
        super(mau, fillMau);
        this.bankinh = bankinh;
    }

    public double getBankinh() {
        return bankinh;
    }

    public void setBankinh(double bankinh) {
        this.bankinh = bankinh;
    }
    @Override
    public boolean kiemTra() {
        return bankinh > 0;
    }

    @Override
    public double tinhDienTich() {
        return Math.PI * bankinh * bankinh;
    }

    @Override
    public double tinhChuVi() {
        return 2 * Math.PI * bankinh;
    }
}
