import packageEmployee.Employee;
import packageEmployee.EmployeeProcess;

import java.util.ArrayList;
import java.util.Scanner;

public class Test {
    static Employee e = new Employee();

    public EmployeeProcess ep = new EmployeeProcess();

    static Scanner sc = new Scanner(System.in);

    public void displayEmployee() {
        ArrayList<Employee> employees = ep.getListEmployee();
        employees.forEach(employee -> System.out.println(employee.toString()));
    }

//    public void displayByDept(String com) {
//        ArrayList<Employee> employees = ep.getByDept(com);
//        employees.forEach((employee -> System.out.println(employee.toString())));
//    }
//    public void displayByDeptGender() {
//        System.out.print("Nhap gender: ");
//        String gen = sc.nextLine();
//        System.out.print("Nhap dept: ");
//        String com = sc.nextLine();
//        ArrayList<Employee> employees = ep.getByGenderDept(gen , com);
//        employees.forEach((employee -> System.out.println(employee.toString())));
//    }

//    public void displayByGender () {
//        System.out.print("Nhap gender: ");
//        String gen = sc.nextLine();
//        ArrayList<Employee> employees = ep.getByGender(gen);
//        employees.forEach(employee -> System.out.println(employee.toString()));
//    }
    public void addEmployee () {
        System.out.print("Nhap id:");
        int id = sc.nextInt();
        System.out.print("Nhap name:");
        sc.nextLine();
        String name = sc.nextLine();
        System.out.print("Nhap gender:");
        String gender = sc.nextLine();
        System.out.print("Nhap dept:");
        String dept = sc.nextLine();
        System.out.print("Nhap salary:");
        double salary = sc.nextDouble();
        if (ep.addEmployee(id, name, gender, dept, salary)) {
            System.out.println("Thành công");
        }
        else {
            System.out.println("Loi");
        }
    }

    public void deleteEmployee () {
        System.out.print("Nhap id:");
        int id = sc.nextInt();
        if (ep.deleteEmployee(id))
            System.out.println("Thành công!");
        else System.out.println("Lỗi!");
    }

    public void updateEmployee () {
        System.out.print("Nhap id:");
        int id = sc.nextInt();
        System.out.print("Nhap name:");
        sc.nextLine();
        String name = sc.nextLine();
        System.out.print("Nhap gender:");
        String gender = sc.nextLine();
        System.out.print("Nhap dept:");
        String dept = sc.nextLine();
        System.out.print("Nhap salary:");
        double salary = sc.nextDouble();
        if (ep.updateEmployee(id, name, gender, dept, salary))
            System.out.println("Thành công");
        else System.out.println("Thất bại");
    }

    public static void main(String[] args) {
        Test t = new Test();
        t.displayEmployee();
        t.addEmployee();
        t.deleteEmployee();
        t.updateEmployee();
//        t.displayByDept(sc.nextLine());
//        t.displayByDeptGender();
//        t.displayByGender();
    }
}