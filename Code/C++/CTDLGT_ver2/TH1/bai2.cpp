#include<iostream>
using namespace std;

void swap (int *x , int *y);

int main()
{
    int a = 9 , b = 5;
    swap(a , b);
    cout << a << "  " << b;

    return 0;
}

void swap (int *x , int *y)
{
    int *tmp;
    tmp = x;
    x = y;
    y = tmp;
}