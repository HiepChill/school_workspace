package packake1;

public class Magazine extends Publication {
    public int copies, price;

    public Magazine(String id, String name, int copies, int price) {
        super(id, name);
        this.copies = copies;
        this.price = price;
    }

    public Magazine(int copies, int price) {
        this.copies = copies;
        this.price = price;
    }

    public int getCopies() {
        return copies;
    }

    public void setCopies(int copies) {
        this.copies = copies;
    }

    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    @Override
    public String display() {
        return this.getId() + "\t" + this.getName() + "\t" + this.getPrice() + "\t" + this.getCopies();
    }
}
