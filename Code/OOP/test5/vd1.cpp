#include<iostream>
using namespace std;

class Hinh
{
    private:

    public:
        void nhap()
        {
            cout<<"Nhap do dai";
        }

        virtual void DienTich()
        {
            cout<<"Hinh: ";
        }
};

class Hinh_tron : public Hinh
{
    private:
        float pi = 3.14 , r;
    public:
        void nhap()
        {
            cout<<"Nhap Ban kinh hinh tron r = ";
            cin>>r;
        }

        void DienTich()
        {
            cout<< pi * r * r;
        }
};

class Hinh_CN : public Hinh
{
    private:
        float a , b;
    public:
        void nhap()
        {
            cout<<"Nhap chieu dai va chieu rong hinh chu nhat: ";
            cin>>a>>b;
        }

        void DienTich()
        {
            cout<< a * b;
        }

};

int main()
{
    Hinh *h;
    Hinh_tron a;
    Hinh_CN b;

    a.nhap();
    h = &a;

    b.nhap()
    h = &b;

    h -> DienTich();
    h -> DienTich();
}