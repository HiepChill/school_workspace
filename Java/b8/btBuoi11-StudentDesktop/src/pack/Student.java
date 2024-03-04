package pack;

public class Student {
    public String id, name, idClass;

    public boolean gender;

    public double mark;

    public Student() {
    }

    public Student(String id, String name, String idClass, boolean gender, double mark) {
        this.id = id;
        this.name = name;
        this.idClass = idClass;
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

    public String getIdClass() {
        return idClass;
    }

    public void setIdClass(String idClass) {
        this.idClass = idClass;
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
        return "id='" + id + '\'' +
                ", name='" + name + '\'' +
                ", idClass='" + idClass + '\'' +
                ", gender=" + gender +
                ", mark=" + mark;
    }
}
