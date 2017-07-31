#include<iostream>
using namespace std;
class factorial
{
 int n,i,f;
 public:
 factorial(int x)
 {
  n=x;
  f=1;
 }
 void fact()
 {
  for(i=1;i<=n;i++)
  f=f*i;
 }
 void display()
 {
  cout<<"The factorial of given number="<<f<<"\n";
 }
};
main()
{
 int a;
 cout<<"Enter the number\n";
 cin>>a;
 factorial f(a);
 f.fact();
 f.display();
}

