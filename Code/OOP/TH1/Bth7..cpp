#include <bits/stdc++.h>
using namespace std;

class COMPLEX
{
    float real, imaginary;

public:
    void input();
    void output();
    // COMPLEX Sum(COMPLEX);
    // COMPLEX Subtract(COMPLEX);
    // COMPLEX Multi(COMPLEX);
    // COMPLEX Divise(COMPLEX);
    COMPLEX Count(COMPLEX, string);
    float get_r()
    {
        return real;
    }
    float get_i()
    {
        return imaginary;
    }
};

void COMPLEX::input()
{
    cout << "Nhap phan thuc: ", cin >> real;
    cout << "Nhap phan ao: ", cin >> imaginary;
}

void COMPLEX::output()
{
    cout << real;
    if (imaginary > 0)
        cout << "+";
    cout << imaginary << "i";
}

// COMPLEX COMPLEX::Sum(COMPLEX a)
// {
//     COMPLEX c;
//     c.real = real + a.get_r();
//     c.imaginary = imaginary + a.get_i();
//     return c;
// }
// COMPLEX COMPLEX::Subtract(COMPLEX a)
// {
//     COMPLEX c;
//     c.real = real - a.get_r();
//     c.imaginary = imaginary - a.get_i();
//     return c;
// }
// COMPLEX COMPLEX::Multi(COMPLEX a)
// {
//     COMPLEX c;
//     c.real = real * a.get_r() - imaginary * a.get_i();
//     c.imaginary = real * a.get_i() + imaginary * a.get_r();
//     return c;
// }
// COMPLEX COMPLEX::Divise(COMPLEX a)
// {
//     COMPLEX c;
//     c.real = (real * a.get_r() + imaginary * a.get_i()) / (pow(a.get_r(), 2) + pow(a.get_i(), 2));
//     c.imaginary = (imaginary * a.get_r() - real * a.get_i()) / (pow(a.get_r(), 2) + pow(a.get_i(), 2));
//     return c;
// }

COMPLEX COMPLEX::Count(COMPLEX a, string sign)
{
    COMPLEX c;
    if (sign != "+" and sign != "-" and sign != "*" and sign != "/")
        cout << "Phep tinh khong hop le";
    else
    {
        if (sign == "+")
        {
            c.real = real + a.real;
            c.imaginary = imaginary + a.imaginary;
        }
        else if (sign == "-")
        {
            c.real = real - a.real;
            c.imaginary = imaginary - a.imaginary;
        }
        else if (sign == "*")
        {
            c.real = real * a.real - imaginary * a.imaginary;
            c.imaginary = real * a.imaginary + imaginary * a.real;
        }
        else if (sign == "/")
        {
            c.real = (real * a.real + imaginary * a.imaginary) / (pow(a.real, 2) + pow(a.imaginary, 2));
            c.imaginary = (imaginary * a.real - real * a.imaginary) / (pow(a.real, 2) + pow(a.imaginary, 2));
        }
        return c;
    }
}

int main()
{
    COMPLEX a, b;
    string sign;
    cout << "Nhap so phuc thu 1:" << endl;
    a.input();
    cout << "Nhap so phuc thu 2:" << endl;
    b.input();
    cout << "Nhap phep tinh: ", cin >> sign;
    cout << "(";
    a.output();
    cout << ")" << sign << "(";
    b.output();
    cout << ")"
         << " = ";
    a.Count(b, sign).output();
}