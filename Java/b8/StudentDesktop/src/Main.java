import pack2.FormInsert;

public class Main {
    static FormInsert formInsert = new FormInsert();
    public void insert () {
        formInsert.createInsertFrame();
    }

    public static void main(String[] args) {
        Main m = new Main();
        m.insert();
    }
}