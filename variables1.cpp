#include<iostream>
using namespace std;
main()
{
 int x=10;
 int *p=&x;
 int &y=x;
 cout<<x<<" is the value of integer variable\n";
 cout<<&x<<" is the address of integer variable\n";
 cout<<*p<<" is the value of pointer variable\n";
 cout<<p<<" is the address of pointer variable\n";
 cout<<y<<" is the value of reference variable\n";
 cout<<&y<<" is the address of reference variable\n";
}
