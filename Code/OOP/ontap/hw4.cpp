#include<iostream>
using namespace std;

#define max 4

class Array
{
    private: 
        float n[max];
    public:
        friend istream &operator >>(istream &in , Array &a);
        friend ostream &operator <<(ostream &out , Array &a);
        friend Array operator +(Array a , Array b);
        friend Array operator -(Array a , Array b);
};

istream &operator >>(istream &in , Array &a)
{
    for(int i = 0 ; i < max ; i++)
    {
        cout<<"Nhap phan tu thu "<<i + 1<<": ";
        in>>a.n[i];
    }
    return in;
}

ostream &operator <<(ostream &out , Array &a)
{
    cout<<"Cac phan tu trong mang: ";
    for(int  i = 0 ; i < max ; i++)
    {
        out<<a.n[i]<<" ";
    }
    return out;
}

Array operator +(Array a , Array b)
{
    Array c;
    for(int i = 0 ; i < max ; i++)
    {
        c.n[i] = a.n[i] + b.n[i];
    }
    return c;
}

Array operator -(Array a , Array b)
{
    Array c;
    for(int i = 0 ; i < max ; i++)
    {
        c.n[i] = a.n[i] - b.n[i];
    }
    return c;
}

int main()
{
    Array a , b , c , d;
    cout<<"Nhap mang thu nhat!"<<endl;
    cin>>a;
    cout<<"Nhap mang thu hai!"<<endl;
    cin>>b;
    cout<<"Mang thu nhat: ";cout<<a<<endl;
    cout<<"Mang thu hai: ";cout<<b<<endl;
    c = a + b;
    d = a - b;
    cout<<"Tong 2 mang la: "<<c;
    cout<<"Hieu 2 mang la: "<<d;
    return 0;
}