#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
using namespace std;

class Student
{
    private:
        string Masv , Tensv , Lop;
        float Dtb;
    public:
        void nhap();
        void xuat();
        string get_id(){
            return Masv;
        }
        string get_lop(){
            return Lop;
        }
};

void Student::nhap()
{
    cin.ignore();
    cout << "Nhap ten Sinh Vien: ", getline(cin , Tensv);
    cout << "Nhap ma Sinh Vien: ", getline(cin , Masv);
    cout << "Nhap lop Sinh Vien: ", getline(cin , Lop);
    cout << "Nhap DTB: ", cin >> Dtb;
}

void Student::xuat()
{
    cout << "|" << setw(20) << Tensv << "|" << setw(10) << Masv << "|" << setw(12) << Lop << "|" << setw(8) << Dtb << "|" << endl;
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

void Delete(vector<Student> &S , string ma)
{
    for(int i = 0 ; i < S.size() ; i++)
    {
        if(S[i].get_id() == ma)
        {
            S.erase(S.begin() + i);
        }
    }
}

void Search(vector<Student> &S , string ma)
{
    int Index = -1;
    for(int i = 0 ; i < S.size() ; i++)
    {
        if(S[i].get_id() == ma)
        {
            Index = i;
        }
    }
    if(Index != -1)
    {
        cout<<"Sinh vien can tim la: "<<endl;
        S[Index].xuat();
    }
    else cout<<"Khong ton tai sinh vien do!";
}

void List(vector<Student> &S , string lop)
{
    int tmp = 0;
    for(int i = 0 ; i < S.size() ; i++)
    {
        if(S[i].get_lop() == lop)
        {
            tmp = 1;
        }
    }
    if(tmp != 0){
        cout<<"Danh sach sinh vien thuoc lop do la: "<<endl;
        for(int i = 0 ; i < S.size() ; i++)
        {
            S[i].xuat();
        }
    }
    else cout<<"Khong co sinh vien trong lop!";
}

int main()
{
    vector<Student> S;
    Student s;
    int n;
    while(true)
    {
        Menu();
        cout<<"Nhap lua chon: ";cin>>n;
        switch (n)
        {
            case 1:
            {
                cout<<"Them sinh vien: "<<endl;
                s.nhap();
                S.push_back(s);
                break;
            }
            case 2:
            {
                cout<<"Xoa sinh vien ra khoi danh sach: "<<endl;
                string msv;
                cout<<"Nhap ma sinh vien can xoa: ";
                cin>>msv;
                Delete(S , msv); 
                break;
            }
            case 3:
            {
                cout<<"Tim sinh vien theo ma: "<<endl;
                string msv;
                cout<<"Nhap ma sinh vien de tim kiem: ";
                cin>>msv;
                Search(S , msv);
                break;
            }
            case 4:
            {
                cout<<"Liet ke sinh vien theo lop: "<<endl;
                string lop;
                cout<<"Nhap lop muon xem danh sach: ";
                cin>>lop;
                List(S , lop);
                break;
            }
            case 5:
            {
                cout<<"Danh sach sinh vien: "<<endl;
                for(int i = 0 ; i < S.size() ; i++)
                {
                    cout<<"Sinh vien thu "<<i + 1<<": "<<endl;
                    S[i].xuat();
                }
                break;
            }
            case 6:
                break;
            default:
                cout<<"Nhap lai lua chon tu 1 -> 6 !";
        }
        if(n == 6)
            break;
    }
    return 0;
}