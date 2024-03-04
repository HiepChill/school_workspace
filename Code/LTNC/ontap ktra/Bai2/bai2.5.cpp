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
	while (true)
	{
		cout << "n = ";
    	cin >> n;
    	cout << "k = ";
    	cin >> k;
    	if ((k < 0 || n < 0) || n < k) 
			cout << "Moi nhap lai so lieu!" << endl; 
    	else
    		break;
	}
	
    int kq = C(k, n);
    cout << "C(" << k << "," << n << ") = " << kq << endl;
    
    
    return 0;
}

