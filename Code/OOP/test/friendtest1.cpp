#include<iostream>
using namespace std;

class date
{
    private:
        int day , month , year;
    public:
        void input();
        friend bool is_Equal(const date &d1 ,const date &d2);
};

bool is_Equal(const date &d1 ,const date &d2)
{
    if(d1.day == d2.day && d1.month == d2.month && d1.year == d2.year)
    {
        return true;
    }
    return false;
}

void date::input()
{
    cout<<"Nhap ngay: ";cin>>day;
    cout<<"Nhap thang: ";cin>>month;
    cout<<"Nhap nam: ";cin>>year;
}

int main()
{
    date d1 , d2;
    d1.input();
    cout<<"---------------------"<<endl;
    d2.input();
    if(is_Equal(d1 , d2)) cout<<"2 ngay trung nhau!";
    else cout<<"2 ngay khac nhau!";
}