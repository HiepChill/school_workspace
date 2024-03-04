package pack;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;

public class FormUpdate implements ActionListener {
    Process_Student processStudent = new Process_Student();
    JFrame jFrameUpdate;
    JLabel jLabelId, jLabelName, jLabelGender, jLabelIdClass, jLabelMark;
    JTextField jTextFieldId;
    JTextField jTextFieldName;
    JTextField jTextFieldMark;
    JRadioButton jRadioButtonGenderM, jRadioButtonGenderF;
    JComboBox jComboBoxIdClass;
    JButton jButtonSearch, jButtonUpdate;

    public JLabel createLabel(JFrame jFrame, String text, int x, int y, int we, int he) {
        JLabel jLabel = new JLabel();
        jLabel.setBounds(x, y, we, he);
        jLabel.setText(text);
        jFrame.add(jLabel);
        return jLabel;
    }

    public JTextField createTextField(JFrame jFrame, int x, int y, int we, int he) {
        JTextField jTextField = new JTextField();
        jTextField.setEditable(true);
        jTextField.setBounds(x, y, we, he);
        jFrame.add(jTextField);
        return  jTextField;
    }

    public JRadioButton createRadioButton(JFrame jFrame, String text, int x, int y, int we, int he) {
        JRadioButton jRadioButton = new JRadioButton();
        jRadioButton.setText(text);
        jRadioButton.setBounds(x, y, we, he);
        jFrame.add(jRadioButton);
        return jRadioButton;
    }

    public JButton createButton(JFrame jFrame, String text, int x, int y, int we, int he) {
        JButton jButton = new JButton();
        jButton.setText(text);
        jButton.setBounds(x, y, we, he);
        jButton.addActionListener(this);
        jFrame.add(jButton);
        return jButton;
    }

    public void createFormUpdate() {
        int w = 600, h = 400, we = 150, he = 30, x = 10, y = 10, d = 20;

        jFrameUpdate = new JFrame();
        jFrameUpdate.setTitle("Them moi sinh vien");
        jFrameUpdate.setSize(w, h);
        jFrameUpdate.setDefaultCloseOperation(jFrameUpdate.EXIT_ON_CLOSE);
        jFrameUpdate.setResizable(false);
        jFrameUpdate.setVisible(true);
        jFrameUpdate.setLocationRelativeTo(null);
        jFrameUpdate.setLayout(null);

        jLabelId = createLabel(jFrameUpdate, "Ma sv", x, y+0*(d+he), we, he);
        jLabelName = createLabel(jFrameUpdate, "Ho ten", x, y+1*(d+he), we, he);
        jLabelGender = createLabel(jFrameUpdate, "Gioi tinh", x, y+2*(d+he), we, he);
        jLabelIdClass = createLabel(jFrameUpdate, "Lop", x, y+3*(d+he), we, he);
        jLabelMark = createLabel(jFrameUpdate, "Diem", x, y+4*(d+he), we, he);

        jTextFieldId = createTextField(jFrameUpdate,x+we+d, y, we, he);
        jTextFieldName = createTextField(jFrameUpdate, x+we+d, y+d+he, we, he);

        jRadioButtonGenderM = createRadioButton(jFrameUpdate, "Nam", x+we+d, y+(d+he)*2, we/2, he);
        jRadioButtonGenderF = createRadioButton(jFrameUpdate, "Nu", x+we+d*2+we/2, y+(d+he)*2, we/2, he);

        jComboBoxIdClass = new JComboBox();
        jComboBoxIdClass.setBounds(x+we+d, y+(d+he)*3, we, he);
        ArrayList<String> idClass = processStudent.getIdClass();
        for (int i=0; i<idClass.size(); i++) {
            jComboBoxIdClass.addItem(idClass.get(i));
        }
        jFrameUpdate.add(jComboBoxIdClass);

        jTextFieldMark = createTextField(jFrameUpdate, x+we+d, y+(d+he)*4, we, he);

        ButtonGroup buttonGroupGender = new ButtonGroup();
        buttonGroupGender.add(jRadioButtonGenderM);
        buttonGroupGender.add(jRadioButtonGenderF);
        
        jButtonSearch = createButton(jFrameUpdate, "Tim kiem",x+(we+d)*2, y, we, he);
        jButtonUpdate = createButton(jFrameUpdate, "Cap nhat", x+(we+d)*2, y+(he+d), we, he);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == jButtonSearch) {
            Student s = processStudent.getStudent_byId(jTextFieldId.getText());
            if (s == null) JOptionPane.showMessageDialog(null, "Tim kiem that bai");
            else {
                jTextFieldName.setText(s.getName());
                if (s.isGender()) jRadioButtonGenderM.setSelected(true);
                else jRadioButtonGenderF.setSelected(true);
                jComboBoxIdClass.setSelectedItem(s.getIdClass());
                jTextFieldMark.setText(String.valueOf(s.getMark()));
            }
        } else if (e.getSource() == jButtonUpdate) {
            if (processStudent.updateStudent(jTextFieldId.getText(),
                    jTextFieldName.getText(),
                    String.valueOf(jComboBoxIdClass.getSelectedItem()),
                    jRadioButtonGenderM.isSelected(),
                    Double.parseDouble(jTextFieldMark.getText()))) {
                JOptionPane.showMessageDialog(null, "Update thanh cong");
            }
            else JOptionPane.showMessageDialog(null, "Update that bai");
        }
    }

    public static void main(String[] args) {
        FormUpdate formUpdate = new FormUpdate();
        formUpdate.createFormUpdate();
    }
}
