#include <iostream>
using namespace std;

template <class T1, class T2  >
class myclass
{
    T1 data1;
    T2 data2;

public:
    myclass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "the value of data1 is " << data1 << endl
             << "the value of data2 is " << data2 << endl;
    }
};

int main()
{
    myclass<int, double> obj(3, 6.78);
    obj.display();
    return 0;
}