package pack1;

public class MyString implements IString {

    @Override
    public int f1(String st) {
        int sum = 0;
        for (int i = 0 ; i < st.length() ; i ++) {
            if (Character.isDigit(st.charAt(i))) {
                int a = Character.getNumericValue(st.charAt(i));
                sum += a;
            }

        }
        return sum;
    }

    @Override
    public String f2(String st) {
        StringBuilder str = new StringBuilder();
        for (int i = 0 ; i < st.length() ; i ++) {
            if (Character.isDigit(st.charAt(i))) {
                int a = Character.getNumericValue(st.charAt(i));
                if (a >= 0 && a <= 8) {
                    a++;
                    String b = String.valueOf(a);
                    str.append(b);
                }
                else {
                    str.append(st.charAt(i));
                }
            }
            else {
                str.append(st.charAt(i));
            }
        }
        return str.toString();
    }
}
