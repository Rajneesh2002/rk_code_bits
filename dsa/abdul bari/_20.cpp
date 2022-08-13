#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

struct rectangle *fun()
{
    struct rectangle *p;
    p = new rectangle;
    p->length = 56;
    p->breadth = 43;

    return p;
}

int main()
{
    struct rectangle *ptr = fun();
    cout << "length " << ptr->length << endl
         << "breadth " << ptr->breadth << endl;
    return 0;
}