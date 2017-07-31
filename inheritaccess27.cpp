#include<iostream>
using namespace std;
class Base
{
 public:
 int a;
 Base()
 {
  a=10;
 }
};
class DerivedA:Base
{
 public:
 Base::a;
};
class DerivedB:DerivedA
{
 public:
 void showa()
 {
  cout<<"\nA="<<a;
 }
};
main()
{
 DerivedB obj;
 obj.showa();
}
