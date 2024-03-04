import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        SinhVien sv = new SinhVien();
        System.out.print("Nhập tên Sinh Viên: ");
        sv.hoten = scanner.nextLine();
        System.out.print("Nhập điểm tích lũy của Sinh Viên: ");
        sv.diemTL = scanner.nextFloat();
        System.out.print("Nhập điểm rèn luyện của Sinh Viên: ");
        sv.diemRl = scanner.nextFloat();

        if (xetHocBong(sv)) System.out.print("Được học bổng");
        else System.out.print("Không được học bổng");
    }


    public static boolean xetHocBong(SinhVien sv) {
        return sv.diemRl >= 7 && sv.diemTL >= 2.5;
    }
}

class SinhVien {
    String hoten;
    float diemTL;
    float diemRl;
}