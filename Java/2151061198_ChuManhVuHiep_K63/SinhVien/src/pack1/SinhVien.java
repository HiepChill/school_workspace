package pack1;

import java.sql.Date;

public class SinhVien {
    public int ma;
    public String ten, queQuan;
    public Date birthDay;

    public SinhVien() {
    }

    public SinhVien(int ma, String ten, String queQuan, Date birthDay) {
        this.ma = ma;
        this.ten = ten;
        this.queQuan = queQuan;
        this.birthDay = birthDay;
    }

    public int getMa() {
        return ma;
    }

    public void setMa(int ma) {
        this.ma = ma;
    }

    public String getTen() {
        return ten;
    }

    public void setTen(String ten) {
        this.ten = ten;
    }

    public String getQueQuan() {
        return queQuan;
    }

    public void setQueQuan(String queQuan) {
        this.queQuan = queQuan;
    }

    public Date getBirthDay() {
        return birthDay;
    }

    public void setBirthDay(Date birthDay) {
        this.birthDay = birthDay;
    }

    @Override
    public String toString() {
        return "SinhVien{" +
                "ma=" + ma +
                ", ten='" + ten + '\'' +
                ", queQuan='" + queQuan + '\'' +
                ", birthDay=" + birthDay +
                '}';
    }
    public void DTB (){

    };
}
