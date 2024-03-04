#include <iostream>
using namespace std;

struct SV
{
	int ID, tuoi;
	string ten, monhoc, xeploai;
	float diemgk, diemck, diem;
	void Nhap()
	{
		cout<<"Nhap ID sinh vien: ";
		cin>>ID;
		cout<<"Nhap ten sinh vien: ";
		cin.ignore();
		getline(cin,ten);
		cout<<"Nhap tuoi sinh vien: ";
		cin>>tuoi;
		cout<<"Nhap mon hoc: ";
		cin.ignore();
		getline(cin,monhoc);
		cout<<"Nhap diem giua ky cua sinh vien: ";
		cin>>diemgk;
		cout<<"Nhap diem cuoi ky cua sinh vien: ";
		cin>>diemck;
	}
	void Xuat()
	{
		cout<<"ID sinh vien: "<<ID<<endl;
		cout<<"Ten sinh vien: "<<ten<<endl;
		cout<<"Tuoi sinh vien: "<<tuoi<<endl;
		cout<<"Mon hoc cua sinh vien: "<<monhoc<<endl;
		cout<<"Diem giua ky cua sinh vien: "<<diemgk<<endl;
		cout<<"Diem cuoi ky cua sinh vien: "<<diemck<<endl;
	}
	void Tinhdiem()
	{
		diem = diemgk*0.5 + diemck*0.5;
		cout<<diem<<endl;
	}
	
};


int main()
{
	int size;
	cout<<"Nhap so sinh vien: ";
	cin>>size;
	cin.ignore();
	SV *p = new SV[size];
	cout<<"----------------------------------------------"<<endl;
	for (int i=0;i<size;i++)
	{
		cout<<"Sinh vien thu "<<i+1<<": "<<endl;
		(p+i)->Nhap();
	}
	cout<<"----------------------------------------------"<<endl;
	cout<<"Danh sach sinh vien: "<<endl;
	for (int i=0;i<size;i++)
	{
		cout<<"Sinh vien thu "<<i+1<<": "<<endl;
		(p+i)->Xuat();
	}
	cout<<"----------------------------------------------"<<endl;
	cout<<"Danh sach diem het mon: "<<endl;
	for (int i=0;i<size;i++)
	{
		cout<<(p+i)->ten<<": ";
		(p+i)->Tinhdiem();
	}
	cout<<"----------------------------------------------"<<endl;
	int choice = -1;
	cout<<"Tim kiem sinh vien: "<<endl;
	while (choice != 3)
	{
		cout<<"0. Tim theo ID"<<endl;
		cout<<"1. Tim theo ten"<<endl;
		cout<<"2. Tim theo diem"<<endl;
		cout<<"3. Ket thuc"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 0: 
			{
				int fID, check =0;
				cout<<"Nhap ID can tim: ";
				cin>>fID;
				for (int i=0;i<size;i++)
				{
					if ((p+i)->ID == fID)
					{
						check++;
						cout<<"Sinh vien can tim: "<<endl;
						(p+i)->Xuat();
						cout<<"----------------------------------------------"<<endl;	
					}
				}
				if (check == 0) {cout<<"Khong co sinh vien co ID can tim"; cout<<endl<<"----------------------------------------------"<<endl; }
				break;
			}
			case 1:
			{
				string ften;
				int check =0;
				cout<<"Nhap ten sinh vien can tim: ";
				cin>>ften;
				for (int i=0;i<size;i++)
				{
					if ((p+i)->ten == ften)
					{
						check++;
						cout<<"Sinh vien can tim: "<<endl;
						(p+i)->Xuat();	
						cout<<"----------------------------------------------"<<endl;
					}
				}
				if (check == 0) {cout<<"Khong co sinh vien can tim"; cout<<endl<<"----------------------------------------------"<<endl;}
				break;
			}
			case 2:
			{
				int fdiem, check =0;
				cout<<"Nhap diem can tim: ";
				cin>>fdiem;
				for (int i=0;i<size;i++)
				{
					if ((p+i)->diem == fdiem)
					{
						check++;
						cout<<"Sinh vien co diem can tim: "<<endl;
						(p+i)->Xuat();	
						cout<<"----------------------------------------------"<<endl;
					}
				}
				if (check == 0) {cout<<"Khong co sinh vien co diem can tim"; cout<<endl<<"----------------------------------------------"<<endl;}
				break;
			}
		}		
	}
	cout<<"----------------------------------------------"<<endl;
	cout<<"Xep loai sinh vien: "<<endl;
	for (int i=0;i<size;i++)
	{
		if ((p+i)->diem >=8.5)
			(p+i)->xeploai = "Gioi";
		else if ((p+i)->diem >=7.0)
			(p+i)->xeploai = "Kha";
		else if ((p+i)->diem >=5.5)
			(p+i)->xeploai = "Trung binh";
		else if ((p+i)->diem >=4)
			(p+i)->xeploai = "Yeu";
		else (p+i)->xeploai = "Truot";
		cout<<(p+i)->ten<<": "<<(p+i)->xeploai<<endl;
	}		
	return 0;
}