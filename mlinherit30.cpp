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
class C:public B
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
 objB.setA(10);
 objB.setB(20);
 objB.showA();
 objB.showB();
 objC.setB(20);
 objC.setC(30);
 objC.showB();
 objC.showC();
}
