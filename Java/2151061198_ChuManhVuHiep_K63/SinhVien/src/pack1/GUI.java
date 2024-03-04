package pack1;
import java.sql.*;
import java.util.ArrayList;
import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.util.ArrayList;
import java.util.Vector;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class GUI implements ActionListener{
    public Connection getCon() {
        Connection cn = null;
        String url = "jdbc:mariadb://localhost/qlsinhvien";
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

    public ArrayList<SinhVien> getListStudent() {
        Connection cn = getCon();
        String sql = "Select * from tbsv";
        ArrayList<SinhVien> sinhviens = new ArrayList<>();
        try {
            PreparedStatement ps = (PreparedStatement) cn.prepareStatement(sql);
            ResultSet rs = ps.executeQuery();
            while (rs.next()) {
                SinhVien e = new SinhVien();
                e.setMa(rs.getInt("id"));
                e.setTen(rs.getString("ten"));
                e.setQueQuan(rs.getString("queQuan"));
                e.setBirthDay(rs.getDate("birthDay"));
                sinhviens.add(e);
            }
        } catch (SQLException e) {
            System.out.println("Lỗi!");
        }
        return sinhviens;
    }

    JFrame jfDisplayAll;
    DefaultTableModel defaultTableModel = new DefaultTableModel();
    Vector tbHeader = new Vector();
    Vector tbContent = new Vector();
    JButton jButton;

    public void createUserInterface() {
        int w = 400, h = 150, x = 100, y = 40, d = 20, we = 170, he = 30;
        jfDisplayAll = new JFrame();
        jfDisplayAll.setTitle("Danh sách");
        jfDisplayAll.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jfDisplayAll.setSize(w, h);
        jfDisplayAll.setResizable(false);
        jfDisplayAll.setLocationRelativeTo(null);
        jfDisplayAll.setLayout(null);
        jfDisplayAll.setVisible(true);

        jButton = new JButton("Hiển thị");
        jButton.setBounds(x, y, we, he);
        jButton.addActionListener(this);
        jfDisplayAll.add(jButton);
    }

    public void showResult() {
        JFrame jfResult = new JFrame("List Student");
        jfResult.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);

        jfResult.setVisible(true);
        jfResult.setLocationRelativeTo(null);

        jfResult.setSize(550, 500);

        tbHeader.add("ID");
        tbHeader.add("Name");
        tbHeader.add("quequan");
        tbHeader.add("birthday");



        JTable tbStudent = new JTable();
        tbStudent.setModel(defaultTableModel);

        tbStudent.setAutoResizeMode(JTable.AUTO_RESIZE_ALL_COLUMNS); //Tự điều chỉnh cột theo nội dung
        tbStudent.setFillsViewportHeight(true); //Cho phép cho lên đầy đủ

        JScrollPane scroll = new JScrollPane(tbStudent); //Điều chỉnh JFrame
        scroll.setHorizontalScrollBarPolicy(JScrollPane.HORIZONTAL_SCROLLBAR_AS_NEEDED); //Điều chình chiều rộng - hàng
        scroll.setVerticalScrollBarPolicy(JScrollPane.VERTICAL_SCROLLBAR_AS_NEEDED); //Điều chỉnh chiều dài - cột

        try {
            ArrayList<SinhVien> plist = getListStudent();

            for (int i = 0; i < plist.size(); i++) {
                Vector tbRow = new Vector();
                tbRow.add(plist.get(i).getMa());
                tbRow.add(plist.get(i).getTen());
                tbRow.add(plist.get(i).getQueQuan());
                tbRow.add(plist.get(i).getBirthDay());
                tbContent.add(tbRow);
            }
            defaultTableModel.setDataVector(tbContent, tbHeader);
            tbStudent.setModel(defaultTableModel);

        } catch (Exception ex) {
            JOptionPane.showMessageDialog(null, ex.getMessage(), "Lỗi r đừng fix bug =)))", JOptionPane.ERROR_MESSAGE);
        }

        jfResult.add(scroll);
        jfResult.setVisible(true);
    }
    public void actionPerformed(ActionEvent e) {
        jButton = (JButton) e.getSource();
        defaultTableModel.setRowCount(0);
        defaultTableModel.setColumnCount(0);
        tbContent.clear(); // Xóa dữ liệu cũ trong tbContent
        showResult();
    }

    public static void main(String[] args) {
        GUI f = new GUI();
        f.createUserInterface();
    }
}
