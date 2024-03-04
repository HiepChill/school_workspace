#include<iostream>
using namespace std;

void count(int n)
{
    int count = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(n % i == 0)
            count++;
    }
    cout<<"So nguyen duong n co "<<count<<" uoc so.";
}

bool snt(int n)
{
    for(int i = 2 ; i < n ; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

void countPrime(int n , int k)
{
    int count = 0 , a;
    for(int i = 0 ; i < k ; i++)
    {
        a = n % 10;
        if(snt(a))
        {
            count++;
        }
        n = n / 10;
    }
    cout<<"So nguyen duong A co "<<count<<" so nguyen to.";
}

int main()
{
    int a , k;
    cout<<"Nhap k = ";
    cin>>k;
    cout<<"Nhap so nguyen duong A co "<<k<<" chu so: ";
    cin>>a;
    countPrime(a , k);
    return 0;
}