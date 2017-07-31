#include<iostream>
using namespace std;
class a
{
 public:
 a()
 {cout<<"constructor a called\n";}
};
class b:public a
{ 
 public:
 b()
 {cout<<"constructor b called\n";}
};
main()
{
 a ob1;
 b ob2;
}