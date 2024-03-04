import pack1.MyStudent;
import pack1.Student;

import java.util.ArrayList;

public class Main {
    public MyStudent myStudent = new MyStudent();
    public Student student = new Student();

    public void display() {
        String id = "1";
        myStudent.displayStudent(id);
    }

    public static void main(String[] args) {
        Main m = new Main();
        m.display();
    }
}