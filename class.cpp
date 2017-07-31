#include<iostream>
using std::cout;
using std::cin;
class Values
{
 int a,b;
 public:
 void value()
 {
  cout<<"Enter the values of a&b"<<"\n";
  cin>>a>>b;
  cout<<"a="<<a<<"b="<<b<<"\n";
 }
};
main()
{
 Values s;
 s.value();
}
