#include<iostream>
using namespace std;

class human
{
    protected:
        string hoten;
    public:
        virtual void input();
        virtual int thuong() = 0;
        virtual void output();
}

class Students : public human
{
    public:
        virtual void input();
        virtual int thuong() = 0;
        virtual void output();
    protected:

}

class Teacher : public human
{
    public:
        
}