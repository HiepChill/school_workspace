package test.src;// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
import java.util.Scanner;
// then press Enter. You can now see whitespace characters in your code.
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Nhập vào họ tên sinh viên
        System.out.print("Nhập họ tên sinh viên: ");
        String hoTen = scanner.nextLine();

        // Nhập vào điểm tích lũy của sinh viên
        System.out.print("Nhập điểm tích lũy của sinh viên: ");
        double diem = scanner.nextDouble();

        // Xác định xếp loại dựa trên điểm tích lũy
        String xepLoai = xepLoaiSinhVien(diem);

        // Hiển thị thông tin
        System.out.println("Họ tên sinh viên: " + hoTen);
        System.out.println("Điểm tích lũy: " + diem);
        System.out.println("Xếp loại: " + xepLoai);
    }

    // Phương thức để xác định xếp loại dựa trên điểm
    private static String xepLoaiSinhVien(double diem) {
        if (diem >= 8.5) {
            return "Giỏi";
        } else if (diem >= 7) {
            return "Khá";
        } else if (diem >= 5.5) {
            return "Trung bình";
        } else {
            return "Yếu";
        }
    }
}