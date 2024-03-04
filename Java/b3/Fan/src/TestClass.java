import package1.ColorFan;

import java.util.*;

public class TestClass {
    public static ArrayList<ColorFan> colorFans = new ArrayList<>();
    public static int n;
    public static Scanner s = new Scanner(System.in);

    public ColorFan inputColorFan() {
        ColorFan colorFan = new ColorFan();
        System.out.print("Nhap code: ");
        s.nextLine();
        colorFan.setCode(s.nextLine());
        //String code = s.nextLine();
        System.out.print("Nhap price: ");
        //double price = s.nextDouble();
        colorFan.setPrice(s.nextDouble());
        System.out.print("Nhap series: ");
        colorFan.setSeries(s.nextInt());
        // int series = s.nextInt();

        //ColorFan colorFan = new ColorFan(series, code, price);
        return colorFan;
    }
    public void input() {
        for (int i = 0 ; i < n ; i ++) {
            System.out.println("So thu " + (i + 1) + ": ");
            colorFans.add(inputColorFan());
        }
    }

    public void output() {
        System.out.println("Danh sach: ");
        for (ColorFan colorFan : colorFans) {
            System.out.println(colorFan.toString());
        }
    }

    public void Search(String code) {
        for (ColorFan colorFan : colorFans) {
            if (Objects.equals(colorFan.getCode(), code)) {
                System.out.println(colorFan.toString());
            }
        }
    }

    public void countFan(String xPrice) {
        double a = Double.parseDouble(String.valueOf(xPrice));
        int count = 0;
        for (ColorFan colorFan : colorFans) {
            if (colorFan.getPrice() <= a) {
                count ++;
            }
        }
        System.out.println(count);
    }

    public void sortFan() {
        colorFans.sort(Comparator.comparingDouble((ColorFan c) -> c.getPrice()).thenComparing((ColorFan c) -> c.getCode()));
    }

    public static void main(String[] args) {
        int k;
        System.out.print("Nhập n = ");
        n = s.nextInt();
        TestClass m = new TestClass();
        m.input();
        m.output();
        System.out.print("Nhap code de tim: ");
        s.nextLine();
        String code;
        code = s.nextLine();
        m.Search(code);
        System.out.print("Nhap xPrice: ");
        String xPrice = s.nextLine();
        m.countFan(xPrice);
        m.sortFan();
        m.output();
    }
}