#include<iostream>
using namespace std;
class a
{
 public:
 a()
 {cout<<"constructor a called\n";}
 a(int x)
 {cout<<"a="<<x<<"\n";}
 ~a()
 {cout<<"destructor a called\n";}
};
class b:public a
{ 
 public:
 b()
 {cout<<"constructor B called\n";}
 b(int x)
 {cout<<"constructor b called\n"<<x;}
 ~b()
 {cout<<"destructor b called\n";}
};
main()
{
 b ob2(3);
}