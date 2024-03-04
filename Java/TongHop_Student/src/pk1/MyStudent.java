package pk1;

import java.sql.*;
import java.util.ArrayList;

public class MyStudent implements IStudent{

    @Override
    public Connection getCon() {
        Connection cn = null;
        try {
            Class.forName("org.mariadb.jdbc.Driver");
            cn = DriverManager.getConnection("jdbc:mariadb://localhost:3309/db_student", "root", "lanchioccho");
        } catch (ClassNotFoundException | SQLException e) {}
        return cn;
    }

    @Override
    public boolean insertStudent(String ID, String Name, String ClassID, String Gender) {
        return false;
    }

    @Override
    public boolean updateStudent(String ID, String Name, String ClassID, String Gender) {
        return false;
    }

    @Override
    public boolean deleteStudent(String ID, String Name, String ClassID, String Gender) {
        return false;
    }

    //ALTER TABLE tb_mark ADD FOREIGN KEY (id) REFERENCES tb_student2(id)
    @Override
    public ArrayList<ArrayList<String>> displayAll() {
        Connection con = getCon();
        String sql = "SELECT tb_student2.id, name, classid, gender, names, idsubject, mark1, mark2, mark3 FROM tb_student2, tb_mark WHERE tb_student2.id = tb_mark.id";

        ArrayList<ArrayList<String>> plist = new ArrayList<ArrayList<String>>();

        try {
            PreparedStatement ps = (PreparedStatement) con.prepareStatement(sql);
            ResultSet rs = ps.executeQuery();
            while (rs.next()){
                ArrayList<String> st = new ArrayList<>();
                st.add(rs.getString("id"));
                st.add(rs.getString("name"));
                st.add(rs.getString("classid"));
                st.add(rs.getString("gender"));
                st.add(rs.getString("names"));
                st.add(rs.getString("idsubject"));
                st.add(rs.getString("mark1"));
                st.add(rs.getString("mark2"));
                st.add(rs.getString("mark3"));
                plist.add(st);
            }
        } catch (SQLException e){}
        return plist;
    }

    @Override
    public ArrayList<ArrayList<String>> displayStudent_byID(String ID) {
        Connection con = getCon();
        String sql = "SELECT tb_student2.id, name, classid, gender, names, idsubject, mark1, mark2, mark3 FROM tb_student2, tb_mark WHERE tb_student2.id = tb_mark.id AND tb_student2.id = ?";
        ArrayList<ArrayList<String>> plist = new ArrayList<ArrayList<String>>();

        try {
            PreparedStatement ps = (PreparedStatement) con.prepareStatement(sql);
            ps.setString(1, ID);
            ResultSet rs = ps.executeQuery();

            while (rs.next()){
                ArrayList<String> st = new ArrayList<>();
                st.add(rs.getString("id"));
                st.add(rs.getString("name"));
                st.add(rs.getString("classid"));
                st.add(rs.getString("gender"));
                st.add(rs.getString("names"));
                st.add(rs.getString("idsubject"));
                st.add(rs.getString("mark1"));
                st.add(rs.getString("mark2"));
                st.add(rs.getString("mark3"));
                plist.add(st);
            }
        } catch (SQLException e){}
        return plist;
    }

    @Override
    public ArrayList<ArrayList<String>> displayStudent_byClass(String ClassID) {
        Connection con = getCon();
        String sql = "SELECT tb_student2.id, name, classid, gender, names, idsubject, mark1, mark2, mark3 FROM tb_student2, tb_mark WHERE tb_student2.id = tb_mark.id AND classid = ?";
        ArrayList<ArrayList<String>> plist = new ArrayList<ArrayList<String>>();

        try {
            PreparedStatement ps = (PreparedStatement) con.prepareStatement(sql);
            ps.setString(1, ClassID);
            ResultSet rs = ps.executeQuery();
            while (rs.next()){
                ArrayList<String> st = new ArrayList<>();
                st.add(rs.getString("id"));
                st.add(rs.getString("name"));
                st.add(rs.getString("classid"));
                st.add(rs.getString("gender"));
                st.add(rs.getString("names"));
                st.add(rs.getString("idsubject"));
                st.add(rs.getString("mark1"));
                st.add(rs.getString("mark2"));
                st.add(rs.getString("mark3"));
                plist.add(st);
            }
        } catch (SQLException e){}
        return plist;
    }

