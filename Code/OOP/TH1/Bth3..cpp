#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

class Student
{
private:
    string Masv, Tensv, Lop;
    double Dtb;

public:
    void Input();
    void Output();
    string getID()
    {
        return Masv;
    }
    string getLop(){
        return Lop;
    }
};

void Student::Input()
{
    cin.ignore();
    cout << "Nhap ten Sinh Vien: ", getline(cin, Tensv);
    cout << "Nhap ma Sinh Vien: ", getline(cin, Masv);
    cout << "Nhap lop Sinh Vien: ", getline(cin, Lop);
    cout << "Nhap DTB: ", cin >> Dtb;
}

void Student::Output()
{
    cout << "|" << setw(20) << Tensv << "|" << setw(10) << Masv << "|" << setw(12) << Lop << "|" << setw(8) << Dtb << "|" << endl;
}

void Del(vector<Student> &a, string msv)
{
    for (int i = 0; i< a.size();i++)
        if (a[i].getID() == msv)
            a.erase(a.begin()+i);
}

void SearchStudent(string ID, vector<Student> a)
{
    int index = -1;
    for (int i = 0; i < a.size(); i++)
        if (ID == a[i].getID())
            index = i;
    if (index != -1)
        a[index].Output();
    else
        cout << "Khong ton tai MSV nay\n";
}

void Menu()
{
    cout << "--------------------------\n1. Them moi Sinh Vien\n";
    cout << "2. Xoa Sinh Vien khoi danh sach\n";
    cout << "3. Tim kiem Sinh Vien theo ma\n";
    cout << "4. Liet ke danh sach Sinh Vien theo lop\n";
    cout << "5. Liet ke tat ca Sinh Vien\n";
    cout << "6. Thoat\n--------------------------\n";
}


void listClass(vector<Student> a, string lop)
{
    for (Student n : a)
    if(n.getLop()==lop)
        n.Output();
}

int main()
{
    vector<Student> a;
    Student b;
    int n;
    string check = "";
    while (1)
    {
        Menu();
        cout << "Nhap lua chon: ", cin >> n;
        switch (n)
        {
        case 1:
        {
            cout << "THEM SINH VIEN\n";
            b.Input();
            a.push_back(b);
            break;
        }
        case 2:
        {
            cout << "XOA MOT SINH VIEN\n";
            string msv;
            cout << "Nhap ma Sinh Vien muon xoa: ";
            cin >> msv;
            Del(a, msv);
            break;
        }
        case 3:
        {
            cout << "TIM KIEM THEO MA SINH VIEN\n";
            string id;
            cin.ignore();
            cout << "Nhap MSV can tim: ", getline(cin, id);
            SearchStudent(id, a);
            break;
        }
        case 4:
        {
            cout << "LIET KE DANH SACH SINH VIEN THEO LOP\n";
            string lop;
            cout<<"Nhap lop muon in thong tin: ", cin>>lop;
            listClass(a,lop);
            break;
        }
        case 5:
        {
            cout << "IN DANH SACH SINH VIEN\n";
            for (int i = 0; i < a.size(); i++)
            {
                cout << i + 1 << ". ";
                a[i].Output();
            }
            break;
        }
        case 6:
            break;
        default:
            cout << "Vui long nhap cac so trong khoang [1,6]\n";
        }
        if (n == 6)
            break;
    }
}