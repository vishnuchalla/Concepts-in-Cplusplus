#include<iostream>
using namespace std;
void func(char ch='*',int c=50)
{
 for(int i=2;i<5;i++)
 {cout<<ch<<"\n";
 cout<<c<<"\n";}
}
main()
{
 cout<<"without parameters\n";
 func();
 cout<<"\nwith a single parameter\n";
 func('+');
 cout<<"\nwith two parameters\n";
 func('/',8);
}
