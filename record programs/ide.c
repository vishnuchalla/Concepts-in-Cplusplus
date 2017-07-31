#include<iostream>
using namespace std;
int sume(int num)
{ int r,s=0;
   {while(num>9)
  {
   s=0;
   while(num>0)
   {
    r=num%10;
    s=s+r;
    num=num/10;
   }
   num=s;
  }
  }
  return s;
}
main()
{
 int n=1,sum,k,flag=0,t,min,s,c;
 cin>>t;
 while(t--)
 {
  cin>>sum;
  while(n<100000)
  s=sume(n);
  if(s==sum)
  {flag++;
   n=n+1;
   min=sume(n);
   if(flag==1)
   k=min;
   if(min<k)
   {
    c=k;
    k=min;
    min=c;
   }
  }
 }
  cout<<min;
}
