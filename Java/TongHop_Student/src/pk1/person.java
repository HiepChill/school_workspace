package pk1;

public class person {
    public String ID, Name;

    public String getID() {
        return ID;
    }

    public void setID(String ID) {
        this.ID = ID;
    }

    public String getName() {
        return Name;
    }

    public void setName(String name) {
        Name = name;
    }

    public person(String ID, String name) {
        this.ID = ID;
        this.Name = name;
    }

    public person() {
    }
}
