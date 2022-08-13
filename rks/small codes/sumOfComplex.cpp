#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void sumByNumber(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printnum()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }

};

int
main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.printnum();

    c2.setdata(3, 4);
    c2.printnum();

    c3.sumByNumber(c1, c2);
    c3.printnum();
    return 0;
}