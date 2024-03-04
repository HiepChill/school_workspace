package pack1;

public class Student extends Person{
    String idClass;
    boolean gender;

    public Student() {
    }

    public Student(String idClass, boolean gender) {
        this.idClass = idClass;
        this.gender = gender;
    }

    public Student(String id, String name, String idClass, boolean gender) {
        super(id, name);
        this.idClass = idClass;
        this.gender = gender;
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
}
