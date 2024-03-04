#include<iostream>
#include<string>
#include<vector>
using namespace std;

class DongVat
{
    protected:
        double CanNang;
    public:
        DongVat(double w){
            CanNang = w;
        }
        virtual void inDL();
};

void DongVat::inDL()
{
    cout<<"Can Nang: "<<CanNang;
}

class SuTu : public DongVat
{
    private:
        double TocDo;
    public:
        SuTu(double w , double s):DongVat(w){
            TocDo = s;
        }
        void inDL();
};

void SuTu::inDL()
{
    cout<<"Can Nang: "<<CanNang<<endl;
    cout<<"Toc Do: "<<TocDo;
}

int main()
{
    SuTu s1(50 , 100);
    DongVat *dv1;
    dv1 = &s1;
    dv1 -> inDL();
    return 0;
}
