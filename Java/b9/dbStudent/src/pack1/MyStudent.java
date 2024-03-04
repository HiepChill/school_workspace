package pack1;

import java.sql.*;
import java.util.ArrayList;

public class MyStudent implements IStudent{

    @Override
    public Connection getCon() {
        Connection conn = null;
        String url = "jdbc:mariadb://localhost/dbstudent";
        String user = "root";
        String pwd = "12345678";
        try {
            Class.forName("org.mariadb.jdbc.Driver");
            conn = DriverManager.getConnection(url, user, pwd);

        } catch (ClassNotFoundException | SQLException e) {
            throw new RuntimeException(e);
        }
        return conn;
    }

    @Override
    public ArrayList<ArrayList<String>> displayAll() {
        Connection conn = getCon();
        String sql = "Select tbstudent.id, name, idClass, gender, idSubject, mark1, mark2, nameS from tbstudent, tbmark where tbstudent.id = tbmark.id";
        ArrayList<ArrayList<String>> ls = new ArrayList<>();
        try {
            PreparedStatement ps = conn.prepareStatement(sql);
            ResultSet rs = ps.executeQuery();
            while (rs.next()) {
                ArrayList<String> list = new ArrayList<>();
               list.add(rs.getString("id"));
               list.add(rs.getString("name"));
               list.add(rs.getString("idClass"));
               Boolean gender = rs.getBoolean("gender");
               if(gender) {
                   list.add("Nam");
               }
               else list.add("Nữ");
               list.add(rs.getString("idSubject"));
               Double mark1 = rs.getDouble("mark1");
               list.add(mark1.toString());
               Double mark2 = rs.getDouble("mark2");
               list.add(mark2.toString());
               list.add(rs.getString("nameS"));
               ls.add(list);
            }
        } catch (SQLException e) {
            System.out.println("Lỗi!");
        }
        return ls;
    }

    @Override
    public boolean delStudent(String id) {
        Connection conn = getCon();
        String sql = "Delete from tbstudent where id = ?";
        try {
            PreparedStatement ps = (PreparedStatement) conn.prepareStatement(sql);
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
        Connection conn = getCon();
        String sql = "Insert into tbstudent (id, name, idClass, gender) values (? , ? , ? , ?)";
        try {
            PreparedStatement ps = (PreparedStatement) conn.prepareStatement(sql);
            ps.setString(1, id);
            ps.setString(2, name);
            ps.setString(3, idClass);
            ps.setBoolean(4, gender);
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
        Connection conn = getCon();
        String sql = "Update tbstudent set name = ?, idClass = ?, gender = ? where id = ?";
        try {
            PreparedStatement ps = (PreparedStatement) conn.prepareStatement(sql);
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
    public ArrayList<ArrayList<String>> displayStudents(String classID) {
        Connection con = getCon();
        String sql = "Select tbstudent.id, name, idClass, gender, idSubject, mark1, mark2, nameS FROM tbstudent, tbmark WHERE tbstudent.id = tbmark.id AND idClass = ?";
        ArrayList<ArrayList<String>> ls = new ArrayList<>();

        try {
            PreparedStatement ps = (PreparedStatement) con.prepareStatement(sql);
            ps.setString(1, classID);
            ResultSet rs = ps.executeQuery();
            while (rs.next()){
                ArrayList<String> list = new ArrayList<>();
                list.add(rs.getString("id"));
                list.add(rs.getString("name"));
                list.add(rs.getString("idClass"));
                Boolean gender = rs.getBoolean("gender");
                if(gender) {
                    list.add("Nam");
                }
                else list.add("Nữ");
                list.add(rs.getString("idSubject"));
                Double mark1 = rs.getDouble("mark1");
                list.add(mark1.toString());
                Double mark2 = rs.getDouble("mark2");
                list.add(mark2.toString());
                list.add(rs.getString("nameS"));
                ls.add(list);
            }
        } catch (SQLException e){}
        return ls;
    }

    @Override
    public ArrayList<Student> displayStudents(String classID, String nameS) {
        Connection conn = getCon();
        String sql = "Select * from tbstudent where idClass = ? and nameS = ?";
        ArrayList<Student> students = new ArrayList<>();
        try {
            PreparedStatement ps = (PreparedStatement) conn.prepareStatement(sql);
            ps.setString(1, classID);
            ps.setString(2, nameS);
            ResultSet rs = ps.executeQuery();
            while (rs.next()) {
                Student e = new Student();
                e.setId(rs.getString("id"));
                e.setName(rs.getString("name"));
                e.setIdClass(rs.getString("idClass"));
                e.setGender(rs.getBoolean("gender"));
                students.add(e);
            }
        } catch (SQLException e) {
            System.out.println("loi");
        }
        return students;
    }

    @Override
    public ArrayList<ArrayList<String>> displayStudent(String id) {
        Connection conn = getCon();
        String sql = "Select tbstudent.id, name, isClass, gender, idSubject, nameS, mark1, mark2 from tbstudent as s, tbmark as m where s.id = m.id and s.id = ?";
        ArrayList<ArrayList<String>> ls = new ArrayList<>();
        try {
            PreparedStatement ps = (PreparedStatement) conn.prepareStatement(sql);
            ps.setString(1, id);
            ResultSet rs = ps.executeQuery();

            while (rs.next()) {
                ArrayList<String> list = new ArrayList<>();
                list.add(rs.getString("id"));
                list.add(rs.getString("name"));
                list.add(rs.getString("idClass"));
                boolean gender = rs.getBoolean("gender");
                if(gender) {
                    list.add("Nam");
                }
                else list.add("Nữ");
                list.add(rs.getString("idSubject"));
                Double mark1 = rs.getDouble("mark1");
                list.add(mark1.toString());
                Double mark2 = rs.getDouble("mark2");
                list.add(mark2.toString());
                list.add(rs.getString("nameS"));
                ls.add(list);
            }
        } catch (SQLException sqlException) {
            return null;
        }
        return ls;
    }

    @Override
    public ArrayList<String> getIdClass() {
        Connection conn = getCon();
        String sql = "Select idClass from tbstudent group by idClass";
        ArrayList<String> arrayList = new ArrayList<>();
        try {
            PreparedStatement ps = (PreparedStatement) conn.prepareStatement(sql);
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
    public ArrayList<String> getNameS() {
        Connection conn = getCon();
        String sql = "Select nameS from tbmark group by nameS";
        ArrayList<String> arrayList = new ArrayList<>();
        try {
            PreparedStatement ps = (PreparedStatement) conn.prepareStatement(sql);
            ResultSet rs = ps.executeQuery();
            while (rs.next()) {
                arrayList.add(rs.getString("nameS"));
            }
        } catch (SQLException e) {
            System.out.println(e);
        }
        return arrayList;
    }
}
