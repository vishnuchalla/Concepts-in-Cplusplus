#include<iostream>
using namespace std;
class Base
{
 public:
 Base(int x)
 {
  cout<<"\nCalling base constructor";
  cout<<"\nArgument value received by the base class:"<<x;
 }
 ~Base()
 {
  cout<<"\nCalling base class Destructor";
 }
};
class DerivedA:public Base
{
 public:
 DerivedA(int p,int q):Base(q)
 {
  cout<<"\n Calling DerivedA class constructor";
  cout<<"\n Argument value received by the derivedA class:"<<p;
 }
 ~DerivedA()
 {
  cout<<"\n Calling DerivedA class destructor";
 }
};
class DerivedB:public DerivedA
{
 public:
 DerivedB(int p,int q,int r):DerivedA(q,r)
{
 cout<<"\n Calling DerivedB class constructor";
 cout<<"\n Argument value received by the derivedB class:"<<p;
}
~DerivedB()
{
 cout<<"\n Calling DerivedB class Destructor";
}
};
main()
{
 DerivedB obj(10,20,30);
}
