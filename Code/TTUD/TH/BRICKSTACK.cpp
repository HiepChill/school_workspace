#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getMax(vector<int> a, int n)
{
    int max = a[0];
    for (int i : a)
    {
        if (i > max)
            max = i;
    }
    return max;
}
int brick_height(vector<int> a, int n)
{
    int max = getMax(a, n);
    if (max > a.size())
        return a.size();
    else
        return max + 1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    cout << brick_height(v, n);
}