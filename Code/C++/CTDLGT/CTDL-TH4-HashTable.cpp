#include <iostream>
#include <string>
using namespace std;
// Muc tu trong tu dien
struct MucTu {
   string tuTiengAnh;
   string nghiaTiengViet;
};
struct TuDien {
   MucTu * table; // Con tro toi bang bam
   int tableSize; // Kich thuoc bang bam, so phan tu        
   bool * trong;  // Neu trong[i] == true thi vi tri i trong bang bam dang trong
};  
// Ham bam anh xa tu tieng Anh sang mot vi tri trong bang bam:
//   1. Cong cac ky tu
//   2. Chia cho kich thuoc bang bam va lay phan du
int hamBam(string tuTiengAnh, int tableSize) {
   int hashVal = 0;
   for (int i = 0; i < tuTiengAnh.size(); i++)
      hashVal += tuTiengAnh[i];
   
   return hashVal % tableSize;
}

// Ham khoi tao tu dien
void KhoiTaoTD(TuDien & td, int size = 101) {// Kich thuoc bang bam ngam 
											 //	dinh la 101  
   td.tableSize = size;
   td.table = new MucTu[size];
   td.trong = new bool[size];
   for (int i = 0; i < size; i++)
      td.trong[i] = true;
}

// Ham huy tu dien
void huyTD(TuDien & td) {  
   delete [] td.table;
   delete [] td.trong;
}

// Chen muc tu vao tu dien
void chenMucTu(TuDien & td, MucTu mt) {  
   int hashVal = hamBam(mt.tuTiengAnh, td.tableSize);	//lay key
   while (!td.trong[hashVal])
      hashVal = (hashVal + 1) % td.tableSize;
   td.table[hashVal] = mt;
   td.trong[hashVal] = false;
}

// Lay nghia tieng Viet
string nghiaTiengViet(TuDien & td, string tuTiengAnh) {  
   int hashVal = hamBam(tuTiengAnh, td.tableSize);
   while (!td.trong[hashVal] && td.table[hashVal].tuTiengAnh != tuTiengAnh)		
      hashVal = (hashVal + 1) % td.tableSize;	
   if (!td.trong[hashVal])	
      return td.table[hashVal].nghiaTiengViet;		// lay nghia tieng viet tu do ra
   else
      return "";
}

//1. Ham tra ve so muc tu trong tu dien
int CountMT(TuDien & td) {
   int count = 0;
   for (int i = 0; i < td.tableSize; i++)
      if (!td.trong[i])
         count++;
   return count;
}

//2. Ham cap nhat nghia tieng Viet cua mot tu tieng Anh
void CapNhatNghia(TuDien & td, string tuTiengAnh, string nghiaTiengViet) {
   int hashVal = hamBam(tuTiengAnh, td.tableSize);
   while (!td.trong[hashVal] && td.table[hashVal].tuTiengAnh != tuTiengAnh)		//neu ô do khong rong, tu tieng anh trong ô do khac tu tieng anh truyen vao
      hashVal = (hashVal + 1) % td.tableSize;		// thì Theo CT tham do tuyen tinh, tìm key rong
   if (!td.trong[hashVal])		//&& td.table[hashVal].tuTiengAnh == TiengAnh
      td.table[hashVal].nghiaTiengViet = nghiaTiengViet;		// thì cap nhat nghia tieng viet can thay doi
}

//3. Ham xoa muc tu khoi tu dien
void XoaMucTu(TuDien & td, string tuTiengAnh) {
   int hashVal = hamBam(tuTiengAnh, td.tableSize);
   while (!td.trong[hashVal] && td.table[hashVal].tuTiengAnh != tuTiengAnh)		//neu ô do khong rong, tu tieng anh trong ô do khac tu tieng anh truyen vao
      hashVal = (hashVal + 1) % td.tableSize;
   if (!td.trong[hashVal])
      td.trong[hashVal] = true;		// chuyen o do thanh rong
}

//4. Ham kiem tra trung lap tu tieng Anh khi chen muc tu moi vao tu dien
bool CheckTrungLap(TuDien & td, string TiengAnh) {
   int hashVal = hamBam(TiengAnh, td.tableSize);
   while (!td.trong[hashVal] && td.table[hashVal].tuTiengAnh != TiengAnh)
      hashVal = (hashVal + 1) % td.tableSize;
   if (!td.trong[hashVal])
      return true;	// tra ve trung lap
   else		// khong co trong bang bam
      return false;		// tra ve khong trung lap
}

//5. Ham cai tien chu hoa chu thuong
string Cai_tien(string &s) {
	for (int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);	// chuyen het thanh chu thuong
	return s;
}

// Ham in ra tu dien
void InRaTuDien(TuDien & td) {
   for (int i = 0; i < td.tableSize; i++)
      if (!td.trong[i])		// kiem tra xem o do co trong khong
         cout << td.table[i].tuTiengAnh << ": " << td.table[i].nghiaTiengViet << endl;
}
int main() {
   TuDien td;
   KhoiTaoTD(td);
   // Tao mot vai muc tu
   MucTu mt1, mt2, mt3, mt4;
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
   
   cout << "In so tu trong tu dien hien tai\n";
   InRaTuDien(td);
   // Them muc tu moi de kiem tra trung lap
   cout<<"Chen mot tu moi tieng Anh vao tu dien: "; 
   getline(cin, mt4.tuTiengAnh);
   Cai_tien(mt4.tuTiengAnh);
   cout<<"Nghia cua tu la: ";
   getline(cin, mt4.nghiaTiengViet);
   Cai_tien(mt4.nghiaTiengViet);
   if (CheckTrungLap(td, mt4.tuTiengAnh)) 
      cout << "Muc tu trung. Khong the chen vao tu dien!" << endl;
   else {
      cout << "Khong trung lap. Them muc tu vao tu dien!" << endl;
      chenMucTu(td, mt4);
   }
   // In ra tu dien
   cout << "\nIn tu dien\n";
   InRaTuDien(td);
   // So muc tu cua tu dien
   cout << "\nSo muc tu hien co cua tu dien la: " << CountMT(td) << endl;
   // Yeu cau nhap tu tieng Anh de tra cuu tu dien
   
   cout << "\nNhap tu tieng Anh: ";
   getline(cin, tuTA);
   Cai_tien(tuTA);
   // Tim nghia tieng Viet
   nghiaTV = nghiaTiengViet(td, tuTA);
   // In ket qua tra cuu
   if (nghiaTV == "")		
      cout << "Tu vua nhap khong co trong tu dien" << endl;  
   else		
      cout << "Nghia cua tu vua nhap la: " << nghiaTV << endl;
   // Cap nhat nghia tieng Viet
   cout << "\nNhap tu tieng Anh can cap nhat: ";
   getline(cin, tuTA);
   Cai_tien(tuTA);
   cout << "Nhap nghia tieng Viet cap nhat: ";
   getline(cin, nghiaTV);
   CapNhatNghia(td, tuTA, nghiaTV);
   cout << "Nghia cua tu '" << tuTA << "' sau khi cap nhat la: " << nghiaTiengViet(td, tuTA) << endl;
   cout << "\nIn lai tu dien sau khi cap nhat la\n";
   InRaTuDien(td);
   // Xoa muc tu
   cout<<"\nXoa muc tu trong tu dien:\n";
   cout << "Nhap tu tieng Anh can xoa: ";
   getline(cin, tuTA);
   Cai_tien(tuTA);
   XoaMucTu(td, tuTA);
   cout << "\nIn lai tu dien sau khi xoa\n";
   InRaTuDien(td);
   huyTD(td);
   return 0;
}
