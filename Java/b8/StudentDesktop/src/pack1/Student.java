package pack1;

public class Student {
    public String id, name, classID;
    public boolean gender;
    public double mark;

    public Student() {
    }

    public Student(String id, String name, String classID, boolean gender, double mark) {
        this.id = id;
        this.name = name;
        this.classID = classID;
        this.gender = gender;
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

    public String getClassID() {
        return classID;
    }

    public void setClassID(String classID) {
        this.classID = classID;
    }

    public boolean isGender() {
        return gender;
    }

    public void setGender(boolean gender) {
        this.gender = gender;
    }

    public double getMark() {
        return mark;
    }

    public void setMark(double mark) {
        this.mark = mark;
    }

    @Override
    public String toString() {
        return "Student{" +
                "id='" + id + '\'' +
                ", name='" + name + '\'' +
                ", classID='" + classID + '\'' +
                ", gender=" + gender +
                ", mark=" + mark +
                '}';
    }
}
