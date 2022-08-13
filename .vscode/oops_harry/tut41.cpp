#include <iostream>                   //MULTIPLE INHERITANCE
using namespace std;

class base1
{
protected:
    int val1;

public:
    void set_val1(int a)
    {
        val1 = a;
    }
};
class base2
{
protected:
    int val2;

public:
    void set_val2(int b)
    {
        val2 = b;
    }
};
class base3
{
protected:
    int val3;

public:
    void set_val3(int c)
    {
        val3 = c;
    }
};
class sum : public base1, public base2, public base3
{
public:
    void display()
    {
        cout << "The value of val1:" << val1 << endl;
        cout << "The value of val2:" << val2 << endl;
        cout << "The value of val3:" << val3 << endl;
        cout << "The sum of all these values is:" << val1 + val2 + val3 << endl;
    }
};

int main()
{
    sum rk;
    rk.set_val1(4);
    rk.set_val2(67);
    rk.set_val3(6);
    rk.display();

    return 0;
}