    @Override
    public ArrayList<ArrayList<String>> displayStudent_byClassS(String ClassS) {
        Connection con = getCon();
        String sql = "SELECT tb_student2.id, name, classid, gender, names, idsubject, mark1, mark2, mark3 FROM tb_student2, tb_mark WHERE tb_student2.id = tb_mark.id AND idsubject = ?";
        ArrayList<ArrayList<String>> plist = new ArrayList<ArrayList<String>>();

        try {
            PreparedStatement ps = (PreparedStatement) con.prepareStatement(sql);
            ps.setString(1, ClassS);
            ResultSet rs = ps.executeQuery();
            while (rs.next()){
                ArrayList<String> st = new ArrayList<>();
                st.add(rs.getString("id"));
                st.add(rs.getString("name"));
                st.add(rs.getString("classid"));
                st.add(rs.getString("gender"));
                st.add(rs.getString("names"));
                st.add(rs.getString("idsubject"));
                st.add(rs.getString("mark1"));
                st.add(rs.getString("mark2"));
                st.add(rs.getString("mark3"));
                plist.add(st);
            }
        } catch (SQLException e){}
        return plist;
    }

    @Override
    public ArrayList<ArrayList<String>> displayStudent_byClass_Name(String ClassID, String Name) {
        Connection con = getCon();
        String sql = "SELECT tb_student2.id, name, classid, gender, names, idsubject, mark1, mark2, mark3 FROM tb_student2, tb_mark WHERE tb_student2.id = tb_mark.id AND tb_student2.id = ? AND tb_student2.name = ?";
        ArrayList<ArrayList<String>> plist = new ArrayList<ArrayList<String>>();

        try {
            PreparedStatement ps = (PreparedStatement) con.prepareStatement(sql);
            ps.setString(1, ClassID);
            ps.setString(2, Name);
            ResultSet rs = ps.executeQuery();
            while (rs.next()){
                ArrayList<String> st = new ArrayList<>();
                st.add(rs.getString("id"));
                st.add(rs.getString("name"));
                st.add(rs.getString("classid"));
                st.add(rs.getString("gender"));
                st.add(rs.getString("names"));
                st.add(rs.getString("idsubject"));
                st.add(rs.getString("mark1"));
                st.add(rs.getString("mark2"));
                st.add(rs.getString("mark3"));
                plist.add(st);
            }
        } catch (SQLException e){}
        return plist;
    }

    @Override
    public ArrayList<String> getClassID(){
        Connection con = getCon();
        String sql = "SELECT classid FROM tb_student2 GROUP BY classid";
        ArrayList<String>idClass_list = new ArrayList<>();

        try {
            PreparedStatement ps = (PreparedStatement) con.prepareStatement(sql);
            ResultSet rs = ps.executeQuery();

            while (rs.next()){
//                ArrayList<String> st = new ArrayList<>();
//                st.add();
                //String s = rs.getString("classid");
                idClass_list.add(rs.getString("classid"));
            }
        } catch (SQLException e){}
        return idClass_list;
    }

    @Override
    public ArrayList<String> getClassS(){
        Connection con = getCon();
        String sql = "SELECT classid FROM tb_student2 GROUP BY idsubject";
        ArrayList<String>idClass_list = new ArrayList<>();

        try {
            PreparedStatement ps = (PreparedStatement) con.prepareStatement(sql);
            ResultSet rs = ps.executeQuery();

            while (rs.next()){
//                ArrayList<String> st = new ArrayList<>();
//                st.add();
                //String s = rs.getString("classid");
                idClass_list.add(rs.getString("idsubject"));
            }
        } catch (SQLException e){}
        return idClass_list;
    }
}
