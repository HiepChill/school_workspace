package pack1;

import java.util.ArrayList;
import java.util.Objects;

public class MyStudent implements IStudent {
    private final ArrayList<Student> plist = new ArrayList<>();

    @Override
    public void addStudent(Student s) {
        plist.add(s);
    }

    @Override
    public ArrayList<Student> findByID(String id) {
        ArrayList<Student> tmp = new ArrayList<>();
        System.out.println("The list of student by ID: ");
        System.out.println("Index'\t'Id'\t'Name'\t'Mark'\t'Result");
        for (int i = 0 ; i < plist.size() ; i++) {
            Student s = plist.get(i);
            if (Objects.equals(s.getId(), id))
                tmp.add(s);
        }
        return tmp;
    }

    @Override
    public double getMax() {
        Student a = plist.get(1);
        double max = a.getMark();
        for (int i = 0 ; i < plist.size() ; i++) {
            Student s = plist.get(i);
            if (s.getMark() > max)
                max = s.getMark();
        }
        return max;
    }

    @Override
    public ArrayList<Student> print() {
        System.out.println("Index'\t'Id'\t'Name'\t'Mark'\t'Result");
        return plist;
    }

    @Override
    public ArrayList<Student> printMax() {
        ArrayList<Student> tmp = new ArrayList<>();
        System.out.println("Index'\t'Id'\t'Name'\t'Mark'\t'Result");
        for (int i = 0 ; i < plist.size() ; i++) {
            Student s = plist.get(i);
            if (s.getMark() == getMax()) {
                tmp.add(s);
            }
        }
        return tmp;
    }
}
