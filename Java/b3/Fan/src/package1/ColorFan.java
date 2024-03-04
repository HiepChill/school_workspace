package package1;

public class ColorFan extends Fan{
    public int series;

    public ColorFan() {

    }

//    public ColorFan(int series, String code, double price) {
//        super(code, price);
//        this.series = series;
//    }

    public int getSeries() {
        return series;
    }

    public void setSeries(int series) {
        this.series = series;
    }

    @Override
    public double getPrice() {
        if (price < 300)
            return price + 0.1 * price;
        return price;
    }

    @Override
    public String toString() {
        return code + "\t" + price + "\t" + series;
    }
}
