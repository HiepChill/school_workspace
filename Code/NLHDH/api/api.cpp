#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    const char *filePath = "D:/test.txt"; // TÃªn tá»‡p tin

    // Má»Ÿ tá»‡p tin Ä‘á»ƒ Ä‘á»c vÃ  ghi
    HANDLE fileHandle = CreateFileA(filePath, GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL); // HANDLE: 1 tham chiá»u/1 con trá» tá»›i tÃ i nguyÃªn há»‡ thá»‘ng; CreateFileA: má»Ÿ hoáº·c táº¡o tá»‡p tin; filepath: Ä‘Æ°á»ng dáº«n; cháº¿ Ä‘á»™ truy cáº­p cho phÃ©p Ä‘á»c vÃ  ghi: GENERIC_READ | GENERIC_WRITE; bá»™ Ä‘iá»u khiá»ƒn tá»‡p tin: 0; con trá» Ä‘áº¿n cáº¥u trÃºc báº£o vá»‡ tá»‡p tin: NULL; cháº¿ Ä‘á»™ má»Ÿ tá»‡p tin: OPEN_ALWAYS; thuá»™c tÃ­nh tá»‡p tin: FILE_ATTRIBUTE_NORMAL; chá»‰ Ä‘inh thuá»™c tÃ­nh báº£o máº­t: NULL)

    if (fileHandle == INVALID_HANDLE_VALUE) // Náº¿u má»Ÿ tá»‡p tin tháº¥t báº¡i
    {
        cerr << "Khong the mo tep tin." << endl; // ThÃ´ng bÃ¡o lá»—i
        return 1;                                // Káº¿t thÃºc chÆ°Æ¡ng trÃ¬nh
    }

    // Äá»c dá»¯ liá»‡u tá»« tá»‡p tin vÃ  hiá»ƒn thá»‹ nÃ³ trÃªn mÃ n hÃ¬nh
    const int bufferSize = 4096; // KÃ­ch thÆ°á»›c buffer(bá»™ Ä‘á»‡m) Ä‘á»c/ghi

    char buffer[bufferSize]; // Khai báº£o 1 máº£ng kÃ½ tá»± dÃ¹ng Ä‘á»ƒ lÆ°u trá»¯ dá»¯ liá»‡u Ä‘á»c tá»« tá»‡p tin

    DWORD bytesRead; // Biáº¿n Ä‘á»ƒ lÆ°u trá»¯ sá»‘ lÆ°á»£ng byte Ä‘Ã£ Ä‘á»c tá»« tá»‡p tin trong má»—i láº§n Ä‘á»c; DWORD: kiá»ƒu dá»¯ liá»‡u Ä‘Æ°á»£c Ä‘á»‹nh nghÄ©a trong Windows Ä‘á»ƒ Ä‘áº¡i diá»‡n cho sá»‘ nguyÃªn khÃ´ng Ã¢m 32-bit

    while (ReadFile(fileHandle, buffer, bufferSize, &bytesRead, NULL) && bytesRead > 0) // ReadFile: Ä‘á»c file tá»« fileHandle; lÆ°u trong: buffer; kich thÆ°á»›c bá»™ Ä‘á»‡m: bufferSize; sá»‘ lÆ°á»£ng byte Ä‘Ã£ Ä‘á»c sau khi hoÃ n thÃ nh: bytesRead; con trá» Ä‘áº¿n cáº¥u trÃºc OVERLAPPED Ä‘á»ƒ thá»±c hiá»‡n cÃ¡c hoáº¡t Ä‘á»™ng Ä‘á»c báº¥t Ä‘á»“ng bá»™: NULL. Náº¿u ReadFile False hoáº·c bytesRead < 0, vÃ²ng láº·p sáº½ dá»«ng
    {
        cout.write(buffer, bytesRead); // Xuáº¥t dá»¯ liá»‡u tá»« buffer vá»›i sá»‘ lÆ°á»£ng bytesRead, trÃ¡nh dá»¯ liá»‡u rÃ¡c
    }

    cout << "\nBan co muon ghi du lieu moi vao file khong? Y/N\n"; // CÃ³ nháº­p dá»¯ liá»‡u má»›i khÃ´ng
    char check;                                                    // Khai bÃ¡o biáº¿n kiá»ƒm tra
    cin >> check;                                                  // Nháº­p biáº¿n kiá»ƒm tra
    if (toupper(check) == 'Y')                                     // Náº¿u biáº¿n kiá»ƒm tra = YES, thá»±c hiá»‡n nháº­p dá»¯ liá»‡u
    {
        // Nháº­p dá»¯ liá»‡u tá»« bÃ n phÃ­m vÃ  ghi vÃ o cuá»‘i tá»‡p tin
        cout << "Nhap du lieu moi (nhan Enter de ket thuc):\n"; // YÃªu cáº§u nháº­p dá»¯ liá»‡u

        string input; // Khai bÃ¡o biáº¿n lÆ°u dá»¯ liá»‡u Ä‘Æ°á»£c nháº­p

        cin.ignore(); // XÃ³a kÃ½ tá»± Ä‘áº§u tiÃªn trong bá»™ nhá»› Ä‘á»‡m

        while (getline(cin, input) && !input.empty()) // Nháº­p dá»¯ liá»‡u vÃ  kiá»ƒm tra dá»¯ liá»‡u cÃ³ rá»—ng hay khÃ´ng
        {
            DWORD bytesWritten; // LÆ°u sá»‘ lÆ°á»£ng byte Ä‘Æ°á»£c ghi vÃ o tá»‡p sau má»—i láº§n ghi

            if (!WriteFile(fileHandle, input.c_str(), input.size(), &bytesWritten, NULL)) // WriteFile: ghi dá»¯ liá»‡u tá»« input vÃ o tá»‡p tin fileHandle; con trá» tá»›i dá»¯ liá»‡u trong input: input.c_str(); kÃ­ch thÆ°á»›c dá»¯ liá»‡u muá»‘n ghi/sá»‘ lÆ°á»£ng kÃ½ tá»± trong input: input.size(); sá»‘ lÆ°á»£ng byte Ä‘Ã£ Ä‘Æ°á»£c ghi vÃ o tá»‡p sau khi hÃ m hoÃ n thÃ nh: bytesWritten; con trá» Ä‘áº¿n cáº¥u trÃºc OVERLAPPED: NULL. Náº¿u Ä‘á»c khÃ´ng thÃ nh cÃ´ng, !False = True, vÃ²ng láº·p Ä‘Æ°á»£c gá»i
            {
                cerr << "Loi khi ghi vao tep tin." << endl; // ThÃ´ng bÃ¡o lá»—i

                CloseHandle(fileHandle); // ÄÃ³ng handle cá»§a tá»‡p tin

                return 1; // Káº¿t thÃºc chÆ°Æ¡ng trÃ¬nh
            }
        }

        // ÄÃ³ng tá»‡p tin sau khi ghi xong
        FlushFileBuffers(fileHandle); // Äáº£m báº£o toÃ n bá»™ dá»¯ liá»‡u náº±m trong bá»™ Ä‘á»‡m Ä‘Ã£ Ä‘Æ°á»£c Ä‘áº©y tá»« bá»™ Ä‘á»‡m vÃ o tá»‡p tin thá»±c sá»±

        CloseHandle(fileHandle); // ÄÃ³ng handle, giáº£i phÃ³ng tÃ i nguyÃªn

        cout << "Ghi du lieu moi thanh cong." << endl; // ThÃ´ng bÃ¡o ghi dá»¯ liá»‡u thÃ nh cÃ´ng
    }
    else if (toupper(check) == 'N')       // Náº¿u biáº¿n kiá»ƒm tra = N, thÃ´ng bÃ¡o káº¿t thÃºc
        cout << "Chuong trinh ket thuc."; // ThÃ´ng bÃ¡o káº¿t thÃºc chÆ°Æ¡ng trÃ¬nh

    return 0;
}