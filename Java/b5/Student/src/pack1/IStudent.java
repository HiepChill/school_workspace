package pack1;

import java.util.ArrayList;

public interface IStudent {
    public void addStudent(Student s);
    public ArrayList<Student> findByID(String id);
    public double getMax();
    public ArrayList<Student> print();
    public ArrayList<Student> printMax();
}
