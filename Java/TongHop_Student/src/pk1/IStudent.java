package pk1;

import java.sql.Connection;
import java.util.ArrayList;

public interface IStudent {
    public Connection getCon();
    public boolean insertStudent(String ID, String Name, String ClassID, String Gender);
    public boolean updateStudent(String ID, String Name, String ClassID, String Gender);
    public boolean deleteStudent(String ID, String Name, String ClassID, String Gender);
    public ArrayList<ArrayList<String>> displayAll();
    public ArrayList<ArrayList<String>> displayStudent_byID(String ID);
    public ArrayList<ArrayList<String>> displayStudent_byClass(String ClassID);
    public ArrayList<ArrayList<String>> displayStudent_byClassS(String ClassID);
    public ArrayList<ArrayList<String>> displayStudent_byClass_Name(String ClassID, String Name);
    public ArrayList<String> getClassID();
    public ArrayList<String> getClassS();
}
