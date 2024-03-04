#include <iostream>
#include <vector>

using namespace std;

void printSumk(int k, const vector<int> &partition)
{
    cout << k << " = ";
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
void sumk(int k, vector<int> &currentPartition, int maxNum, int ogk)
{
    if (k == 0)
    {
        printSumk(ogk, currentPartition);
        return;
    }

    for (int i = min(k, maxNum); i >= 1; --i)
    {
        currentPartition.push_back(i);
        sumk(k - i, currentPartition, i, ogk);
        currentPartition.pop_back();
    }
}
int main()
{
    int k;
    cout << "Nhap k = ";
    cin >> k;
    vector<int> currentPartition;
    sumk(k, currentPartition, k, k);
    return 0;
}
