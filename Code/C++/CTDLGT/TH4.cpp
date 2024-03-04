#include <iostream>
#include <string>

using namespace std;

// Muc tu trong tu dien
struct MucTu
{
    string tuTiengAnh;
    string nghiaTiengViet;
};

struct TuDien
{
    MucTu * table; // Con tro toi bang bam
    int tableSize; // Kich thuoc bang bam        
    bool * trong;  // Neu trong[i] == true thi vi tri i trong bang bam
                   // dang trong
};
	
// Ham bam anh xa tu tieng Anh sang mot vi tri trong bang bam:
//   1. Cong cac ky tu
//   2. Chia cho kich thuoc bang bam va lay phan du
int hamBam(string tuTiengAnh, int tableSize)
{
    int hashVal = 0;
    for (int i = 0; i < tuTiengAnh.size(); i++)
        hashVal += tuTiengAnh[i];
    
    return hashVal % tableSize;
}

// Ham khoi tao tu dien
void khoiTaoTD(TuDien & td, int size = 101) // Kich thuoc bang bam ngam 
                                            // dinh la 101
{ 

}

// Ham huy tu dien
void huyTD(TuDien & td)
{

}

// Chen muc tu vao tu dien
void chenMucTu(TuDien & td, MucTu mt)
{

}

// Lay nghia tieng Viet
string nghiaTiengViet(TuDien & td, string tuTiengAnh)
{
    
}

int main()
{
    TuDien td;
    khoiTaoTD(td);
	
    // Tao mot vai muc tu
    MucTu mt1, mt2, mt3;
    mt1.tuTiengAnh     = "computer";
    mt1.nghiaTiengViet = "may tinh";
    mt2.tuTiengAnh     = "memory";
    mt2.nghiaTiengViet = "bo nho";
    mt3.tuTiengAnh     = "hard disk";
    mt3.nghiaTiengViet = "dia cung";
	
    // Chen cac muc tu vao tu dien
    chenMucTu(td, mt1);
    chenMucTu(td, mt2);
    chenMucTu(td, mt3);

    string tuTA, nghiaTV;

    // Yeu cau nhap tu tieng Anh de tra cuu tu dien
    cout << "Nhap tu tieng Anh: ";
    getline(cin, tuTA);
	
    // Tim nghia tieng Viet
    nghiaTV = nghiaTiengViet(td, tuTA);
	
    // In ket qua tra cuu
    if (nghiaTV == "")		
        cout << "Tu vua nhap khong co trong tu dien" << endl;
    else		
        cout << "Nghia cua tu vua nhap la: " << nghiaTV << endl;
	
    huyTD(td);

    return 0;
}
