import package1.Product;

import java.util.ArrayList;
import java.util.Objects;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n;
        //nhập số lượng  sản phẩm
        while (true) {
            System.out.print("Nhập số lượng sản phẩm muốn nhập: ");
            n = scanner.nextInt();
            if (n < 1) System.out.println("Số lượng sản phẩm phải lớn hơn 0");
            else break;
        }

        // khởi tạo 1 list Product
        Product[] products = new Product[n];
        // nhập sản phẩm
        System.out.println("------Nhập thông tin sản phẩm------");
        for (int i = 0 ; i < n ; i ++)
        {
            products[i] = new Product();
            System.out.println("Sản phẩm thứ " + (i + 1) + ": ");
            System.out.print("Nhập id: ");
            scanner.nextLine();
            products[i].setId(scanner.nextLine());
            System.out.print("Nhập tên sản phẩm: ");
            products[i].setName(scanner.nextLine());
            System.out.print("Nhập số lượng sản phẩm: ");
            products[i].setAmount(scanner.nextDouble());
            System.out.print("Nhập giá sản phẩm: ");
            products[i].setPrice(scanner.nextDouble());
            scanner.nextLine();
            System.out.print("Nhập nhà sản xuất: ");
            products[i].setCompany(scanner.nextLine());
            System.out.print("Nhập năm sản xuất: ");
            products[i].setYear(scanner.nextInt());
            System.out.println("-----------------------------------");
        }

        // In ra danh sách sản phẩm
        System.out.println("------Danh sách sản phẩm------");
        for (int i = 0 ; i < n ; i ++)
        {
            System.out.println("Sản phẩm thứ " + (i + 1) + ": ");
            System.out.printf(products[i].toString());
            System.out.println("---------***---------");
        }

        // Ý 1: nhập 1 năm để in ra sản phẩm sản xuất cùng năm
        int nam, count = 0;
        System.out.print("Nhập năm sản xuất để lọc ra sản phẩm được sản xuất cùng năm: ");
        nam = scanner.nextInt();

        for (Product product : products) {
            if (product.getYear() == nam) {
                count ++;
            }
        }
        if (count > 0) {
            System.out.println("Sản phẩm có cùng năm sản xuất là: ");
            for (Product product : products) {
                if (product.getYear() == nam) {
                    System.out.println(product.getName());
                }
            }
        }
        else System.out.println("không có sản phẩm nào đưuọc sản xuất vào năm " + nam);

        // Ý 2: nhập 1 năm và 1 nhà sản xut để in ra sản phẩm trùng
        int nam1, count1 = 0;
        String nsx;
        System.out.print("Nhập năm xuất bản để lọc ra sản phẩm: ");
        nam1 = scanner.nextInt();
        scanner.nextLine();
        System.out.print("Nhập 1 nhà sản xuất để lọc ra sản phẩm: ");
        nsx = scanner.nextLine();
        for (Product product : products) {
            if (product.getYear() == nam1 && Objects.equals(product.getCompany(), nsx)) {
                count1 ++;
            }
        }

        if (count1 > 0) {
            System.out.println("Sản phẩm có cùng năm sản xuất và nhà sản xuất là: ");
            for (Product product : products) {
                if (product.getYear() == nam1 && Objects.equals(product.getCompany(), nsx)) {
                    System.out.println(product.getName());
                }
            }
        }

        // Ý 3: nhập vào 2 nhà sản xuất đưa ra các sản phẩm đc sản xuất 2 nsx
        int count2 = 0;
        String nsx1, nsx2;
        System.out.print("Nhập nhà sản xuất 1 để lọc ra sản phẩm: ");
        nsx1 = scanner.nextLine();
        System.out.print("Nhập nhà sản xuất 2 để lọc ra sản phẩm: ");
        nsx2 = scanner.nextLine();
        for (Product product : products) {
            if (Objects.equals(product.getCompany(), nsx1) || Objects.equals(product.getCompany(), nsx2)) {
                count2 ++;
            }
        }

        if (count2 > 0) {
            System.out.println("Sản phẩm có nhà saản xuất thuộc 1 trong 2 nhà sản xuất trên là: ");
            for (Product product : products) {
                if (Objects.equals(product.getCompany(), nsx1) || Objects.equals(product.getCompany(), nsx2)) {
                    System.out.println(product.getName());
                }
            }
        }

        // ý 4: đưa ra danh sách các sản phẩm có thành tiền lớn nhất
        double max = products[1].totalPrice();
        for (Product product : products) {
            if (product.totalPrice() > max) {
                max = product.totalPrice();
            }
        }

        System.out.println("Các sản phẩm có tổng giá trị cao nhất là: ");
        for (Product product : products) {
            if (product.totalPrice() == max) {
                System.out.println(product.getName());
            }
        }

        // Ý 5: đưa ra danh sách các sản phẩm được giảm giá ít nhất
        double min = products[1].getDiscounted();
        for (Product product : products) {
            if (product.getDiscounted() < min)
                min = product.getDiscounted();
        }

        System.out.println("Các sản phẩm được giảm giá thấp nhất là: ");
        for (Product product : products) {
            if (product.getDiscounted() == min)
                System.out.println(product.getName());
        }
    }
}



