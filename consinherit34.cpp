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
};
main()
{
 b ob2;
}