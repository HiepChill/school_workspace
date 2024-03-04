package pack;

import java.util.ArrayList;

public interface IProject {
    public void addProject(Project p);
    public void print();
    public void getByName (String ten);
    public ArrayList<Project> getByStarted (int started);
}