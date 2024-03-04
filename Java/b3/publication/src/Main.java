import packake1.Magazine;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    static Scanner scanner = new Scanner(System.in);

    //hàm nhập
    public void input(ArrayList<Magazine> magazines, int n) {
        for (int i = 0; i < n; i++) {
            System.out.println("STT " + (i + 1) + ": ");
            System.out.print("Nhập mã: ");
            scanner.nextLine();
            String id = scanner.nextLine();
            System.out.print("Nhập tên: ");
            String name = scanner.nextLine();
            System.out.print("Nhập giá: ");
            int price = scanner.nextInt();
            System.out.print("Nhập số bản: ");
            int copies = scanner.nextInt();

            Magazine magazine = new Magazine(id, name, copies, price);
            magazines.add(magazine);
        }

    }

    //hàm in
    public void output(ArrayList<Magazine> magazines, int n) {
        System.out.println("Danh sách: ");
        for (Magazine magazine : magazines) {
            System.out.println(magazine.display());
        }
    }

    //lấy min copies
    public int getMinCopies(ArrayList<Magazine> magazines) {
        int min = magazines.get(0).getCopies();
        for (Magazine magazine : magazines) {
            if (magazine.getCopies() < min) {
                min = magazine.getCopies();
            }
        }
        return min;
    }

    //in min
    public void minCpMagazine(ArrayList<Magazine> magazines) {
        int min = getMinCopies(magazines);

        System.out.println("Magazine có ít copies nhất là: ");
        for (Magazine magazine : magazines) {
            if (magazine.getCopies() == min)
                System.out.println(magazine.display());
        }
    }

    //main
    public static void main(String[] args) {
        Main m = new Main();
        int n;
        ArrayList<Magazine> magazines = new ArrayList<>();
        System.out.print("Nhập n = ");
        n = scanner.nextInt();

        m.input(magazines, n);
        m.output(magazines, n);
        m.minCpMagazine(magazines);


    }
}