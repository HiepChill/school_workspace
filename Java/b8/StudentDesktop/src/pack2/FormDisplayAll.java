package pack2;
import pack1.Process_Student;
import pack1.Student;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.util.ArrayList;
import java.util.Vector;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class FormDisplayAll implements ActionListener {
    JFrame jfDisplayAll;
    DefaultTableModel defaultTableModel = new DefaultTableModel();
    Process_Student ps = new Process_Student();
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
        tbHeader.add("ClassID");
        tbHeader.add("Gender");
        tbHeader.add("Mark");


        JTable tbStudent = new JTable();
        tbStudent.setModel(defaultTableModel);

        tbStudent.setAutoResizeMode(JTable.AUTO_RESIZE_ALL_COLUMNS); //Tự điều chỉnh cột theo nội dung
        tbStudent.setFillsViewportHeight(true); //Cho phép cho lên đầy đủ

        JScrollPane scroll = new JScrollPane(tbStudent); //Điều chỉnh JFrame
        scroll.setHorizontalScrollBarPolicy(JScrollPane.HORIZONTAL_SCROLLBAR_AS_NEEDED); //Điều chình chiều rộng - hàng
        scroll.setVerticalScrollBarPolicy(JScrollPane.VERTICAL_SCROLLBAR_AS_NEEDED); //Điều chỉnh chiều dài - cột

        try {
            ArrayList<Student> plist = ps.getListStudent();

            for (int i = 0; i < plist.size(); i++) {
                Vector tbRow = new Vector();
                tbRow.add(plist.get(i).getId());
                tbRow.add(plist.get(i).getName());
                tbRow.add(plist.get(i).getClassID());
                Boolean gender = plist.get(i).isGender();
                if(gender) {
                    tbRow.add("Nam");
                }
                else tbRow.add("Nữ");
                tbRow.add(plist.get(i).getMark());
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
        FormDisplayAll f = new FormDisplayAll();
        f.createUserInterface();
    }
}
