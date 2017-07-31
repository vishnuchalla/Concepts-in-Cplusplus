#include<iostream>
using namespace std;
class vector
{
 int x,y,z;
 public:
 vector(int a,int b,int c)
{
 x=a;
 y=b;
 z=c;
}
void show()
{
 cout<<x<<"i+"<<y<<"j+"<<z<<"k";
 cout<<"\n";
}
vector operator++(int i)
{
 x++;
 y++;
 z++;
 return*this;
}
};
main()
{
 vector a(10,20,30);
 cout<<"\n Vector A:";
 a.show();
 a++;
 cout<<"\n After Increment A:";
 a.show();
}
