package pack2;

import pack1.Process_Student;
import pack1.Student;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.util.Vector;

public class FormSearchByClassGender implements ActionListener {
    JFrame jfFindByClass_Gender;
    JLabel jLabelClass;
    JLabel jLabelGender;
    JComboBox<String> jComboBoxClassID;
    JComboBox<String> jComboBoxGender;
    JButton jButtonSearch;
    DefaultTableModel defaultTableModel = new DefaultTableModel();
    Process_Student ps = new Process_Student();
    Vector tbHeader = new Vector<>();
    Vector tbContent = new Vector<>();

    public void createLabel (JLabel jLabel, String text, int x, int y, int we, int he) {
        jLabel = new JLabel();
        jLabel.setText(text);
        jLabel.setBounds(x, y, we, he);
        jfFindByClass_Gender.add(jLabel);
    }

    public void createUserinterface() {
        int w = 370, h = 200, x = 50, y = 30, d = 20, we = 150, he = 30;
        jfFindByClass_Gender = new JFrame();
        jfFindByClass_Gender.setTitle("Tìm kiếm theo lớp và giới tính");
        jfFindByClass_Gender.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jfFindByClass_Gender.setSize(w, h);
        jfFindByClass_Gender.setResizable(false);
        jfFindByClass_Gender.setLocationRelativeTo(null);
        jfFindByClass_Gender.setLayout(null);
        jfFindByClass_Gender.setVisible(true);

        //Label
        createLabel(jLabelClass, "Chọn lớp: ", x, y, we - 50, he);
        createLabel(jLabelGender, "Chọn giới tính:", x, y + 2 * d, we - 50, he);

        //ComboBox
        //createComboboxClass(jComboBoxClassID, ps.getIdClass(), x + 100, y, we, he);
        jComboBoxClassID = new JComboBox<>();
        ArrayList<String> listClass = ps.getIdClass();
        for (int i = 0; i < listClass.size(); i++) {
            jComboBoxClassID.addItem(listClass.get(i));
        }
        jComboBoxClassID.setBounds(x + 100, y, we, he);
        jfFindByClass_Gender.add(jComboBoxClassID);

        //createComboboxGender(jComboBoxGender, ps.getGender(), x + 100, y + 2 * d, we, he);
        jComboBoxGender = new JComboBox<>();
        ArrayList<String> listGender = ps.getGender();
        ArrayList<String> listGen = new ArrayList<>();
        for (int i = 0; i < listGender.size(); i++) {
            //listGen.add(listGender.get(i) ? "Nam" : "Nữ");
            jComboBoxGender.addItem(listGender.get(i));
        }
        jComboBoxGender.setBounds(x + 100, y + 2 * d, we, he);
        jfFindByClass_Gender.add(jComboBoxGender);

        //Button
        jButtonSearch = new JButton("Tìm kiếm");
        jButtonSearch.setBounds(x + 150, y + 4 * d, we - x, he);
        jButtonSearch.addActionListener(this);
        jfFindByClass_Gender.add(jButtonSearch);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        jButtonSearch = (JButton) e.getSource();
        defaultTableModel.setRowCount(0);
        defaultTableModel.setColumnCount(0);
        tbContent.clear();

        JFrame jfResult = new JFrame("Kết quả tìm kiếm");
        jfResult.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        jfResult.setSize(400, 300);
        jfResult.setLocationRelativeTo(null);

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
            String classID = jComboBoxClassID.getSelectedItem() + "";
            boolean gender = jComboBoxGender.getSelectedItem().equals("Nam") ? true : false;
            //boolean gender = gen.equalsIgnoreCase("Male") ? true : false;
            ArrayList<Student> students = ps.getStudent_byClass_Gender(classID, gender);

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
            JOptionPane.showMessageDialog(null, ex.getMessage());
        }

        jfResult.add(jScrollPane);
        jfResult.setVisible(true);
    }

    public static void main(String[] args) {
        FormSearchByClassGender f = new FormSearchByClassGender();
        f.createUserinterface();
    }

}
