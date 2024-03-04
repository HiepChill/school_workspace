package pk1;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.util.Vector;

public class frmDisplayAll implements ActionListener {
    JFrame jFrame, jfResult;
    JButton jbAll;
    JTable tbStudent;
    MyStudent mS = new MyStudent();
    DefaultTableModel dtm = new DefaultTableModel();
    Vector tbHeader = new Vector();
    Vector tbContent = new Vector();


    public void createUserInterface(){
        int w = 550, h = 150, x = 30, y = 10, d = 40, we = 120, he = 25;

        //Create JFrame()
        jFrame = new JFrame();
        jFrame.setTitle("List Student");
        jFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jFrame.setVisible(true);
        jFrame.setSize(w, h);
        //jFrame.setResizable(false);
        jFrame.setLocationRelativeTo(null);
        jFrame.setLayout(null);

        //Create Component
        //Create Button
        jbAll = new JButton();
        jbAll.setText("Sreach All");
        jbAll.setBounds(x + we*2 + d*2, y, we, he);
        jbAll.addActionListener(this);
        jFrame.add(jbAll);
    }

    private void showResults(){
        jfResult = new JFrame("List Student");
        jfResult.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);

        jfResult.setVisible(true);
        jfResult.setLocationRelativeTo(null);

        jfResult.setSize(550, 500);

        tbHeader.add("ID");
        tbHeader.add("Name");
        tbHeader.add("ClassID");
        tbHeader.add("Gender");
        tbHeader.add("NameS");
        tbHeader.add("IDSubject");
        tbHeader.add("Mark1");
        tbHeader.add("Mark2");

        tbStudent = new JTable();
        tbStudent.setModel(dtm);

        tbStudent.setAutoResizeMode(JTable.AUTO_RESIZE_ALL_COLUMNS); //Tự điều chỉnh cột theo nội dung
        tbStudent.setFillsViewportHeight(true); //Cho phép cho lên đầy đủ

        JScrollPane scroll = new JScrollPane(tbStudent); //Điều chỉnh JFrame
        scroll.setHorizontalScrollBarPolicy(JScrollPane.HORIZONTAL_SCROLLBAR_AS_NEEDED); //Điều chình chiều rộng - hàng
        scroll.setVerticalScrollBarPolicy(JScrollPane.VERTICAL_SCROLLBAR_AS_NEEDED); //Điều chỉnh chiều dài - cột

        try {
            ArrayList<ArrayList<String>> plist = mS.displayAll();

            for (int i = 0; i < plist.size(); i++) {
                ArrayList<String> st = (ArrayList<String>) plist.get(i);

                Vector tbRow = new Vector();
                tbRow.add(st.get(0));
                tbRow.add(st.get(1));
                tbRow.add(st.get(2));
                tbRow.add(st.get(3));
                tbRow.add(st.get(4));
                tbRow.add(st.get(5));
                tbRow.add(st.get(6));
                tbRow.add(st.get(7));

                tbContent.add(tbRow);
            }
            dtm.setDataVector(tbContent, tbHeader);
            tbStudent.setModel(dtm);
        } catch (Exception e) {
            JOptionPane.showMessageDialog(null, e.getMessage(), "Error", JOptionPane.ERROR_MESSAGE);
        }
        jfResult.add(scroll);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        jbAll = (JButton) e.getSource();
        dtm.setRowCount(0);
        dtm.setColumnCount(0);
        showResults();
    }

    public static void main(String[] args){
        frmDisplayAll frmDisAll = new frmDisplayAll();
        frmDisAll.createUserInterface();
    }

}
