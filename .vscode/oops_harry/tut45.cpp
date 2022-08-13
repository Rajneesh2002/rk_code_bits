#include<iostream>
using namespace std;

class student
{
    protected:
        int roll_no;
    public:
        void set_roll_no(int roll)
        {
            roll_no = roll;
        }
        void get_roll(void)
        {
            cout << "Your roll no is " << roll_no << endl;
        }
};

class exam : virtual public student
{
    protected:
        float maths,physics;
    public:
        void set_marks(float m1,float m2)
        {
            maths=m1;
            physics=m2;
        }    
        void print_marks()
        {
            cout<<"Marks in physics is "<<physics<<endl;
            cout<<"marks in maths is "<<maths<<endl;
        }
};

class sports : virtual  public student
{
    protected:
        int score;
    public:
        void set_score(int sc)
        {
            score=sc;
        }
        void print_score(void)
        {
            cout<<"your score in sports is "<<score<<endl;
        }
};

class result : public exam , public sports
{
    private:
        float percentage;
    public:
        void display(void)
        {
            cout<<"Your marks in maths is "<<maths<<endl;
            cout<<"Your marks in physics is "<<physics <<endl;
            cout<<"Your score in sports is "<<score<<endl;
            cout<<"Your percentage is "<<(maths+physics+score)<<endl;
        }

};
int main(){
    result a;
    a.set_roll_no(87);
    a.set_marks(89.7,90.8);
    a.set_score(89);
    a.display();
    return 0;
}