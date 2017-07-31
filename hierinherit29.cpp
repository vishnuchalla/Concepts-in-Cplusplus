#include<iostream>
using namespace std;
class A
{ 
 protected:
 int a;
 public:
 void setA(int x)
 {
  a=x;
 }
 void showA()
 {
  cout<<"\nA="<<a;
 }
};
class B:protected A
{
 public:
 int b;
 void setB(int x)
 {
  b=x;
 }
 void showB()
 {showA();
 cout<<"\nB="<<b<<a;
 }
};
class C:public A
{
 public:
 int c;
 void setC(int x)
 {
  c=x;
 }
 void showC()
 {
  cout<<"\nC="<<c;
 }
};
main()
{
 A objA;
 B objB;
 C objC;
 objA.setA(10);
 objA.showA();
 objB.setB(20);
 objB.showB();
 objC.setA(10);
 objC.setC(30);
 objC.showA();
 objC.showC();
}
 
