#include<iostream>
using namespace std;
class B
{
 protected:
 int *p;
 public:
 B()
 {
  p=new int;
  *p=25;
 }
 virtual void show()
{
 cout<<"p="<<*p<<"\n";
}
virtual ~B()
{
 delete p;
 cout<<"Base destructor called\n";
}
};
class D:public B
{
 int *a;
 public:
 D()
 {
  a=new int;
  *a=30;
 }
 void show()
 {
  cout<<"a="<<*a<<"\n";
 }
 ~D()
{
 delete a;
 cout<<"Derived destructor called"<<"\n";
}
};
main()
{
 B *ptr;
 ptr=new B();
 ptr->show();
 ptr=new D();
 ptr->show();
 delete ptr;
}
