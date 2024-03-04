//<kieu du lieu tra ve> operater #(d/s doi so)
#include<iostream>
using namespace std;

class ps
{
    private:
        int ts , ms;
    public:
        friend istream &operator >>(istream &in , ps &a);
        friend ostream &operator <<(ostream &out , ps &a);
        friend void operator *(ps &a , ps &b);
};

istream &operator >>(istream &in , ps &a)
{
    cout<<"Nhap tu so: ";
    in>>a.ts;
    cout<<"Nhap mau so: ";
    in>>a.ms;
    return in;
}

ostream &operator <<(ostream &out , ps &a)
{
    out<<"Phan so: "<<a.ts<<"/"<<a.ms;
    return out;
}

void operator*(ps &a , ps &b)
{
    cout<<"Tich 2 phan so: "<<a.ts * b.ts<<"/"<<a.ms * b.ms;
}

int main()
{
    ps a , b;
    cin>>a;
    cout<<a<<endl;
    cin>>b;
    cout<<b<<endl;
    operator*(a , b);
}