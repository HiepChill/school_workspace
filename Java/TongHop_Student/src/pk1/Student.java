package pk1;

public class Student extends person{
    public String ClassID, Gender;

    public String getClassID() {
        return ClassID;
    }

    public void setClassID(String classID) {
        ClassID = classID;
    }

    public String getGender() {
        return Gender;
    }

    public void setGender(String gender) {
        Gender = gender;
    }

    public Student(String ID, String name, String classID, String gender) {
        super(ID, name);
        ClassID = classID;
        Gender = gender;
    }

    public Student() {}
}
