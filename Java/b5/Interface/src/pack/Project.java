package pack;


public class Project {
    public String name, sponsor;
    public int started;

    public Project() {
    }

    public Project(String name, String sponsor, int started) {
        this.name = name;
        this.sponsor = sponsor;
        this.started = started;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getSponsor() {
        return sponsor;
    }

    public void setSponsor(String sponsor) {
        this.sponsor = sponsor;
    }

    public int getStarted() {
        return started;
    }

    public void setStarted(int started) {
        this.started = started;
    }
    public void display() {
        System.out.println( "Project{" +
                "name='" + name + '\'' +
                ", sponsor='" + sponsor + '\'' +
                ", started=" + started +
                '}');
    }
}