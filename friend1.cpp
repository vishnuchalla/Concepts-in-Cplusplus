#include<iostream>
using namespace std;
class A
{
 int a,b;
 friend void sum(A);
 public:
 void read();
 void display();
 };
void A::read()
{
 cout<<"Enter the values of a and b\n";
 cin>>a>>b;
}
void A::display()
{
 cout<<"The values of a and b\n";
 cout<<a<<"\n";
 cout<<b<<"\n";
}
void sum(A ob)
{
 cout<<"Sum of a and b="<<ob.a+ob.b<<"\n";
}
main()
{
 A s;
 s.read();
 s.display();
 sum(s);
}
