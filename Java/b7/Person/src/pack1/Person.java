package pack1;

import java.sql.Date;

public class Person {
    public int id;
    public String name;
    public java.sql.Date bdate;

    public Person() {
    }

    public Person(int id, String name, java.sql.Date bdate) {
        this.id = id;
        this.name = name;
        this.bdate = bdate;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public Date getBdate() {
        return bdate;
    }

    public void setBdate(Date bdate) {
        this.bdate = bdate;
    }
}
