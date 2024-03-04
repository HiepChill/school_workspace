package pack;

import java.util.ArrayList;
import java.util.Objects;

public class MyProject implements IProject {
    private final ArrayList<Project> plist = new ArrayList<>();

    @Override
    public void print() {
        System.out.println("Thong tin: ");
        for (int i = 0 ; i < plist.size() ; i++) {
            Project p = plist.get(i);
            System.out.printf("%-10d" , i + 1);
            p.display();
        }
    }

    @Override
    public void addProject(Project p) {
        plist.add(p);
    }
    @Override
    public void getByName (String ten) {
        for (Project p : plist) {
            if (Objects.equals(p.getName(), ten)) {
                p.display();
            }
        }
    }
    @Override
    public ArrayList<Project> getByStarted (int started) {
        ArrayList<Project> ps = new ArrayList<>();
        for (Project p : plist) {
            if (p.getStarted() == started)
                ps.add(p);
        }
        return ps;
    }
}
