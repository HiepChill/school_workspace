import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Nhập sô điện hộ gia đình sử dụng(kWh): ");
        float so_dien = scanner.nextFloat();

        System.out.print("Tiền điện mà hộ gia đình phải chi trả là: " + tinhTienDien(so_dien) + "đ");
    }

    //hàm tính tiền điện
    public static float tinhTienDien(float soDien) {
        if (soDien <= 50)
            return soDien * 1806;
        else if (soDien <= 100)
            return 50 * 1806 + (soDien - 50) * 1866;
        else if (soDien <= 200) {
            return 50 * 1806 + 50 * 1866 + (soDien - 100) * 2167;
        }
        else if (soDien <= 300) {
            return 50 * 1806 + 50 * 1866 + 100 * 2167 + (soDien - 200) * 2729;
        }
        else if (soDien <= 400) {
            return 50 * 1806 + 50 * 1866 + 100 * 2167 + 100 * 2729 + (soDien- 300) * 3050;
        }
        else
            return 50 * 1806 + 50 * 1866 + 100 * 2167 + 100 * 2729 + 100 * 3050 + (soDien - 400) * 3151;
    }
}