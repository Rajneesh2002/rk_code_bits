#include <iostream>
#include <string>
using namespace std;

class Student
{
    int age;
    string first_name;
    string last_name;
    int standard;

public:
    void set_age(int a)
    {
        age = a;
    }
    int get_age()
    {
        return age;
    }
    void set_first_name(string s1)
    {
        first_name = s1;
    }
    string get_first_name()
    {
        return first_name;
    }
    void set_last_name(string s2)
    {
        last_name = s2;
    }
    string get_last_name()
    {
        return last_name;
    }
    void set_standard(int b)
    {
        standard = b;
    }
    int get_standard()
    {
        return standard;
    }
};
int main()
{
    Student p;
    int a;
    cin >> a;
    p.set_age(a);

    
    string s1,s2;
    cin>>s1>>s2;
    p.set_first_name(s1);

    
    
    p.set_last_name(s2);
    int b;
    cin >> b;
    p.set_standard(b);


    cout << p.get_age() << endl;
    cout << p.get_first_name() << ", " << p.get_last_name() << endl;
    cout << p.get_standard() << endl;
    cout << endl
         << p.get_age() << "," << p.get_first_name() << "," << p.get_last_name() << "," << p.get_standard();

    return 0;
}