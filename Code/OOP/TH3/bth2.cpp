#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Employee
{
    protected:
        string name;
        int age , salary;
    public:
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        int getSalary(){
            return salary;
        }
        void setName();
        void setAge();
        void setSalary();
        void selfIntroduce(){
            cout<<"I am an Employee";
        }
        friend istream &operator >>(istream &in , Employee &a);
        friend ostream &operator <<(ostream &out , Employee &a);
};

void Employee::setName()
{
    cout<<"Nhap ten: ";
    getline(cin , name);
}

void Employee::setAge()
{
    cout<<"Nhap tuoi: ";
    cin>>age;
}

void Employee::setSalary()
{
    cout<<"Nhap luong: ";
    cin>>salary;
}

istream &operator >>(istream &in , Employee &a)
{
    cout<<"Nhap ten: ";
    getline(in , a.name);
    cin.ignore();
    cout<<"Nhap tuoi: ";in>>a.age;
    cout<<"Nhap luong: ";in>>a.salary;
    return in;
}

ostream &operator <<(ostream &out , Employee &a)
{
    out<<"Ten: "<<a.name<<"\tTuoi: "<<a.age<<"\tLuong: "<<a.salary;
    return out;
}

class Doctor : public Employee
{
    protected:
        int fee;
        string speciality;
    public:
        int getFee(){
            return fee;
        }
        string getSpeciality(){
            return speciality;
        }
        void setFee();
        void setSpeciality();
        void selfIntroduce(){
            cout<<"I am a doctor";
        }
        friend istream &operator >>(istream &in , Doctor &a);
        friend ostream &operator <<(ostream &out , Doctor &a);
};

void Doctor::setFee()
{
    cout<<"Nhap phi kham benh: ";
    cin>>fee;
}

void Doctor::setSpeciality()
{
    cout<<"Nhap chuyen mon cua bac si: ";
    getline(cin , speciality);
}

istream &operator >>(istream &in , Doctor &a)
{
    cout<<"Nhap phi kham benh: ";
    in>>a.fee;
    cout<<"Nhap chuyen mon cua bac si: ";
    getline(in , a.speciality);
    return in;
}

ostream &operator <<(ostream &out , Doctor &a)
{
    out<<"Phi kham benh: "<<a.fee<<"\tChuyen mon cua bac si: "<<a.speciality<<endl;
    return out;
}

int main()
{
    Employee a;
    Doctor b;
    cin>>a;
    cout<<a;
    cin>>b;
    cout<<b;
    b.selfIntroduce();
    a.selfIntroduce();
    a 
    return 0;
}