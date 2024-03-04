package pack1;

import java.sql.Date;

public class Teacher extends Person {
    public double salary;
    public String gender;

    public Teacher() {
    }

    public Teacher(int id, String name, Date bdate, double salary, String gender) {
        super(id, name, bdate);
        this.salary = salary;
        this.gender = gender;
    }

    public double getSalary() {
        return salary;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }

    public String getGender() {
        return gender;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    @Override
    public String toString() {
        return "Teacher{" +
                "id=" + id +
                ", name='" + name +
                ", bdate=" + bdate +
                ", salary=" + salary +
                ", gender='" + gender +
                '}';
    }
}
