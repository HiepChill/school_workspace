package pack1;

public class Student {
    public String id , name;
    public double mark;

    public Student() {
    }

    public Student(String id, String name, double mark) {
        this.id = id;
        this.name = name;
        this.mark = mark;
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

    public double getMark() {
        return mark;
    }

    public void setMark(double mark) {
        this.mark = mark;
    }

    public String result() {
        if (this.getMark() < 4)
            return "Trượt";
        else
            return "Đỗ";
    }

    public String display() {
        return id + '\t' + '\t' + name + '\t' + '\t' + mark + '\t' + '\t' + result();
    }
}
