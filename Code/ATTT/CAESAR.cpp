#include <iostream>
#include <string>

using namespace std;

string caesarEncrypt(const string& input, int key) {
    string encryptedText = "";

    key = (key % 26 + 26) % 26;

    for (char ch : input) {
        if (isalpha(ch)) {
            char base = (isupper(ch)) ? 'A' : 'a';
            encryptedText += static_cast<char>((ch - base + key) % 26 + base);
        } else {
            encryptedText += ch;
        }
    }

    return encryptedText;
}

string caesarDecrypt(const string& input, int key) {
    // Ð? gi?i mã, ch? c?n d?o ngu?c key
    return caesarEncrypt(input, -key);
}

int main() {
    cout << "Nhap chuoi can ma hoa: ";
    string inputString;
    getline(cin, inputString);

    int key;
    cout << "Nhap khoa (so nguyen): ";
    cin >> key;

    string encryptedString = caesarEncrypt(inputString, key);
    cout << "Chuoi da ma hoa: " << encryptedString << endl;
    
    string decryptedString = caesarDecrypt(encryptedString, key);
    cout << "Chuoi da giai ma: " << decryptedString << endl;


    return 0;
}
