package pack1;

import java.sql.Connection;
import java.sql.Date;
import java.util.ArrayList;

public interface ITeacher {
    public Connection getConnection();
    public ArrayList<Teacher> getListTeacher();
    public boolean addTeacher (int id, String name, java.sql.Date bdate, double salary, boolean gender);
    public boolean deleteTeacher (int id);
    public boolean updateTeacher (int id, String name, java.util.Date bdate, double salary, boolean gender);
}
