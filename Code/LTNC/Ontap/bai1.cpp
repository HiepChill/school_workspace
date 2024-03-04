#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;


void nhap(int a[100][100] , int &m , int &n) {
    do{
        cout << "Nhap so hang: "; cin >> m;
        cout << "Nhap so cot: "; cin >> n;
    } while(m <= 0 || n <= 0);

    cout << "Nhap ma tran: " << endl;
        
        for (int i = 0 ; i < m ; i ++)
            for (int j = 0 ; j < n ; j ++) 
            {
                cout << "A[" << i << "][" << j << "] = ";
                cin >> a[i][j];
            }
    
    cout << endl;
}


void xuat(int a[100][100] , int m , int n) {
    cout << "In ma tran: " << endl;
    for (int i = 0 ; i < m ; i ++)
    {
        for (int j = 0 ; j < n ; j ++) 
        {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int a[100][100] , b[100][100] , c[100][100];
    cout << "Nhap ma tran A: " << endl;
    nhap(a , m , l);
    cout << "Nhap ma tran B: " << endl;
    nhap(b , l , n);
    cout << "Ma tran A" << endl;
    xuat(a , m , l);
    cout << "Ma tran B" << endl;
    xuat(b , l , n);
    cout << "Tong 2 ma tran = " << endl;
    for (int i = 0 ; i < m ; i ++)
    {
        for (int j = 0 ; j < n ; j ++) 
        {
            cout << setw(4) << a[i][j] + b[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0 ; i < m ; i ++)
    {
        for (int j = 0 ; j < n ; j ++) 
        {
            c[i][j] = 0;
            for (int k = 0 ; k < l ; k ++)
                c[i][j] += a[i][j] * b[i][j];
        }
    }
    cout << "Tich 2 ma tran: " << endl;
    for (int i = 0 ; i < m ; i ++)
    {
        for (int j = 0 ; j < n ; j ++) 
        {
            cout << setw(4) << a[i][j] + b[i][j];
        }
        cout << endl;
    }

    return 0;
}