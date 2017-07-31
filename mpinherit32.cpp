#include<iostream>
using namespace std;
class base
{
 public:
 int a;
 void setA(int x)
{
 a=x;
} 
void showA()
{
 cout<<"\nA:"<<a;
}
};
class d1:public base
{
 public:
 int b;
 void setB(int x)
 {
  b=x;
 }
void showB()
{
 cout<<"\nB:"<<b;
}
};
class d2:public base
{
 public:
 int c;
 void setC(int x)
 {
  c=x;
 }
 void showC()
 {
  cout<<"\nC:"<<c;
 }
};
class d3:public d1,public d2
{
 public:
 int d;
 void setD(int x)
 {
  d=x;
 }
 void showD()
 {
  cout<<"\nD:"<<d;
 }
};
main()
{
 base A;
 d1 B;
 d2 C;
 d3 D;
 D.setD(10);
 D.showD();
 D.setC(20);
 D.showC();
 D.setB(30);
 D.showB();
 B.setA(200);
 C.setA(100);
 B.showA();
 C.showA();
}
