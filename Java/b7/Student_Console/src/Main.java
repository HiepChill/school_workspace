import pack1.Process_Student;
import pack1.Student;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    static Scanner sc =  new Scanner(System.in);
    public Process_Student ps = new Process_Student();
    public void displayListOfStudent() {
        ArrayList<Student> students = ps.getListStudent();
        students.forEach(student -> System.out.println(student.toString()));
    }

    public void insertStudent() {
        System.out.print("Nhap id: ");
        sc.nextLine();
        String id = sc.nextLine();
        System.out.print("Nhap name: ");
        String name = sc.nextLine();
        System.out.print("Nhap idClass: ");
        String idClass = sc.nextLine();
        System.out.print("Nhap gender: ");
        String gen = sc.nextLine();
        boolean gender = gen.equalsIgnoreCase("Male") ? true : false;
        System.out.print("Nhap mark: ");
        double mark = sc.nextDouble();
        if(ps.insertStudent(id, name, gender, idClass, mark)) {
            System.out.println("Thành công!");
        }
        else {
            System.out.println("Lỗi!");
        }
    }

    public void delStudent() {
        System.out.print("Nhập id: ");
        sc.nextLine();
        String id = sc.nextLine();
        if (ps.delStudent(id)) {
            System.out.println("Thành công!");
        }
        else {
            System.out.println("Thất bại");
        }
    }

    public void updateStudent() {
        System.out.print("Nhap id: ");
        sc.nextLine();
        String id = sc.nextLine();
        System.out.print("Nhap name: ");
        String name = sc.nextLine();
        System.out.print("Nhap idClass: ");
        String idClass = sc.nextLine();
        System.out.print("Nhap gender: ");
        String gen = sc.nextLine();
        boolean gender = gen.equalsIgnoreCase("Male") ? true : false;
        System.out.print("Nhap mark: ");
        double mark = sc.nextDouble();
        if(ps.updateStudent(id, name, gender, idClass, mark)) {
            System.out.println("Thành công!");
        }
        else {
            System.out.println("Lỗi!");
        }
    }

    public void getStudent_byID () {
        System.out.print("Nhập id: ");
        sc.nextLine();
        String id = sc.nextLine();
        Student student = ps.getStudent_byID(id);
        System.out.println("ID: " + student.getId() + "Name: " + student.getName() + "idClass: " + student.getClassID() + "Gender: " + student.isGender() + "Mark: " + student.getMark());

    }
    public void getStudent_byIDclass () {
        System.out.print("Nhập idClass: ");
        sc.nextLine();
        String idClass = sc.nextLine();
        ArrayList<Student> students = ps.getStudent_byClass(idClass);
        students.forEach(student -> System.out.println(student.toString()));
    }

    public void getStudent_byIDclass_gender () {
        System.out.print("Nhập idClass: ");
        sc.nextLine();
        String idClass = sc.nextLine();
        System.out.print("Nhap gender: ");
        String gen = sc.nextLine();
        boolean gender = gen.equalsIgnoreCase("Male") ? true : false;
        ArrayList<Student> students = ps.getStudent_byClass_Gender(idClass, gender);
        students.forEach(student -> System.out.println(student.toString()));
    }
    public void Menu() {
        int choice;
        while (true) {
            System.out.println("Chọn 1: Để hiện thị danh sách.");
            System.out.println("Chọn 2: Để thêm vào danh sách.");
            System.out.println("Chọn 3: Để xóa khỏi danh sách.");
            System.out.println("Chọn 4: Để cập nhật danh sách.");
            System.out.println("Chọn 5: Tìm kiếm theo class.");
            System.out.println("Chọn 6: Tìm kiếm theo class và gender.");
            System.out.println("Chọn 7: Tìm kiếm theo id.");
            System.out.println("Chọn 0: Để dừng.");
            System.out.print("Chọn: ");
            choice = sc.nextInt();
            if (choice == 0) break;
            switch (choice) {
                case 1: {
                    displayListOfStudent();
                    break;
                }
                case 2: {
                    insertStudent();
                    break;
                }
                case 3: {
                    delStudent();
                    break;
                }
                case 4: {
                    updateStudent();
                    break;
                }
                case 5: {
                    getStudent_byIDclass();
                    break;
                }
                case 6: {
                    getStudent_byIDclass_gender();
                    break;
                }
                case 7: {
                    getStudent_byID();
                    break;
                }
                default: {
                    System.out.println("Vui lòng chọn các lựa chọn từ 0-7!");
                    break;
                }
            }
        }
    }

    public static void main(String[] args) {
        Main m = new Main();
        m.Menu();
    }
}