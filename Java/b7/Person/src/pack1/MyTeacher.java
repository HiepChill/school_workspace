package pack1;

import java.sql.*;
import java.util.ArrayList;

public class MyTeacher implements ITeacher {
    @Override
    public Connection getConnection() {
        Connection conn = null;
        String url = "jdbc:mariadb://localhost/dbteacher";
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
    public ArrayList<Teacher> getListTeacher() {
        Connection conn = getConnection();
        String sql = "Select * from tbteacher";
        ArrayList<Teacher> teachers = new ArrayList<>();
        try {
            PreparedStatement ps = (PreparedStatement) conn.prepareStatement(sql);
            ResultSet rs = ps.executeQuery();
            while (rs.next()) {
                Teacher e = new Teacher();
                e.setId(rs.getInt("id"));
                e.setName(rs.getString("name"));
                e.setBdate(rs.getDate("bdate"));
                e.setSalary(rs.getDouble("salary"));
                e.setGender(rs.getString("gender"));
                teachers.add(e);
            }
        } catch (SQLException e) {
            System.out.println("Lỗi!");
        }
        return teachers;
    }

    @Override
    public boolean addTeacher(int id, String name, Date bdate, double salary, boolean gender) {
        Connection conn = getConnection();
        String sql = "Insert into tbteacher (id, name, bdate, salary, gender) values (? , ? , ? , ? , ?)";
        try {
            PreparedStatement ps = (PreparedStatement) conn.prepareStatement(sql);
            ps.setInt(1, id);
            ps.setString(2 , name);
            ps.setDate(3, bdate);
            ps.setDouble(4, salary);
            ps.setBoolean(5, gender);
            if (ps.executeUpdate() > 0) {
                return true;
            }
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
        return false;
    }

    @Override
    public boolean deleteTeacher (int id) {
        Connection conn = getConnection();
        String sql = "Delete from tbteacher where id = ?";
        try {
            PreparedStatement ps = (PreparedStatement) conn.prepareStatement(sql);
            ps.setInt(1, id);
            if (ps.executeUpdate() > 0)
                return true;
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
        return false;
    }

    @Override
    public boolean updateTeacher (int id, String name, java.util.Date bdate, double salary, boolean gender) {
        Connection conn = getConnection();
        String sql = "Update tbteacher set name = ?, bdate = ?, salary = ?, gender = ? where id = ?";
        try {
            PreparedStatement ps = (PreparedStatement) conn.prepareStatement(sql);
            ps.setInt(5, id);
            ps.setString(1 , name);
            ps.setDate(2, (Date) bdate);
            ps.setDouble(3, salary);
            ps.setBoolean(4, gender);
            if (ps.executeUpdate() > 0)
                return true;
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
        return false;
    }

}
