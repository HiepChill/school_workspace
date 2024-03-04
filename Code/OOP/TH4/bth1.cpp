#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Nguoi{
	protected:
		string hoten;
	public:
		virtual void nhap();
		virtual int thuong() = 0;
		virtual void xuat();
};

void Nguoi::nhap(){
    cout<<"Nhap ho ten: ";getline(cin,hoten);
}

void Nguoi::xuat(){
    cout<<"Ho ten: "<<hoten<<endl;
}

class Sinhvien:public Nguoi{
	private:
		float Dttn;
	public:
		void nhap();
		int thuong();
		void xuat();
        string get_ten(){
            return hoten;
        }
};

void Sinhvien::nhap(){
	// cout<<"Nhap ho ten sinh vien: ";getline(cin,hoten);
	Nguoi::nhap();
    cout<<"Nhap diem tot nghiep: ";cin>>Dttn;
	cin.ignore();
}

void Sinhvien::xuat(){
	cout<<"Sinh vien: "<<hoten<<"  Diem: "<<Dttn<<endl;
}

int Sinhvien::thuong(){
    if(Dttn > 8) return 1;
    else return 0;
}

class Giangvien:public Nguoi{
	protected:
		int Sbb;
	public:
		void nhap();
		int thuong();
		void xuat();
        string get_ten(){
            return hoten;
        }
};

void Giangvien::nhap(){
	cout<<"Nhap ho ten giang vien: ";getline(cin,hoten);
	cout<<"Nhap so bai bao: ";cin>>Sbb;
	cin.ignore();
}

void Giangvien::xuat(){
	cout<<"Ten giang vien: "<<hoten<<"  So bai bao: "<<Sbb<<endl;
}

int Giangvien::thuong(){
    if(Sbb>3) return 1;
    else return 0;
}

void timten(vector<Giangvien> G,vector<Sinhvien> S){
    string tentim;
    int doi = 0;
    cout<<"Nhap ten nguoi can tim: ";getline(cin,tentim);
    for(int i = 0 ; i < G.size() ; i++){
        if(G[i].get_ten() == tentim){
            doi++;
            G[i].xuat();
        }
    }
    for(int i = 0 ; i < S.size() ; i++){
        if(S[i].get_ten() == tentim){
            doi++;
            S[i].xuat();
        }
    }
    if(doi == 0) cout<<"Khong co nguoi nay.\n";
}

int main(){
    int chon;
    Nguoi *N;
    Sinhvien s;
    Giangvien g;
    vector<Sinhvien> S;
    vector<Giangvien> G;
    while(true){
        cout<<"Nhap 2 de them giang vien , 1 de them sinh vien , 0 de dung nhap: ";cin>>chon;
        cin.ignore();
        if(chon == 0) break;
        if(chon == 1){
            N = &s;
            N->nhap();
            S.push_back(s);
        }
        if(chon==2){
            N = &g;
            N->nhap();
            G.push_back(g);
        }
    }
    timten(G,S);
    cout<<"--------------------------------------------------------------"<<endl;
    cout<<"Danh sach giang vien va sinh vien duoc thuong la:\n";
    for(int i = 0 ; i < G.size() ; i++){
        if(G[i].thuong()) G[i].xuat(); 
    }
    for(int i = 0 ; i < S.size() ; i++){
        if(S[i].thuong()) S[i].xuat();
    }
    cout<<"--------------------------------------------------------------"<<endl;
    cout<<"Danh sach sinh vien va giang vien la:\n";
    for(int i = 0 ; i < G.size() ; i++)
        G[i].xuat(); 
    for(int i=0;i<S.size();i++)
        S[i].xuat();
	return 0;
}
