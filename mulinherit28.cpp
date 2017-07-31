#include<iostream>
using namespace std;
class area
{
 protected:
 int a;
 public:
 void Area(int x,int y)
 {
  a=x*y;
 }
};
class height
{
 protected:
 int h;
 public:
 void Height()
 {
  h=10;
 }
};
class volume:private area,private height
{int v;
 public:
 void Volume()
 {Area(10,20);
  Height();
  v=a*h;
 cout<<"volume="<<v<<"\n";
}
};
main()
{
 volume v;
 v.Volume();
}
