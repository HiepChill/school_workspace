#include<iostream>
using namespace std;

int snt (int n)
{
    for(int i = 2 ; i < n ; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void input(int &n , int a[])
{
    do{
        cout<<"Nhap so phan tu trong day: ";
        cin>>n;
    }while(n < 0 || n > 10);
    
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Nhap phan tu thu "<<i+1<<": ";
        cin>>a[i];
    }
}

void output(int n , int a[])
{
    for(int i = 0 ; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }
}
void max(int n , int a[])
{
    int max = a[0];
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] > max)  max = a[i];
    }
    cout<<max;
}
int main()
{
    // unsigned n;
    // cout<<"Nhap vao 1 so n = ";
    // cin>>n;
    // if(snt(n))  cout<<"Day la snt!";
    // else cout<<"Day ko phai snt";
    int n , a[10];
    input(n , a);
    cout<<endl;
    output(n , a);
    cout<<endl;
    max(n , a);
}