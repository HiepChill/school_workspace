import pack1.MyTeacher;
import pack1.Teacher;

import java.sql.Date;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    static Teacher e = new Teacher();

    public MyTeacher mt = new MyTeacher();

    static Scanner sc = new Scanner(System.in);

    public void displayListOfTeacher() {
        ArrayList<Teacher> teachers = mt.getListTeacher();
        teachers.forEach(teacher -> System.out.println(teacher.toString()));
    }

    public void addTeacher() {
        System.out.print("Nhap id: ");
        int id = sc.nextInt();
        System.out.print("Nhap name: ");
        sc.nextLine();
        String name = sc.nextLine();
        System.out.print("Nhap bdate(yyyy-mm-dd): ");
        Date bdate = Date.valueOf(sc.nextLine());
        System.out.print("Nhap salary: ");
        double salary = sc.nextDouble();
        sc.nextLine();
        System.out.print("Nhap gender: ");
        String gen = sc.nextLine();
        boolean gender = gen.equalsIgnoreCase("Male") ? true : false;
        if(mt.addTeacher(id, name, bdate, salary, gender)) {
            System.out.println("Thành công!");
        }
        else {
            System.out.println("Lỗi!");
        }
    }

    public void deleteTeacher() {
        System.out.print("Nhap id: ");
        int id = sc.nextInt();
        if (mt.deleteTeacher(id)) {
            System.out.println("Thành công!");
        }
        else {
            System.out.println("Thất bại");
        }
    }

    public void updateTeacher() {
        System.out.print("Nhap id: ");
        int id = sc.nextInt();
        System.out.print("Nhap name: ");
        sc.nextLine();
        String name = sc.nextLine();
        System.out.print("Nhap bdate(yyyy-mm-dd): ");
        Date bdate = Date.valueOf(sc.nextLine());
        System.out.print("Nhap salary: ");
        double salary = sc.nextDouble();
        sc.nextLine();
        System.out.print("Nhap gender: ");
        String gen = sc.nextLine();
        boolean gender = gen.equalsIgnoreCase("Male") ? true : false;
        if (mt.updateTeacher(id, name, bdate, salary, gender)) {
            System.out.println("Thành công!");
        }
        else {
            System.out.println("Thất bại!");
        }
    }

    public void menu() {
        int choice;
        while (true) {
            System.out.println("Chọn 1: Để hiện thị danh sách.");
            System.out.println("Chọn 2: Để thêm vào danh sách.");
            System.out.println("Chọn 3: Để xóa khỏi danh sách.");
            System.out.println("Chọn 4: Để cập nhật danh sách.");
            System.out.println("Chọn 0: Để dừng.");
            System.out.print("Chọn: ");
            choice = sc.nextInt();
            if (choice == 0) break;
            switch (choice) {
                case 1: {
                    displayListOfTeacher();
                    break;
                }
                case 2: {
                    addTeacher();
                    break;
                }
                case 3: {
                    deleteTeacher();
                    break;
                }
                case 4: {
                    updateTeacher();
                    break;
                }
                default: {
                    System.out.println("Vui lòng chọn các lựa chọn từ 0-4!");
                    break;
                }
            }
        }
    }

    public static void main(String[] args) {
        Main m = new Main();
        m.menu();
    }
}