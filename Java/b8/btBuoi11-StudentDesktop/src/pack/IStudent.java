package pack;

import java.sql.Connection;
import java.util.ArrayList;

public interface IStudent {
    public Connection getCon();

    public ArrayList<Student> getListStudent();

    public ArrayList<Student> getStudent_byClass(String idClass);

    public ArrayList<Student> getStudent_byClass_Gender(String idClass, boolean gender);

    public Student getStudent_byId(String id);

    public boolean insertStudent(String id, String name, String idClass, boolean gender, double mark);

    public boolean delStudent(String id);

    public boolean updateStudent(String id, String name, String idClass, boolean gender, double mark);

    public ArrayList<String> getIdClass();
}
