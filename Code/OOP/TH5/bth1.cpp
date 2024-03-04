#include<iostream>
using namespace std;

template<class T>
void doi_cho(T &a , T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int n;
    float a[100];
    cout<<"Nhap so phan tu trong mang: ";
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Nhap phan tu thu "<<i + 1<<": ";
        cin>>a[i];
    }

    for(int i = 0 ; i < n - 1; i++)
        for(int j = i + 1 ; j < n ; j++)
        {
            if(a[i] > a[j])
            {
                doi_cho(a[i] , a[j]);
            }
        }
    for(int i = 0 ; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
} 