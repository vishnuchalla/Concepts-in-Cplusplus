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
 b(int x):a(x)
 {cout<<"constructor b called\n"<<x;}
 ~b()
 {cout<<"destructor b called\n";}
};
main()
{
 a ob1(2);
 b ob2(3);
}