import pack1.MyString;

import java.util.Scanner;

public class Main {
    static Scanner sc = new Scanner(System.in);



    public static void main(String[] args) {
        MyString ms = new MyString();
        int tc;
        System.out.println("TC = 1 - test f1()");
        System.out.println("TC = 2 - test f2()");
        System.out.print("Enter TC: ");
        tc = sc.nextInt();
        sc.nextLine();

        switch (tc) {
            case 1: {
                System.out.println("Enter a string: ");
                String str = sc.nextLine();

                System.out.println("OUTPUT: ");
                System.out.println(ms.f1(str));
                break;
            }

            case 2: {
                System.out.println("Enter a string: ");
                String str = sc.nextLine();

                System.out.println("OUTPUT: ");
                System.out.println(ms.f2(str));
                break;
            }
        }

    }
}