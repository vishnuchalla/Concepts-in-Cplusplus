#include<iostream>
using namespace std;
class simple
{
 int x;
 public:
 void setdata();
 void getdata();
};
inline void simple::setdata()
{
 x=20;
}
void simple::getdata()
{
 cout<<"value of x="<<x<<"\n";
}
main()
{
 simple s;
 s.setdata();
 s.getdata();
}
