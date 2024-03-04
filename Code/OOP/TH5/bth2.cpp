#include<iostream>
using namespace std;

template<class T>
T smallestValue(const T a[] , int startIndex , int numberUsed)
{
    int min = a[startIndex];
    for(int i = startIndex - 1 ; i < (startIndex + numberUsed) - 1 ; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}

int main()
{
    int n , a[100] , ST , NU;
    cout<<"Nhap so phan tu: ";
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Nhap so thu "<<i + 1<<": ";
        cin>>a[i];
    }
    cout<<"Nhap startIndex: ";
    cin>>ST;
    cout<<"Nhap numberUsed: ";
    cin>>NU;
    cout<<smallestValue(a , ST , NU);

}
