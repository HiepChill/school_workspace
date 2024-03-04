#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i =0 ; i < n ; i ++)
    {
        cout << i + 1 << ": ";
        cin >> v[i];
    }

    cout << "Size of vector is: " << v.size() << endl;
    for (auto itr = v.begin() ; itr != v.end() ; ++ itr)
    {
        cout << *itr << endl;
    }

    return 0;
}