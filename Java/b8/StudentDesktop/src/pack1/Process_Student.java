package pack1;

import java.sql.*;
import java.util.ArrayList;

public class Process_Student implements IStudent {

    @Override
    public Connection getCon() {
        Connection cn = null;
        String url = "jdbc:mariadb://localhost/db_student";
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
        Connection cn = getCon();
        String sql = "Select * from tb_student";
        ArrayList<Student> students = new ArrayList<>();
        try {
            PreparedStatement ps = (PreparedStatement) cn.prepareStatement(sql);
            ResultSet rs = ps.executeQuery();
            while (rs.next()) {
                Student e = new Student();
                e.setId(rs.getString("id"));
                e.setName(rs.getString("name"));
                e.setClassID(rs.getString("idClass"));
                e.setGender(rs.getBoolean("gender"));
                e.setMark(rs.getDouble("mark"));
                students.add(e);
            }
        } catch (SQLException e) {
            System.out.println("Lỗi!");
        }
        return students;
    }

    @Override
    public boolean delStudent(String id) {
        Connection cn = getCon();
        String sql = "Delete from tb_student where id = ?";
        try {
            PreparedStatement ps = (PreparedStatement) cn.prepareStatement(sql);
            ps.setString(1, id);
            if (ps.executeUpdate() > 0)
                return true;
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
        return false;
    }

    @Override
    public boolean insertStudent(String id, String name, boolean gender, String idClass, double mark) {
        Connection cn = getCon();
        String sql = "Insert into tb_student (id, name, idClass, gender, mark) values (? , ? , ? , ? , ?)";
        try {
            PreparedStatement ps = (PreparedStatement) cn.prepareStatement(sql);
            ps.setString(1, id);
            ps.setString(2, name);
            ps.setString(3, idClass);
            ps.setBoolean(4, gender);
            ps.setDouble(5, mark);
            if (ps.executeUpdate() > 0) {
                return true;
            }
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
        return false;
    }

    @Override
    public boolean updateStudent(String id, String name, boolean gender, String idClass, double mark) {
        Connection cn = getCon();
        String sql = "Update tb_student set name = ?, idClass = ?, gender = ?, mark = ? where id = ?";
        try {
            PreparedStatement ps = (PreparedStatement) cn.prepareStatement(sql);
            ps.setString(5, id);
            ps.setString(1, name);
            ps.setString(2, idClass);
            ps.setBoolean(3, gender);
            ps.setDouble(4, mark);
            if (ps.executeUpdate() > 0)
                return true;
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
        return false;
    }

    @Override
    public ArrayList<Student> getStudent_byClass(String classID) {
        Connection cn = getCon();
        String sql = "Select * from tb_student where idClass = ?";
        ArrayList<Student> students = new ArrayList<>();
        try {
            PreparedStatement ps = (PreparedStatement) cn.prepareStatement(sql);
            ps.setString(1, classID);
            ResultSet rs = ps.executeQuery();
            while (rs.next()) {
                Student e = new Student();
                e.setId(rs.getString("id"));
                e.setName(rs.getString("name"));
                e.setClassID(rs.getString("idClass"));
                e.setGender(rs.getBoolean("gender"));
                e.setMark(rs.getDouble("mark"));
                students.add(e);
            }
        } catch (SQLException e) {
            System.out.println("loi");
        }
        return students;
    }

    @Override
    public ArrayList<Student> getStudent_byClass_Gender(String classID, boolean gender) {
        Connection cn = getCon();
        String sql = "Select * from tb_student where idClass = ? and gender = ?";
        ArrayList<Student> students = new ArrayList<>();
        try {
            PreparedStatement ps = (PreparedStatement) cn.prepareStatement(sql);
            ps.setString(1, classID);
            ps.setBoolean(2, gender);
            ResultSet rs = ps.executeQuery();
            while (rs.next()) {
                Student e = new Student();
                e.setId(rs.getString("id"));
                e.setName(rs.getString("name"));
                e.setClassID(rs.getString("idClass"));
                e.setGender(rs.getBoolean("gender"));
                e.setMark(rs.getDouble("mark"));
                students.add(e);
            }
        } catch (SQLException e) {
            System.out.println("loi");
        }
        return students;
    }

    @Override
    public Student getStudent_byID(String id) {
        Connection cn = getCon();
        String sql = "Select * from tb_student where id = ?";
        Student e = new Student();
        try {
            PreparedStatement ps = (PreparedStatement) cn.prepareStatement(sql);
            ps.setString(1, id);
            ResultSet rs = ps.executeQuery();
            if (rs.next()) {
                e.setId(rs.getString("id"));
                e.setName(rs.getString("name"));
                e.setClassID(rs.getString("idClass"));
                e.setGender(rs.getBoolean("gender"));
                e.setMark(rs.getDouble("mark"));
                return e;
            }
        } catch (SQLException sqlException) {
            return null;
        }
        return null;
    }
    @Override
    public ArrayList<String> getIdClass() {
        Connection con = getCon();
        String sql = "Select idClass from tb_student group by idClass";
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

    @Override
    public ArrayList<String> getGender() {
        Connection con = getCon();
        String sql = "Select gender from tb_student group by gender";
        ArrayList<String> list = new ArrayList<>();
        try {
            PreparedStatement ps = (PreparedStatement) con.prepareStatement(sql);
            ResultSet rs = ps.executeQuery();
            while (rs.next()) {
                //list.add(rs.getBoolean("gender"));
                if (rs.getBoolean("gender")) list.add("Nam");
                else list.add("Nữ");
            }
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
        return list;
    }
    @Override
    public ArrayList<String> getId() {
        Connection con = getCon();
        String sql = "Select id from tb_student group by id";
        ArrayList<String> arrayList = new ArrayList<>();
        try {
            PreparedStatement ps = (PreparedStatement) con.prepareStatement(sql);
            ResultSet rs = ps.executeQuery();
            while (rs.next()) {
                arrayList.add(rs.getString("id"));
            }
        } catch (SQLException e) {
            System.out.println(e);
        }
        return arrayList;
    }

}
