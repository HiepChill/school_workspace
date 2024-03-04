#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << "Vec size: ";
    for (int x : v)
    {
        cout << x << endl;
    }

    return 0;
}