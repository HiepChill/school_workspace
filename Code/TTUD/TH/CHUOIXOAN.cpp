#include <iostream>
#include <string>
#include <vector>

using namespace std;

string xoan(string &str)
{
    return str + string(str.rbegin(), str.rend());
}
char findCharacter(string &str, long long N)
{
    long long length = 2 * str.length();
    long long position = N % length;
    if (position < str.length())
    {
        return str[position];
    }
    return str[length - position - 1];
}
int main()
{
    string str, strX;
    cin >> str;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        long long m;
        cin >> m;
        char result = findCharacter(str, m);
        strX.push_back(result);
    }
    for (char i : strX)
    {
        cout << i << endl;
    }
    return 0;
}
