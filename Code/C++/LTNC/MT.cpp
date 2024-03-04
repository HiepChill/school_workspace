#include<iostream>
#include<iomanip>
using namespace std;

void nhap(int a[][100] , int &m , int &n)
{
    cout << "Nhap m: "; cin >> m;
    cout << "Nhap n: "; cin >> n;
    for (int i = 0 ; i < m ; i ++)
    {
        for (int j = 0 ; j < n ; j ++)
        {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

void xuat(int a[][100] , int m , int n)
{
    for (int i = 0 ; i < m ; i ++)
    {
        for (int j = 0 ; j < n ; j ++)
        {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
}

void tichMatran (int a[][100] , b[][100])
{

}

int main()
{
    int n , m , l , a[100][100] , b[100][100] , c[100][100];
    cout << "Nhap ma tran A: \n"; nhap(a , m , l);
    cout << "Nhap ma tran B: \n"; nhap(b , l , n);
    cout << "In ma tran A: \n"; xuat(a , m , l);
    cout << "In ma tran B: \n"; xuat(b , l , n);

    for (int i = 0 ; i < m ; i ++)
    {
        for (int j = 0 ; j < n ; j ++)
        {
            c[i][j] = 0;
            for (int k = 0 ; k < l ; k ++)
            {
                c[i][j] += a[i][j] * b[k][j];
            }
        }
    }
    cout << "Tich 2 ma tran: " << c[0][100];
}