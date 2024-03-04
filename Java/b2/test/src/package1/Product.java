package package1;

public class Product {
    private String id, name, company;
    private double amount, price;
    private int year;
    public Product (String id, String name, double amount, double price, String company, int year) {
        this.id = id;
        this.name = name;
        this.amount = amount;
        this.price = price;
        this.company = company;
        this.year = year;
    }

    public Product() {
    }

    public String getId() {
        return id;
    }

    public String getName() {
        return name;
    }
    public double getAmount() {
        return amount;
    }

    public double getPrice() {
        return price;
    }
    public String getCompany() {
        return company;
    }
    public int getYear() {
        return year;
    }

    public void setId(String id) {
        this.id = id;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setAmount(double amount) {
        this.amount = amount;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public void setCompany(String company) {
        this.company = company;
    }

    public void setYear(int year) {
        this.year = year;
    }

    public double discount() {
        int y = this.getYear();
        double d = 1;
        if (y < 2015) d = 0.2;
        else if (y < 2020) d = 0.1;
        else if (y < 2022) d = 0.05;
        return d;
    }

    public String toString() {
        return "Mã sản phẩm: " + this.getId() + "\n"
                + "Tên sản phẩm: " + this.getName() + "\n"
                + "Số lượng: " + this.getAmount() + "\n"
                + "Giá tiền: " + this.getPrice() + "\n"
                + "Nhà sản xuất: " + this.getCompany() + "\n"
                + "Năm sản xuất: " + this.getYear() + "\n";
    }

    public double totalPrice() {
        return this.getPrice() * this.getAmount();
    }

    public double getDiscounted() {
        if (this.getYear() < 2015) {
            return this.getPrice() * 0.2; // Giảm 20%
        } else if (this.getYear() < 2020) {
            return this.getPrice() * 0.1; // Giảm 10%
        } else if (this.getYear() < 2022) {
            return this.getPrice() * 0.05; // Giảm 5%
        } else {
            return this.getPrice(); // Không giảm giá
        }
    }
}
