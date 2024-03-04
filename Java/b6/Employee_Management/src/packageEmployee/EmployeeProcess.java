package packageEmployee;

import java.sql.*;
import java.time.Period;
import java.util.ArrayList;

public class EmployeeProcess {
    public static Connection getConnection() {
        Connection conn = null;
        String url = "jdbc:mariadb://localhost/dbemployee";
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

    public static void main(String[] args) {
        System.out.print(getConnection());
    }
    public ArrayList<Employee> getListEmployee() {
        Connection conn = getConnection();
        String sql = "Select * from tbemployee";
        ArrayList<Employee> employees = new ArrayList<>();
        try {
            PreparedStatement ps = (PreparedStatement) conn.prepareStatement(sql);
            ResultSet rs = ps.executeQuery();
            while (rs.next()) {
                Employee e = new Employee();
                e.setId(rs.getInt("id"));
                e.setName(rs.getString("name"));
                e.setGender(rs.getString("gender"));
                e.setDept(rs.getString("dept"));
                e.setSalary(rs.getDouble("salary"));
                employees.add(e);
            }
        } catch (SQLException e) {
            System.out.println("loi");
        }
        return employees;
    }

    public ArrayList<Employee> getByDept(String com) {
        Connection conn = getConnection();
        //String sql = "Select * from tbemployee as e where e.dept = '" + com + "'";
        String sql = "Select * from tbemployee where dept = ?";
        ArrayList<Employee> employees = new ArrayList<>();
        try {
            PreparedStatement ps = (PreparedStatement) conn.prepareStatement(sql);
            ps.setString(1, com);
            ResultSet rs = ps.executeQuery();
            while (rs.next()) {
                Employee e = new Employee();
                e.setId(rs.getInt("id"));
                e.setName(rs.getString("name"));
                e.setGender(rs.getString("gender"));
                e.setDept(rs.getString("dept"));
                e.setSalary(rs.getDouble("salary"));
                employees.add(e);
            }
        } catch (SQLException e) {
            System.out.println("loi");
        }
        return employees;
    }

    public ArrayList<Employee> getByGenderDept(String gen , String com) {
        Connection conn = getConnection();
        //String sql = "Select * from tbemployee as e where e.dept = '" + com + "'";
        String sql = "Select * from tbemployee where dept = ? and gender = ?";
        ArrayList<Employee> employees = new ArrayList<>();
        try {
            PreparedStatement ps = (PreparedStatement) conn.prepareStatement(sql);
            ps.setString(1, com);
            ps.setString(2, gen);
            ResultSet rs = ps.executeQuery();
            while (rs.next()) {
                Employee e = new Employee();
                e.setId(rs.getInt("id"));
                e.setName(rs.getString("name"));
                e.setGender(rs.getString("gender"));
                e.setDept(rs.getString("dept"));
                e.setSalary(rs.getDouble("salary"));
                employees.add(e);
            }
        } catch (SQLException e) {
            System.out.println("loi");
        }
        return employees;
    }

    public ArrayList<Employee> getByGender (String gen) {
        Connection conn = getConnection();
        ArrayList<Employee> employees = new ArrayList<>();
        String sql = "Select * from tbemployee where gender = ?";
        try {
            PreparedStatement ps = (PreparedStatement) conn.prepareStatement(sql);
            ps.setString(1 , gen);
            ResultSet rs = ps.executeQuery();
            while (rs.next()) {
                Employee e = new Employee();
                e.setId(rs.getInt("id"));
                e.setName(rs.getString("name"));
                e.setGender(rs.getString("gender"));
                e.setDept(rs.getString("dept"));
                e.setSalary(rs.getDouble("salary"));
                employees.add(e);
            }

        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
        return employees;
    }

    public boolean addEmployee (int id, String name, String gender, String dept, double salary) {
        Connection conn = getConnection();
        String sql = "Insert into tbemployee (id, name, gender, dept, salary) values (? , ? , ? , ? , ?)";
        try {
            PreparedStatement ps = (PreparedStatement) conn.prepareStatement(sql);
            ps.setInt(1, id);
            ps.setString(2 , name);
            ps.setString(3, gender);
            ps.setString(4, dept);
            ps.setDouble(5, salary);
            if (ps.executeUpdate() == 1) {
                return true;
            }
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
        return false;
    }

    public boolean deleteEmployee (int id) {
        Connection conn = getConnection();
        String sql = "Delete from tbemployee where id = ?";
        try {
            PreparedStatement ps = (PreparedStatement) conn.prepareStatement(sql);
            ps.setInt(1, id);
            if (ps.executeUpdate() == 1)
                return true;
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
        return false;
    }

    public boolean updateEmployee (int id , String name, String gender, String dept, double salary) {
        Connection conn = getConnection();
        String sql = "Update tbemployee set name = ?, gender = ?, dept = ?, salary = ? where id = ?";
        try {
            PreparedStatement ps = (PreparedStatement) conn.prepareStatement(sql);
            ps.setString(1, name);
            ps.setString(2, gender);
            ps.setString(3, dept);
            ps.setDouble(4, salary);
            ps.setInt(5, id);
            if (ps.executeUpdate() == 1)
                return true;
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
        return false;
    }
}
