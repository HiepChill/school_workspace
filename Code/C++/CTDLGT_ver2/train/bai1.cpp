#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    cout << "-------Menu---------" << endl;
    cout << "Chon 1 : Them gia tri vao Vector" << endl;
    cout << "Chon 2 : Xoa phan tu o vi tri bat ki" << endl;
    cout << "Chon 0 : De dung" << endl;

    int select , a , pos;

    while(true)
    {
        cout << "Nhap lua chon: "; cin >> select;
        if (select == 0) break;
        switch (select)
        {
            case 1:
            {
                cout << "Nhap gia tri de them vao Vector: ";
                cin >> a;
                cout << "Nhap vi tri chen vao Vector: ";
                cin >> pos;
                v.push_back(a);
                break;
            }

            case 2:
            {
                cout << "Nhap vi tri can xoa trong Vector: ";
                cin >> pos;
                // v.erase(pos);
                break;
            }


            default:
                break;
        }


    }

}