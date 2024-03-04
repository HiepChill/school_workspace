#include <iostream>
#include <vector>

using namespace std;

void printSumn(int n, const vector<int> &partition)
{
    cout << n << " = ";
    for (int i = 0; i < partition.size(); i++)
    {
        cout << partition[i];
        if (i < partition.size() - 1)
        {
            cout << "+";
        }
    }
    cout << endl;
}

void sumn(int n, int maxNum, vector<int> &currentPartition, int k)
{
    if (n == 0)
    {
        printSumn(k, currentPartition);
        return;
    }

    for (int i = min(n, maxNum); i >= 1; --i)
    {
        currentPartition.push_back(i);
        sumn(n - i, i, currentPartition, k);
        currentPartition.pop_back();
    }
}

int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    vector<int> currentPartition;
    sumn(n, n, currentPartition, n);
    return 0;
}