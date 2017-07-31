#include<iostream>
using namespace std;
class base
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
class derived:private base
{
 int b;
 public:
 void setB(int y)
{
 setA(10);
 showA();
 b=y+a;
}
void showAB()
{
cout<<"\nA="<<a<<"B="<<b;
}
};
main()
{
derived obj;
obj.setB(20);
obj.showAB();
}
