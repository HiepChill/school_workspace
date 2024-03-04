#include <iostream>
using namespace std;


int C(int k, int n) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return C(k, n - 1) + C(k - 1, n - 1);
    }
}

int main() {
    int n, k;
    cout << "n = ";
    cin >> n;
    cout << "k = ";
    cin >> k;
    
    if (0 <= k && k <= n) {
        int kq = C(k, n);
        cout << "C(" << k << "," << n << ") = " << kq << endl;
    } else {
        cout << "So lieu khong hop le!" << endl;
    }
    
    return 0;
}

