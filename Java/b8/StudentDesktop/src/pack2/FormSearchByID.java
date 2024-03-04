package pack2;

import pack1.Process_Student;
import pack1.Student;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;

public class FormSearchByID implements ActionListener {
    JFrame jFrameSearchByID;
    JLabel jLabelID;
    JLabel jLabelId, jLabelName, jLabelIdClass, jLabelGender, jLabelMark;
    JTextField jTextFieldID;
    JTextField jTextFieldIdd, jTextFieldName, jTextFieldIdClass, jTextFieldGender, jTextFieldMark;
    JButton jButtonSearch;
    Process_Student ps = new Process_Student();

    public JLabel createLabel(String text, int x, int y, int we, int he) {
        JLabel jLabel = new JLabel();
        jLabel.setBounds(x, y, we, he);
        jLabel.setText(text);
        jFrameSearchByID.add(jLabel);
        return jLabel;
    }

    public JTextField createTextField(int x, int y, int we, int he) {
        JTextField jTextField = new JTextField();
        jTextField.setEditable(true);
        jTextField.setBounds(x, y, we, he);
        jFrameSearchByID.add(jTextField);
        return jTextField;
    }
    
    public void createInterface() {
        int w = 450, h = 400, x = 50, y = 30, d = 20, we = 150, he = 30;
        jFrameSearchByID = new JFrame();
        jFrameSearchByID.setTitle("Tìm kiếm theo ID");
        jFrameSearchByID.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jFrameSearchByID.setSize(w,h);
        jFrameSearchByID.setResizable(false);
        jFrameSearchByID.setLocationRelativeTo(null);
        jFrameSearchByID.setLayout(null);

        //Label
        jLabelID = createLabel("ID:", x,y,we - 50,he);
        JLabel[] jLabels = {jLabelId, jLabelName, jLabelIdClass, jLabelGender, jLabelMark};
        String[] labelNames = {"Ma sinh vien:", "Ho ten:", "Lop:", "Gioi tinh:", "Diem:"};
        for (int i = 0; i < labelNames.length; i++) {
            jLabels[i] = createLabel(labelNames[i], x, y + (i + 1) * (d + he), we, he);
        }

        //Textfield
        jTextFieldID = createTextField(x + 50,y,we + 20,he);
        jTextFieldIdd = createTextField(x + we + 2 * d, y + 1 * (d + he), we, he);
        jTextFieldName = createTextField(x + we + 2 * d, y + 2 * (d + he), we, he);
        jTextFieldIdClass = createTextField(x + we + 2 * d, y + 3 * (d + he), we, he);
        jTextFieldGender = createTextField(x + we + 2 * d, y + 4 * (d + he), we, he);
        jTextFieldMark = createTextField(x + we + 2 * d, y + 5 * (d + he), we, he);

        // Button
        jButtonSearch = new JButton("Tìm kiếm");
        jButtonSearch.setBounds(x+70+ we+d,y,we-x,he);
        jButtonSearch.addActionListener(this);
        jFrameSearchByID.add(jButtonSearch);

        jFrameSearchByID.setVisible(true);
    }
    
    @Override
    public void actionPerformed(ActionEvent e) {
        jButtonSearch = (JButton) e.getSource();
        String id = jTextFieldID.getText();
        Student student = ps.getStudent_byID(id);
        if (student == null) JOptionPane.showMessageDialog(null, "Tim kiem that bai");
        else {
            jTextFieldIdd.setText(student.getId());
            jTextFieldName.setText(student.getName());
            jTextFieldGender.setText(student.isGender() ? "Nam" : "Nữ");
            jTextFieldIdClass.setText(student.getClassID());
            jTextFieldMark.setText(String.valueOf(student.getMark()));
        }
    }

    public static void main(String[] args) {
        FormSearchByID f = new FormSearchByID();
        f.createInterface();
    }
}
