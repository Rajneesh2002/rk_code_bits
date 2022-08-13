#include<iostream>
#include<math.h>
using namespace std;

class point
{
    int x,y;
    public:
        point(int a,int b)
        {
            x=a;
            y=b;
        }
        void print()
        {
            printf("The point is (%d,%d)\n",x,y);
        }
        friend void dis(point ,point);

};

void dis(point a,point b)
{
    float x=powf((powf((a.x-b.x),2)+pow((a.y-b.y),2)),0.5);
    printf("The distance between both points is %f\n",x);
}


int main()
{
    point a(2,3);
    a.print();
    point b(7,4);
    b.print();
    dis(a,b);
    return 0;
}