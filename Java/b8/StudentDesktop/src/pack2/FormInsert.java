package pack2;

import pack1.Process_Student;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;

public class FormInsert implements ActionListener {
    Process_Student ps = new Process_Student();

    JFrame jFrameInsert;
    JLabel jLabelId;
    JTextField jTextFieldId;
    JLabel jLabelName;
    JTextField jTextFieldName;
    JLabel jLabelIdClass;
    JComboBox jComboBoxIdClass;
    JLabel jLabelGender;
    JRadioButton jRadioButtonGenderM;
    JRadioButton jRadioButtonGenderF;
    JLabel jLabelMark;
    JTextField jTextFieldMark;
    JButton jButtonInsert;

    public JLabel createLabel(JLabel jLabel, String text, int x, int y, int we, int he) {
        jLabel = new JLabel();
        jLabel.setBounds(x, y, we, he);
        jLabel.setText(text);
        jFrameInsert.add(jLabel);
        return jLabel;
    }

    public JTextField createTextField(int x, int y, int we, int he) {
        JTextField jTextField = new JTextField();
        jTextField.setEditable(true);
        jTextField.setBounds(x, y, we, he);
        jFrameInsert.add(jTextField);
        return jTextField;
    }

    public JRadioButton createRadioButton(String text, int x, int y, int we, int he) {
        JRadioButton jRadioButton = new JRadioButton();
        jRadioButton.setText(text);
        jRadioButton.setBounds(x, y, we, he);
        jFrameInsert.add(jRadioButton);
        return jRadioButton;
    }

    public void createInsertFrame() {
        int w = 500, h = 400, we = 200, he = 30, x = 10, y = 10, d = 20;

        jFrameInsert = new JFrame();
        jFrameInsert.setTitle("Them moi sinh vien");
        jFrameInsert.setSize(w, h);
        jFrameInsert.setDefaultCloseOperation(jFrameInsert.EXIT_ON_CLOSE);
        jFrameInsert.setResizable(false);
        jFrameInsert.setVisible(true);
        jFrameInsert.setLocationRelativeTo(null);
        jFrameInsert.setLayout(null);

        JLabel[] jLabels = {jLabelId, jLabelName, jLabelIdClass, jLabelGender, jLabelMark};
        String[] labelNames = {"Ma sinh vien", "Ho ten", "Lop", "Gioi tinh", "Diem"};
        for (int i = 0; i < labelNames.length; i++) {
            createLabel(jLabels[i], labelNames[i], x, y+i*(d+he), we, he);
        }

        jTextFieldId = createTextField(x+we+d, y, we, he);
        jTextFieldName = createTextField(x+we+d, y+d+he, we, he);

        jComboBoxIdClass = new JComboBox();
        ArrayList<String> list = ps.getIdClass();
        for (int i = 0; i < list.size(); i++) {
            jComboBoxIdClass.addItem(list.get(i));
        }
        jComboBoxIdClass.setBounds(x+we+d, y+(d+he)*2, we, he);
        jFrameInsert.add(jComboBoxIdClass);

        jRadioButtonGenderM = createRadioButton("Nam", x+we+d, y+(d+he)*3, we/2, he);
        jRadioButtonGenderF = createRadioButton("Nữ", x+we+d*2+we/2, y+(d+he)*3, we/2, he);

        ButtonGroup buttonGroupGender = new ButtonGroup();
        buttonGroupGender.add(jRadioButtonGenderM);
        buttonGroupGender.add(jRadioButtonGenderF);

        jTextFieldMark = createTextField(x+we+d, y+(d+he)*4, we, he);

        jButtonInsert = new JButton();
        jButtonInsert.setText("Them");
        jButtonInsert.setBounds(x+we+d, y+(d+he)*5, we, he);
        jButtonInsert.addActionListener(this);
        jFrameInsert.add(jButtonInsert);
    }


    @Override
    public void actionPerformed(ActionEvent e) {
        jButtonInsert = (JButton) e.getSource();
        String id = jTextFieldId.getText();
        String name = jTextFieldName.getText();
        String idClass = jComboBoxIdClass.getSelectedItem().toString();
        double mark = Double.parseDouble(jTextFieldMark.getText());
        boolean gender = jRadioButtonGenderM.isSelected();
        if (ps.insertStudent(id, name, gender, idClass, mark)) {
            JOptionPane.showMessageDialog(null, "Them thanh cong");
        } else {
            JOptionPane.showMessageDialog(null, "Them that bai");
        }
    }

    public static void main(String[] args) {
        FormInsert formInsert = new FormInsert();
        formInsert.createInsertFrame();
    }
}
