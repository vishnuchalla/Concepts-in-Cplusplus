#include<iostream>
using namespace std;
class A
{
 public:
 int a;
 void setA(int x)
 {
  a=x;
 }
 void showA()
 {
  cout<<"\nA="<<a;
 }
};
class C
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
class B:public A
{
 public:
 int b;
 void setB(int x)
 {
 b=x;
 }
 void showB()
 {
  cout<<"\nB="<<b;
 }
};
class D:public B,public C
{
 public:
 int b;
 void setB(int x)
 {
  b=x;
 }
 void showB()
 {
  cout<<"\nB="<<b;
 }
};
main()
{
 A objA;
 B objB;
 C objC;
 D objD;
 objA.setA(10);
 objA.showA();
 objB.setA(10);
 objB.setB(20);
 objB.showA();
 objB.showB();
 objC.setC(30);
 objC.showC();
 objD.setB(10);
 objD.setC(20);
 objD.showB();
 objD.showC();
}
