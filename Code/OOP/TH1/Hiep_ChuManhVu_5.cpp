#include<iostream>
using namespace std;

class Sach
{
private:
    string bookid , name;
    int pages;
public:
    Sach(){}
    static int dem;
    void input();
    static void output(){
        cout<<dem;
    }
};

int Sach::dem = 0;
void Sach::input()
{
    cin.ignore();
    cout<<"Nhap ma sach: ";
    getline(cin , bookid);
    cout<<"Nhap ten sach: ";
    getline(cin , name);
    cout<<"Nhap so trang: ";
    cin>>pages;
    dem++;
}

int main()
{
    Sach a[100];
    int n;
    cout<<"Nhap so luong sach can nhap: ";
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        a[i].input();
        cout<<"***************************"<<endl;
    }
    cout<<"So lan goi ham nhap: ";
    Sach::output();
    return 0;
}


