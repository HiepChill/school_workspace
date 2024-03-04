package pack2;

import pack1.MyStudent;
import pack1.Student;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.util.Vector;

public class formFindById implements ActionListener {
    JFrame jfFindByID;
    JLabel jLabelID;
    JTextField jTextFieldID;
    JButton jButtonSearch;
    DefaultTableModel defaultTableModel = new DefaultTableModel();
    MyStudent ms = new MyStudent();
    Vector tbHeader = new Vector<>();
    Vector tbContent = new Vector<>();
    JTable tbStudent;
    Student student = new Student();

    public void createInterface() {
        int w = 450, h = 200, x = 30, y = 70, d = 20, we = 150, he = 30;
        jfFindByID = new JFrame();
        jfFindByID.setTitle("Tìm kiếm theo ID");
        jfFindByID.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jfFindByID.setSize(w,h);
        jfFindByID.setResizable(false);
        jfFindByID.setLocationRelativeTo(null);
        jfFindByID.setLayout(null);

        // Label
        jLabelID = new JLabel();
        jLabelID.setText("Nhap ID:");
        jLabelID.setBounds(x, y, we-50, he);
        jfFindByID.add(jLabelID);

        // TextFeild
        jTextFieldID = new JTextField();
        jTextFieldID.setEditable(true);
        jTextFieldID.setBounds(x + 60, y, we, he);
        jfFindByID.add(jTextFieldID);

        // Button
        jButtonSearch = new JButton("Tìm kiếm");
        jButtonSearch.setBounds(x+70+ we+d ,y , we-x, he);
        jButtonSearch.addActionListener(this);
        jfFindByID.add(jButtonSearch);

        jfFindByID.setVisible(true);

    }

    public void showResult() {
        JFrame JFResult = new JFrame("Kết quả tìm kiếm theo ID");
        JFResult.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        JFResult.setSize(550, 500);
        JFResult.setLocationRelativeTo(null);
        JFResult.setVisible(true);

        tbHeader.add("ID");
        tbHeader.add("Name");
        tbHeader.add("ClassID");
        tbHeader.add("Gender");
        tbHeader.add("IDSubject");
        tbHeader.add("Mark1");
        tbHeader.add("Mark2");
        tbHeader.add("NameS");

        tbStudent = new JTable();
        tbStudent.setModel(defaultTableModel);
        tbStudent.setAutoResizeMode(JTable.AUTO_RESIZE_ALL_COLUMNS);
        tbStudent.setFillsViewportHeight(true);

        JScrollPane jScrollPane = new JScrollPane(tbStudent);
        jScrollPane.setHorizontalScrollBarPolicy(JScrollPane.HORIZONTAL_SCROLLBAR_AS_NEEDED);
        jScrollPane.setVerticalScrollBarPolicy(JScrollPane.VERTICAL_SCROLLBAR_AS_NEEDED);

        try {
            String id = jTextFieldID.getText();
            ArrayList<ArrayList<String>> plist = ms.displayStudent(id);
            for (ArrayList<String> list : plist) {
                Vector tbRow = new Vector<>();
                tbRow.add(list.get(0));
                tbRow.add(list.get(1));
                tbRow.add(list.get(2));
                tbRow.add(list.get(3));
                tbRow.add(list.get(4));
                tbRow.add(list.get(5));
                tbRow.add(list.get(6));
                tbRow.add(list.get(7));
                tbContent.add(tbRow);
            }

            defaultTableModel.setDataVector(tbContent, tbHeader);
            tbStudent.setModel(defaultTableModel);

        } catch (Exception ex) {
            JOptionPane.showMessageDialog(null, ex.getMessage(), "Lỗi r đừng fix bug =)))", JOptionPane.ERROR_MESSAGE);
        }

        JFResult.add(jScrollPane) ;
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        jButtonSearch = (JButton) e.getSource();
        defaultTableModel.setRowCount(0);
        defaultTableModel.setColumnCount(0);
        //tbContent.clear(); // Xóa dữ liệu cũ trong tbContent
        showResult();
    }

    public static void main(String[] args) {
        formFindById f = new formFindById();
        f.createInterface();

    }
}
