package pack2;

import pack1.Process_Student;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class FormDelete implements ActionListener {

    public Process_Student ps = new Process_Student();
    JFrame jFDelete;
    JLabel jLbId;
    JTextField jTFId;
    JButton jBtId;

    public void createUserInterface() {
        int w=600, h=100, we=150, he=30, x=10, y=10, d=20;

        jFDelete = new JFrame();
        jFDelete.setTitle("Xoa sinh vien");
        jFDelete.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jFDelete.setVisible(true);
        jFDelete.setSize(w, h);
        jFDelete.setResizable(false);
        jFDelete.setLocationRelativeTo(null);
        jFDelete.setLayout(null);

        jLbId = new JLabel();
        jLbId.setBounds(x, y, we, he);
        jLbId.setText("Nhap id sinh vien can xoa");
        jFDelete.add(jLbId);

        jTFId = new JTextField();
        jTFId.setEditable(true);
        jTFId.setBounds(x+we+d, y, we, he);
        jFDelete.add(jTFId);

        jBtId = new JButton();
        jBtId.setText("Xoa");
        jBtId.setBounds(x+(we+d)*2, y, we, he);
        jBtId.addActionListener(this);
        jFDelete.add(jBtId);

    }

    @Override
    public void actionPerformed(ActionEvent e) {
        jBtId = (JButton)e.getSource();
        String id = jTFId.getText();

        if(ps.delStudent(id)) {
            JOptionPane.showMessageDialog(null, "Xoa thanh cong");
        }
        else {
            JOptionPane.showMessageDialog(null, "Xoa that bai");
        }
    }

    public static void main(String[] args) {
        FormDelete formDelete = new FormDelete();
        formDelete.createUserInterface();
    }
}
