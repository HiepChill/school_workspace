#include<iostream>
using namespace std;

class sp
{
    private:
        int pt , pa;
    public:
        void nhap();
        friend void tong(const sp &sp1 , const sp &sp2);
};

void sp::nhap()
{
    cout<<"Nhap phan thuc: ";
    cin>>pt;
    cout<<"Nhap phan ao: ";
    cin>>pa;
}

void tong(const sp &sp1 , const sp &sp2)
{
    cout<<"Tong = "<<sp1.pt + sp2.pt<<" + "<<sp1.pa + sp2.pa<<"i"<<endl;
}

int main()
{
    sp sp1 , sp2;
    sp1.nhap();
    sp2.nhap();
    tong(sp1 , sp2);
}

