#include<iostream>
using namespace std;

class student{
    protected:
       int rollno;
    public:
       void set_rollno(int);
       void get_rollno();
};

void student::set_rollno(int a){
    rollno=a;
}

void student::get_rollno(){
    cout<<"The rollno of student is:"<<rollno<<endl;
}

class exam: public student{
    protected:
        int phy;
        int maths;
    public:
        void set_marks(int,int);
        void get_marks();    
};

void exam::set_marks(int a,int b){
    phy=a;
    maths=b;
}

void exam::get_marks(){
    cout<<"The marks obtained in physics is: "<<phy<<endl;
    cout<<"The marks obtained in maths is: "<<maths<<endl;
}

class result:public exam{
    float percentage;
    public:
       void display();
};

void result::display(void)
{
    get_rollno();
    get_marks();
    cout<<"The percentage of the student is: "<<(phy+maths)/2<<"%"<<endl;
}


int main(){
    result rk;
    rk.set_rollno(4);
    rk.set_marks(94.0,9.0);
    rk.display();
 
    return 0;
}