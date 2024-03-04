package package1;

public class Employee {
    private String id, name, dept, gender;
    private int year, salary;

    public Employee(String id, String name, String dept, String gender, int year, int salary) {
        this.id = id;
        this.name = name;
        this.dept = dept;
        this.gender = gender;
        this.year = year;
        this.salary = salary;
    }

    public Employee() {

    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getDept() {
        return dept;
    }

    public void setDept(String dept) {
        this.dept = dept;
    }

    public String getGender() {
        return gender;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public int getYear() {
        return year;
    }

    public void setYear(int year) {
        this.year = year;
    }

    public int getSalary() {
        return salary;
    }

    public void setSalary(int salary) {
        this.salary = salary;
    }

    public String toString() {
        return "Employee{" +
                "id='" + id + '\'' +
                ", name='" + name + '\'' +
                ", dept='" + dept + '\'' +
                ", gender='" + gender + '\'' +
                ", year=" + year +
                ", salary=" + salary +
                '}';
    }

    public boolean getRetire() {
        if ((this.getGender().equals("nam") && this.getYear() > 62) || (this.getGender().equals("nữ") && this.getYear() > 60))
            return true;
        return false;
    }

    public int getMaxSalary(Employee e, int max) {
        if (e.getSalary() > max) {
            max = e.getSalary();
        }
        return max;
    }
}
