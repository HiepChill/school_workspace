package pack;

import java.sql.*;
import java.util.ArrayList;

public class Process_Student implements IStudent {
    @Override
    public Connection getCon() {
        Connection cn = null;
        String url = "jdbc:mariadb://localhost/dbstudent";
        String user = "root";
        String pwd = "12345678";
        try {
            Class.forName("org.mariadb.jdbc.Driver");
            cn = DriverManager.getConnection(url, user, pwd);

        } catch (ClassNotFoundException | SQLException e) {
            throw new RuntimeException(e);
        }
        return cn;
    }

    @Override
    public ArrayList<Student> getListStudent() {
        ArrayList<Student> students = new ArrayList<>();
        Connection con = getCon();
        String sql = "Select * from tbstudent";
        try {
            PreparedStatement ps = (PreparedStatement) con.prepareStatement(sql);
            ResultSet rs = ps.executeQuery();
            while (rs.next()) {
                Student s = new Student();
                s.setId(rs.getString("id"));
                s.setName(rs.getString("name"));
                s.setIdClass(rs.getString("idClass"));
                s.setGender(rs.getBoolean("gender"));
                s.setMark(rs.getDouble("mark"));
                students.add(s);
            }

        } catch (SQLException e) {
            System.out.println(e);
        }
        return students;
    }

    @Override
    public ArrayList<Student> getStudent_byClass(String idClass) {
        ArrayList<Student> students = new ArrayList<>();
        Connection con = getCon();
        String sql = "Select * from tbstudent where idClass = ?";
        try {
            PreparedStatement ps = (PreparedStatement) con.prepareStatement(sql);
            ps.setString(1, idClass);
            ResultSet rs = ps.executeQuery();
            while (rs.next()) {
                Student s = new Student();
                s.setId(rs.getString("id"));
                s.setName(rs.getString("name"));
                s.setIdClass(rs.getString("idClass"));
                s.setGender(rs.getBoolean("gender"));
                s.setMark(rs.getDouble("mark"));
                students.add(s);
            }

        } catch (SQLException e) {
            System.out.println(e);
        }
        return students;
    }

    @Override
    public ArrayList<Student> getStudent_byClass_Gender(String idClass, boolean gender) {
        ArrayList<Student> students = new ArrayList<>();
        Connection con = getCon();
        String sql = "Select * from tbstudent where idClass = ? and gender = ?";
        try {
            PreparedStatement ps = (PreparedStatement) con.prepareStatement(sql);
            ps.setString(1, idClass);
            ps.setBoolean(2, gender);
            ResultSet rs = ps.executeQuery();
            while (rs.next()) {
                Student s = new Student();
                s.setId(rs.getString("id"));
                s.setName(rs.getString("name"));
                s.setIdClass(rs.getString("idClass"));
                s.setGender(rs.getBoolean("gender"));
                s.setMark(rs.getDouble("mark"));
                students.add(s);
            }

        } catch (SQLException e) {
            System.out.println(e);
        }
        return students;
    }

    @Override
    public Student getStudent_byId(String id) {
        Student s = new Student();
        Connection con = getCon();
        String sql = "Select * from tbstudent where id = ?";
        try {
            PreparedStatement ps = (PreparedStatement) con.prepareStatement(sql);
            ps.setString(1, id);
            ResultSet rs = ps.executeQuery();
            if (rs.next()) {
                s.setId(rs.getString("id"));
                s.setName(rs.getString("name"));
                s.setIdClass(rs.getString("idClass"));
                s.setGender(rs.getBoolean("gender"));
                s.setMark(rs.getDouble("mark"));
                return s;
            }
            else return null;
        } catch (SQLException e) {
            System.out.println(e);
            return null;
        }
    }

    @Override
    public boolean insertStudent(String id, String name, String idClass, boolean gender, double mark) {
        Connection con = getCon();
        String sql = "Insert into tbstudent (id, name, idClass, gender, mark) values (?, ?, ?, ?, ?)";
        try {
            PreparedStatement ps = (PreparedStatement) con.prepareStatement(sql);
            ps.setString(1, id);
            ps.setString(2, name);
            ps.setString(3, idClass);
            ps.setBoolean(4, gender);
            ps.setDouble(5, mark);
            int rowCount = ps.executeUpdate();
            return rowCount > 0;
        } catch (SQLException e) {
            System.out.println(e);
            return false;
        }
    }

    @Override
    public boolean delStudent(String id) {
        Connection con = getCon();
        String sql = "Delete from tbstudent where id = ?";
        try {
            PreparedStatement ps = (PreparedStatement) con.prepareStatement(sql);
            ps.setString(1, id);
            int rowCount = ps.executeUpdate();
            return rowCount > 0;
        } catch (SQLException e) {
            System.out.println(e);
            return false;
        }
    }

    @Override
    public boolean updateStudent(String id, String name, String idClass, boolean gender, double mark) {
        Connection con = getCon();
        String sql = "Update tbstudent set name = ?, idClass = ?, gender = ?, mark = ? where id = ?";
        try {
            PreparedStatement ps = (PreparedStatement) con.prepareStatement(sql);
            ps.setString(5, id);
            ps.setString(1, name);
            ps.setString(2, idClass);
            ps.setBoolean(3, gender);
            ps.setDouble(4, mark);
            ps.executeUpdate();
            return ps.executeUpdate() > 0;
        } catch (SQLException e) {
            System.out.println(e);
            return false;
        }
    }

    @Override
    public ArrayList<String> getIdClass() {
        Connection con = getCon();
        String sql = "Select idClass from tbstudent group by idClass";
        ArrayList<String> arrayList = new ArrayList<>();
        try {
            PreparedStatement ps = (PreparedStatement) con.prepareStatement(sql);
            ResultSet rs = ps.executeQuery();
            while (rs.next()) {
                arrayList.add(rs.getString("idClass"));
            }
        } catch (SQLException e) {
            System.out.println(e);
        }
        return arrayList;
    }
}
