#include<iostream>
using namespace std;
class one;
class two
{
 public:
 two();
};
class one
{
 int b;
 public:
 one()
 {
  cout<<"Default constructor of class one\n";
 }
 one(int a)
 {
  cout<<"Parameterised constructor of class one"<<a<<"\n";
  b=a;
 }
 friend two::two();
};
two::two()
{
 cout<<"Default constructor of class two\n";
 cout<<"Callig constructor of class one\n";
 cout<<"Default constructor\n";
 one obj;
 cout<<"Parameterised constructor\n";
 one ob(1);
 cout<<"Value of b is "<<ob.b<<"\n";
}
main()
{
 two obt;
}
