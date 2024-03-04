import pack1.MyStudent;
import pack1.Student;

import java.util.Scanner;

public class Test {
    static Scanner sc = new Scanner(System.in);

    Student s = new Student();

    MyStudent ms = new MyStudent();

    void input() {
        System.out.print("Add how many student: ");
        int n = sc.nextInt();
        for (int i = 0 ; i < n ;i ++) {
            System.out.print("Input ID: ");
            sc.nextLine();
            String id = sc.nextLine();
            System.out.print("Input Name: ");
            String name = sc.nextLine();
            System.out.print("Input Mark: ");
            double mark = sc.nextDouble();

            s = new Student(id, name, mark);
            ms.addStudent(s);
        }
    }

    void output() {
        System.out.println("The list of student: ");
        ms.print().forEach(s -> System.out.println(s.display()));
    }

    void highMark() {
        System.out.println("The list of student with the largest mark: ");
        ms.printMax().forEach(Student::display);
    }

    void displayByID() {
        System.out.print("Input ID: ");
        ms.findByID(sc.nextLine()).forEach(Student::display);
    }


    public static void main(String[] args) {
        Test t = new Test();

        t.input();
        t.output();
        t.highMark();
        sc.nextLine();
        t.displayByID();
    }
}