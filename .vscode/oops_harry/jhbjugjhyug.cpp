#include <iostream>
#include <cstring>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Professor : public Person
{
    int publications;
    static int cur_id;

public:
    void getdata()
    {
        cin >> name >> age >> publications;
        cur_id++;
    }
    void putdata()
    {
        cout << cur_id << " "
             << name << " "
             << age << " "
             << publications << endl;
    }
};
int Professor::cur_id;

class Student : public Person
{
    int marks[6];
    int cur_id = 76;

public:
    void getdata()
    {

        cin >> name >> age;

        for (int i = 0; i < 6; i++)
        {
            cin >> marks[i];
        }
    }
    void putdata()
    {
        int sum = 0;
        for (int i = 0; i < 6; i++)
        {
            sum += marks[i];
        }
        cout << name << endl
             << age << endl
             << sum << endl
             << cur_id << endl;
    }
};

int main()
{
    /*
    Student rk;
    rk.getdata();
    rk.putdata();
    
    */
    Professor p;
    p.getdata();

    Professor q;
    q.getdata();

    Professor r;
    r.getdata();

    Professor s;
    s.getdata();

    p.putdata();
    q.putdata();
    r.putdata();
    s.putdata();
    return 0;
}