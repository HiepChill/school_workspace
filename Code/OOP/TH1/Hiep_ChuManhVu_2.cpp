#include<iostream>
using namespace std;

class SINHVIEN
{
private:
    string studentid , name , classes;
    float point;
public:
    void input()
    {
        cin.ignore();
        cout<<"Nhap ma sinh vien: ";getline(cin , studentid);
        cout<<"Nhap ten: ";getline(cin , name);
        cout<<"Nhap lop: ";getline(cin , classes);
        cout<<"Nhap diem: ";cin>>point;
        cout<<"***********************************"<<endl;
    }

    void output()
    {
        cout<<"Ma sinh vien: "<<studentid<<endl;
        cout<<"Ten: "<<name<<endl;
        cout<<"Lop: "<<classes<<endl;
        cout<<"Diem: "<<point<<endl;
        cout<<"***********************************"<<endl;
    }

    int mpoint()
    {
        return point;
    }
};

int main()
{
    int n , j;
    do{
        cout<<"Nhap so luong sinh vien can nhap: ";
        cin>>n;
    }while(n <= 0 || n > 10);

    SINHVIEN a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"******Sinh vien thu "<<i + 1<<"*******"<<endl;
        a[i].input();
    }

    double max;
    max = a[0].mpoint();
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i].mpoint() > max)
        {
            max = a[i].mpoint();
            i = j;
        }
    }
    cout<<"___Sinh vien co so diem cao nhat___"<<endl;
    a[j].output();
    
    return 0;
}