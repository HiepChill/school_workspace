#include<iostream>
using namespace std;

struct Retangle {
    int width , height;

    void areaOfRetangle() {
        cout << "Area of retangle is: " << width * height;
    }

    void input() {
        cout << "Width value = "; cin >> width;
        cout << "Height value = "; cin >> height;
    }
};

int main()
{
    Retangle *a = new Retangle;
    a -> input();
    a -> areaOfRetangle();
}