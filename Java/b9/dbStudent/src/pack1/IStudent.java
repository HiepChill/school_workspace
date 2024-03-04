package pack1;

import java.sql.Connection;
import java.util.ArrayList;

public interface IStudent {
    public Connection getCon();
    public ArrayList<ArrayList<String>> displayAll();
    public boolean delStudent (String id);
    public boolean insertStudent (String id, String name, boolean gender, String idClass, double mark);
    public boolean updateStudent (String id, String name, boolean gender, String idClass, double mark);
    public ArrayList<ArrayList<String>> displayStudents (String classID);
    public ArrayList<Student> displayStudents (String classID, String nameS);
    public ArrayList<ArrayList<String>> displayStudent (String id);
    public ArrayList<String> getIdClass();
    public ArrayList<String> getNameS();
}
