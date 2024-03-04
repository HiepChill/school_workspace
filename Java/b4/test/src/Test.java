import pack.HinhTron;
import pack.TamGiac;

import java.util.Scanner;

public class Test {
    public static Scanner sc = new Scanner(System.in);
    public static TamGiac tg = new TamGiac();
    public static HinhTron ht = new HinhTron();
    public void inputCanh() {
        System.out.println("Nhap cac canh cho tam giac:");
        System.out.print("Canh 1 = ");
        double canh1 = sc.nextDouble();
        System.out.print("Canh 2 = ");
        double canh2 = sc.nextDouble();
        System.out.print("Canh 3 = ");
        double canh3 = sc.nextDouble();

        tg = new TamGiac(canh1, canh2, canh3);
    }
    public void inputBankinh() {
        System.out.print("Ban kinh hinh tron = ");
        double banKinh = sc.nextDouble();

        ht = new HinhTron(banKinh);
    }

    public void tinhTG(TamGiac tg) {
        if(tg.kiemTra()) {
            System.out.println(tg.tinhChuVi());
            System.out.println(tg.tinhDienTich());
        }
    }

    public void tinhHT(HinhTron ht) {
        if(ht.kiemTra()) {
            System.out.println(ht.tinhChuVi());
            System.out.println(ht.tinhDienTich());
        }
    }

    public static void main(String[] args) {
        Test t = new Test();

        t.inputCanh();
        t.inputBankinh();

        t.tinhTG(tg);
        t.tinhHT(ht);
    }
}