#include<iostream>
using namespace std;
class factorial
{
 int n;
 public:
 void facto()
{
  int i,fact=1;
  cout<<"Enter the number\n";
  cin>>n;
  for(i=1;i<=n;i++)
  fact=fact*i;
  cout<<"Factorial="<<fact<<"\n";
}
};
main()
{
 factorial obj;
 obj.facto();
}
  
