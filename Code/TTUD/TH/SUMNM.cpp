#include <iostream>
#include <algorithm>

using namespace std;

int a[100], n, m, sum = 0;

void output()
{
    cout << n << " = ";
    for (int i = 1; i <= m; i++)
    {
        if (i < m)
            cout << a[i] << "+";
        else
            cout << a[i] << endl;
    }
}

void analize(int pos)
{
    if (pos > m)
    {
        if (sum == n)
            output();
        return;
    }

    for (int i = 1; i <= n - sum; i++)
    {
        a[pos] = i;
        sum += i;
        analize(pos + 1);
        sum -= i;
    }
}

int main()
{
    cout << "Nhap n = ";
    cin >> n;
    cout << "Nhap m = ";
    cin >> m;
    analize(1);
    return 0;
}