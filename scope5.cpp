#include<iostream>
using namespace std;
int x=10;
class A
{
 public:
 void func();};
void A::func()
{
 cout<<"func is called\n";
}
main()
{
 int x=20;
 A a;
 a.func();
 cout<<"Value of global"<<::x<<"\n";
 cout<<"value of local is:"<<x<<"\n";
}
