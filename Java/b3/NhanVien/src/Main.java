import package1.Employee;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.Objects;
import java.util.Scanner;

// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
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

        ArrayList<Employee> employees = new ArrayList<>();

        System.out.println("Nhập thông tin các nhân viên:");
        for (int i = 0 ; i < n ; i ++)
        {
            System.out.println("Nhan vien thu " + i + 1 + ": ");
            System.out.print("Nhập mã nhân viên: ");
            scanner.nextLine();
            String id = scanner.nextLine();
            System.out.print("Nhập tên nhân viên: ");
            String name = scanner.nextLine();
            System.out.print("Nhập số phòng: ");
            String dept = scanner.nextLine();
            System.out.print("Nhập số tuổi:");
            int tuoi = scanner.nextInt();
            scanner.nextLine();
            System.out.print("Nhập lương của nhân viên: ");
            int luong = scanner.nextInt();
            scanner.nextLine();
            System.out.print("Nhập giới tính: ");
            String gioiTinh = scanner.nextLine();

            Employee employee = new Employee(id, name, dept, gioiTinh, tuoi, luong);
            employees.add(employee);
        }

        System.out.println("Danh sách nhân viên: ");
        for (Employee employee : employees) {
            System.out.println(employee.toString());
        }

        String phong;
        System.out.print("Nhập vào 1 phòng: ");
        phong = scanner.nextLine();

        System.out.println("Các nhân viên thuộc phòng " + phong +" là: ");
        for (Employee employee : employees) {
            if (Objects.equals(employee.getDept(), phong)) {
                employee.toString();
            }
        }

        System.out.println("Các nhân viên nghỉ hưu trong năm nay là: ");
        for (Employee employee : employees) {
            if (employee.getRetire()) {
                employee.toString();
            }
        }

        String phong1;
        System.out.print("Nhập vào 1 phòng: ");
        phong1 = scanner.nextLine();

        System.out.println("Các nhân viên thuộc phòng " + phong +" và nghỉ hưu trong năm nay là: ");
        for (Employee employee : employees) {
            if (Objects.equals(employee.getDept(), phong1)) {
                if (employee.getRetire())
                    employee.toString();
            }
        }

        Employee a = employees.get(0);
        int max = a.getSalary();
        for (Employee employee : employees) {
            if (employee.getSalary() > max)
                max = employee.getSalary();
        }

        for (Employee employee : employees) {
            if (employee.getSalary() == max)
                employee.toString();
        }

        String phong2;
        System.out.print("Nhập vào 1 phòng: ");
        phong2 = scanner.nextLine();
        Employee b = employees.get(0);
        int min = b.getSalary();

        for (Employee employee : employees) {
            if (Objects.equals(employee.getDept(), phong2)) {
                if (employee.getSalary() < min) {
                    min = employee.getSalary();
                }
            }
        }

        System.out.println("Danh sách: ");
        for (Employee employee : employees) {
            if (employee.getSalary() == min) {
                employee.toString();
            }
        }
    }
    
}

