import pack.MyProject;
import pack.Project;

import java.util.Scanner;

public class Test {
    static Scanner s = new Scanner(System.in);
    Project p = new Project();
    MyProject mp = new MyProject();

    public void input() {
        System.out.print("Nhap n = ");
        int n = s.nextInt();
        for(int i = 0 ; i < n; i ++) {
            System.out.println("Nhap thong tin: ");
            System.out.print("Nhap name: ");
            s.nextLine();
            String name = s.nextLine();
            System.out.print("Nhap sponsor: ");
            String sponsor = s.nextLine();
            System.out.print("Nhap started: ");
            int started = s.nextInt();

            p = new Project(name, sponsor, started);
            mp.addProject(p);
        }


    }

    public void output() {
        mp.print();
    }

    public void getByName(String ten) {
        mp.getByName(ten);
    }

    public void getByStarted (int started) {
        mp.getByStarted(started).forEach(Project::display);
    }

    public static void main(String[] args) {
        Test t = new Test();
        t.input();
        t.output();
        System.out.print("Nhap ten de in: ");
        s.nextLine();
        String ten = s.nextLine();
        t.getByName(ten);
        System.out.print("Nhap started de in: ");
        int started = s.nextInt();
        t.getByStarted(started);
    }
}