#include<iostream>
using namespace std;
enum bool{false,true};
class less
{
 public:
 int a,b;
 void read();
 void display();
 bool operator<(less&);
}
void less::read()
{
 cout<<"Enter the values of a and b\n";
 cin>>a>>b;
}
void less::display()
{
 cout<<"a="<<a<<"\n";
 cout<<"b="<<b<<"\n";
}
bool less::operator<(less &l)
{
 if(l.a<l.b)
 return true;
 else
 return false;
}
main()
{
 less l;
 l.read();
 l.display();
 if(l.operator<(l)==true)
 cout<<l.a<<"is less than"<<l.b;
 else
 cout<<l.b<<"is less than"<<l.a;
}
