#include<iostream>
#include<iomanip>

using namespace std;
int n;
class matrix
{
    private:
        float mt[10][10];
    public:
        friend istream &operator >> (istream &in, matrix &a)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    cout << "Nhap phan tu thu [" << i << "][" << j << "]: ";
                    in >> a.mt[i][j];
                }
            }
            return in;
        }
        friend ostream &operator << (ostream &out, matrix &a)
        {
            for(int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    out << setw(5) << a.mt[i][j];
                }
                cout << endl;
            }
            return out;
        }
        friend matrix operator + (const matrix &a, const matrix &b)
        {
            matrix tong;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    tong.mt[i][j] = a.mt[i][j] + b.mt[i][j];
                }
            }
            return tong;
        }
        friend matrix operator * (const matrix &a, const matrix &b)
        {
            matrix nhan;

            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {            
                    nhan.mt[i][j] = 0;
                    for (int k = 1; k <= n; k++) 
                    {
                        nhan.mt[i][j] += a.mt[i][k] * b.mt[k][j];
                    }
                }
            }
            return nhan;           
        }        
};

int main()
{
    cout << "Nhap so hang va cot: "; cin >> n;
    matrix a, b, tong, nhan;
    cout << "---Ma tran 1---" << endl;
    cin >> a;
    cout << "---Ma tran 2---" << endl;
    cin >> b;
    cout << "---------------" << endl;
    tong = a + b;
    cout << "Tong 2 ma tran: " << endl << tong;
    nhan = a * b;
    cout << "Nhan 2 ma tran: " << endl << nhan;
    return 0;
}