#include<iostream>
#include<iomanip>
using namespace std;

int n , m;
class matrix
{
    private:
        float mt[10][10];
    public:
        friend istream &operator >> (istream &in, matrix &a);
        friend ostream &operator << (ostream &out, matrix &a);
        void operator()(int i, int j)
        {
            if (i <= n && j <= m) {
                cout << mt[i][j] << endl;
            }
            else {
                cout<<"Vuot qua gioi han" << endl;
                cout << mt[0][0] << endl;
            }
        }
};

istream &operator >> (istream &in, matrix &a)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= m; j++)
                {
                    cout << "Nhap phan tu thu [" << i << "][" << j << "]: ";
                    in >> a.mt[i][j];
                }
            }
            return in;
        }

ostream &operator << (ostream &out, matrix &a)
        {
            for(int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= m; j++)
                {
                    out << setw(5) << a.mt[i][j];
                }
                cout << endl;
            }
            return out;
        }

int main()
{
    matrix a;
    int i, j;
    cout << "Nhap so hang: "; cin >> n;
    cout << "Nhap so cot: "; cin >> m;
    cout << "---Mhap ma tran---" << endl; cin >> a;
    cout << "Nhap vao vi tri i: "; cin >> i;
    cout << "Nhap vao vi tri j: "; cin >> j;
    a(i, j);
}