package pack2;

import pack1.Process_Student;
import pack1.Student;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.util.Vector;

public class FormSearchByClass implements ActionListener {
    JFrame JFSearchByClassID;
    JLabel JLabel;
    JComboBox<String> JComboBoxClassID;
    JButton JButtonSearch;

    DefaultTableModel defaultTableModel = new DefaultTableModel();
    Process_Student ps = new Process_Student();
    Vector tbHeader = new Vector<>();
    Vector tbContent = new Vector<>();


    public void createUserInterface() {
        int w = 450, h = 140, x = 50, y = 30, d = 20, we = 150, he = 30;
        JFSearchByClassID = new JFrame();
        JFSearchByClassID.setTitle("Tìm kiếm theo lớp");
        JFSearchByClassID.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        JFSearchByClassID.setSize(w,h);
        JFSearchByClassID.setResizable(false);
        JFSearchByClassID.setLocationRelativeTo(null);
        JFSearchByClassID.setLayout(null);

        // Label
        JLabel = new JLabel();
        JLabel.setText("Chon lop");
        JLabel.setBounds(x,y,we-50,he);
        JFSearchByClassID.add(JLabel);

        //Combobox
        JComboBoxClassID = new JComboBox<>();

        ArrayList<String> classID = ps.getIdClass();
        for (int i = 0; i < classID.size(); i++) {
            JComboBoxClassID.addItem(classID.get(i));
        }

        JComboBoxClassID.setBounds(x+70,y,we,he);
        JFSearchByClassID.add(JComboBoxClassID);

        // Button
        JButtonSearch = new JButton("Tìm kiếm");
        JButtonSearch.setBounds(x+70+ we+d,y,we-x,he);
        JButtonSearch.addActionListener(this);
        JFSearchByClassID.add(JButtonSearch);

        JFSearchByClassID.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        JButtonSearch = (JButton) e.getSource();
        defaultTableModel.setRowCount(0);
        defaultTableModel.setColumnCount(0);
        tbContent.clear(); // Xóa dữ liệu cũ trong tbContent

        JFrame JFResult = new JFrame("Kết quả tìm kiếm theo lớp");
        JFResult.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        JFResult.setSize(400, 300);
        JFResult.setLocationRelativeTo(null);

        tbHeader.add("MSV");
        tbHeader.add("Họ và tên");
        tbHeader.add("Lớp");
        tbHeader.add("Giới tính");
        tbHeader.add("Điểm quá trình");

        JTable tbStudent = new JTable();
        tbStudent.setModel(defaultTableModel);
        tbStudent.setAutoResizeMode(JTable.AUTO_RESIZE_ALL_COLUMNS);
        tbStudent.setFillsViewportHeight(true);

        JScrollPane jScrollPane = new JScrollPane(tbStudent);
        jScrollPane.setHorizontalScrollBarPolicy(JScrollPane.HORIZONTAL_SCROLLBAR_AS_NEEDED);
        jScrollPane.setVerticalScrollBarPolicy(JScrollPane.VERTICAL_SCROLLBAR_AS_NEEDED);

        try {
            String ClassID = JComboBoxClassID.getSelectedItem() + "";
            ArrayList<Student> students = ps.getStudent_byClass(ClassID);

            for (int i = 0; i < students.size(); i++) {
                Student student = students.get(i);
                Vector<Object> tbRow = new Vector<>();
                tbRow.add(student.getId());
                tbRow.add(student.getName());
                tbRow.add(student.getClassID());
                tbRow.add(student.isGender() ? "Nam" : "Nữ");
                tbRow.add(student.getMark());

                tbContent.add(tbRow);
            }

            defaultTableModel.setDataVector(tbContent, tbHeader);
            tbStudent.setModel(defaultTableModel);

        } catch (Exception ex) {
            JOptionPane.showMessageDialog(null, ex.getMessage(), "Lỗi r đừng fix bug =)))", JOptionPane.ERROR_MESSAGE);
        }

        JFResult.add(jScrollPane);
        JFResult.setVisible(true);
    }

    public static void main(String[] args) {
        FormSearchByClass f = new FormSearchByClass();
        f.createUserInterface();

    }
}


