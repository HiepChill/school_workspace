#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout << "Cap gia tri bo nho cho vecto: "; cin >> n;
    vector <int> VT(n);
    for (int i = 0 ; i < VT.size() ; i ++)
    {
        cout << i + 1 << ": ";
        cin >> VT[i];
    }

    for (int i = 0 ; i < VT.size() ; i ++)
    {
        cout << VT[i];
    }

    return 0; 
}