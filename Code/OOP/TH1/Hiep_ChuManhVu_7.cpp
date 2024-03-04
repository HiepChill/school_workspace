#include<iostream>

using namespace std;
class sophuc{
	private:
		int thuc, ao;
	public:
		void nhap();
		int getThuc();
		int getAo();
};
void sophuc::nhap(){
	cout<<"Nhap phan thuc: ";
	cin>>thuc;
	cout<<"Nhap phan ao: ";
	cin>>ao;
}
int sophuc::getThuc(){
	return thuc;
}
int sophuc::getAo(){
	return ao;
}
void tong(sophuc a, sophuc b){
	cout<<a.getThuc()+b.getThuc()<<" + "<<a.getAo()+b.getAo()<<"i"<<endl;
}
void tich(sophuc a, sophuc b){
	int n = (a.getThuc()*b.getThuc()-a.getAo()*b.getAo());
	int m = (a.getThuc()*b.getAo()+a.getAo()*b.getThuc());
	cout<<n<<" + "<<m<<"i"<<endl;
}
int main(){
	sophuc a, b;
	a.nhap();
	b.nhap();
	tong(a,b);
	tich(a,b);
	return 0;
}
