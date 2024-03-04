package pack1;

import java.sql.Date;
import java.util.ArrayList;
import java.util.Scanner;

public class Test {
    Scanner sc = new Scanner(System.in);
    static public SinhVien sv = new SinhVien();
    static public ArrayList<SinhVien> list = new ArrayList<>();
    SVCNTT svcntt = new SVCNTT();
    SVKinhTe svKinhTe = new SVKinhTe();
    public void DSSV() {
        int chon;
        int dem = 0;
        for (int i = 1; i <= 5; i++) {
            System.out.print("Chon 1 de them SVCNTT, 2 de them SVKinhTe. Chon:");
            chon = sc.nextInt();
            if (chon == 1) dem++;
            switch (chon) {
                case 1: {
                    System.out.println("Nhap thong tin cho SVCNTT:");
                    System.out.print("Nhap ma: ");
                    int ma = sc.nextInt();
                    sc.nextLine();
                    System.out.print("Nhap ten: ");
                    String ten = sc.nextLine();
                    System.out.print("Nhap que quan: ");
                    String queQuan = sc.nextLine();
                    System.out.print("Nhap birthDay(yyyy-mm-dd): ");
                    Date bdate = Date.valueOf(sc.nextLine());
                    System.out.print("Ky nang Dev: ");
                    String knd = sc.nextLine();
                    System.out.print("Nhap diem toan: ");
                    double toan = sc.nextDouble();
                    System.out.print("Nhap diem van: ");
                    double van = sc.nextDouble();
                    System.out.print("Nhap diem anh: ");
                    double anh = sc.nextDouble();
                    svcntt = new SVCNTT(ma, ten, queQuan, bdate, knd, toan, van, anh);
                    list.add(svcntt);
                    break;
                }

                case 2: {
                    System.out.println("Nhap thong tin cho SVKinhTe:");
                    System.out.print("Nhap ma: ");
                    int ma = sc.nextInt();
                    sc.nextLine();
                    System.out.print("Nhap ten: ");
                    String ten = sc.nextLine();
                    System.out.print("Nhap que quan: ");
                    String queQuan = sc.nextLine();
                    System.out.print("Nhap birthDay(yyyy-mm-dd): ");
                    Date bdate = Date.valueOf(sc.nextLine());
                    System.out.print("Linh Vuc: ");
                    int lv = sc.nextInt();
                    System.out.print("Nhap diem toan: ");
                    double toan = sc.nextDouble();
                    System.out.print("Nhap diem van: ");
                    double van = sc.nextDouble();
                    System.out.print("Nhap diem anh: ");
                    double anh = sc.nextDouble();
                    svKinhTe = new SVKinhTe(ma, ten, queQuan, bdate, lv, toan, van, anh);
                    list.add(svKinhTe);
                    break;
                }
            }
        }
    }

    public static void main(String[] args) {
        Test t = new Test();
        QLSV qlsv = new QLSV();
        t.DSSV();
        qlsv.showSV(list);
    }
}
