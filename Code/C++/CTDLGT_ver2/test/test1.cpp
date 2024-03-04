#include<iostream>
using namespace std;

int main()
{
    int i , size;
    cout << "Nhap so phan tu: ";
    cin >> size;
    int *p = new int [size];
    cout << "Nhap cac gia tri trong mang: "<<endl;
    for(i = 0 ; i < size ; i ++)
    {
        cout << "Phan tu thu " << i + 1 <<" : ";
        cin >> *(p + i);
    }
    int max = *(p);
    for(i = 0 ; i < size ; i ++)
    {
        if (*(p + i) > max)
        {
            max = *(p + i);
        }
    }
    cout<<"So lon nhat trong mang la: "<<max;
    return 0;
}