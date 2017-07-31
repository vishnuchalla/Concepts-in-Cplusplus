#include<iostream>
using namespace std;
class A;
class B
{
 int c,d,sum;
 public:
 void read();
 void display();
 void add(A&);
};
class A
{
 int a,b;
 public:
 void read();
 void display();
 friend void B::add(A&);
};
void A::read()
{
 cout<<"Enter the values of a and b\n";
 cin>>a>>b;
}
void B::read()
{
 cout<<"Enter the values of c and d\n";
 cin>>c>>d;
}
void B::add(A &a1)
{
 sum=a1.a+a1.b+c+d;
}
void B::display()
{
 cout<<"Sum="<<sum;
}
main()
{
 A a1;
 B b1;
 a1.read();
 b1.read();
 b1.add(a1);
 b1.display();
}


