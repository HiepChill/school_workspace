#include<iostream>
using namespace std;

class ngay_thang
{
private:
    int ngay;
    int thang;
public:
    ngay_thang();
    ngay_thang(int get_ngay);
    ngay_thang(int get_thang , int get_ngay);
    void output();
};

