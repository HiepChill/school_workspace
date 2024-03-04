package packake1;

public abstract class Publication {
    public String id, name;

    public Publication(String id, String name) {
        this.id = id;
        this.name = name;
    }

    public Publication() {

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

    public abstract String display();

}
