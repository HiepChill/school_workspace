package pack1;

import java.sql.Connection;
import java.util.ArrayList;

public interface IStudent {
    public Connection getCon();
    public ArrayList<Student> getListStudent();
    public boolean delStudent (String id);
    public boolean insertStudent (String id, String name, boolean gender, String idClass, double mark);
    public boolean updateStudent (String id, String name, boolean gender, String idClass, double mark);
    public ArrayList<Student> getStudent_byClass (String classID);
    public ArrayList<Student> getStudent_byClass_Gender (String classID, boolean gender);
    public Student getStudent_byID (String id);
}
