package pack1;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.util.ArrayList;

public class QLSV {

    SinhVien sv = new SinhVien();
    ArrayList<SinhVien> svs = new ArrayList<>();

    public void showSV (ArrayList<SinhVien> svs) {
        svs.forEach(sv -> System.out.println(sv.toString()));
    }

    public void dem() {

    }

}
