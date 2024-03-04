#include <iostream>
#include <algorithm>
using namespace std;

bool find(int a[], int k, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int count = 0;
    for (int i = 0; i < n - 4; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int check = 0;
            int d = a[j] - a[i];
            for (int k = 2; k < 5; k++)
            {
                if (find(a, a[i] + k * d, n) == 0)
                {
                    check++;
                    break;
                }
            }
            if (check == 0)
            {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}