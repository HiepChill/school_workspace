package pk1;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.util.Vector;

public class frmDisplayByClass implements ActionListener {
    JFrame jFrame, jfResult;
    JLabel jlbClass;
    JComboBox jcbClass;
    JButton jbSreach;
    JTable tbStudent;
    MyStudent mS = new MyStudent();
    DefaultTableModel dtm = new DefaultTableModel();
    Vector tbHeader = new Vector();
    Vector tbContent = new Vector();


    public void createUserInterface(){
        int w = 550, h = 150, x = 30, y = 10, d = 40, we = 120, he = 25;

        //Create JFrame()
        jFrame = new JFrame();
        jFrame.setTitle("Sreach Student by ClassID");
        jFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jFrame.setVisible(true);
        jFrame.setSize(w, h);
        //jFrame.setResizable(false);
        jFrame.setLocationRelativeTo(null);
        jFrame.setLayout(null);

        //Create Component
        //Create Lable
        jlbClass = new JLabel();
        jlbClass.setText("Class_ID");
        jlbClass.setBounds(x, y, we, he);
        jFrame.add(jlbClass);

        //Create Combobox
        jcbClass = new JComboBox();
        jcbClass.setBounds(x + we + d, y, we, he);

        ArrayList<String> plist = mS.getClassID();
        for (int i = 0; i < plist.size(); i++){
            jcbClass.addItem(plist.get(i));
        }
        jFrame.add(jcbClass);

        //Create Button
        jbSreach = new JButton();
        jbSreach.setText("Sreach Student by ClassID");
        jbSreach.setBounds(x + we*2 + d*2, y, we, he);
        jbSreach.addActionListener(this);
        jFrame.add(jbSreach);
    }

    private void showResults(){
        jfResult = new JFrame("List Student by ClassID");
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
        tbHeader.add("Mark3");

        tbStudent = new JTable();
        tbStudent.setModel(dtm);

        tbStudent.setAutoResizeMode(JTable.AUTO_RESIZE_ALL_COLUMNS); //Tự điều chỉnh cột theo nội dung
        tbStudent.setFillsViewportHeight(true); //Cho phép cho lên đầy đủ

        JScrollPane scroll = new JScrollPane(tbStudent); //Điều chỉnh JFrame
        scroll.setHorizontalScrollBarPolicy(JScrollPane.HORIZONTAL_SCROLLBAR_AS_NEEDED); //Điều chình chiều rộng - hàng
        scroll.setVerticalScrollBarPolicy(JScrollPane.VERTICAL_SCROLLBAR_AS_NEEDED); //Điều chỉnh chiều dài - cột

        try {
            String classID = jcbClass.getSelectedItem() + "";
            ArrayList<ArrayList<String>> plist = mS.displayStudent_byClass(classID);

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
                tbRow.add(st.get(8));

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
        jbSreach = (JButton) e.getSource();
        dtm.setRowCount(0);
        dtm.setColumnCount(0);
        showResults();
    }

    public static void main(String[] args){
        frmDisplayByClass frmDisClass = new frmDisplayByClass();
        frmDisClass.createUserInterface();
    }
}
