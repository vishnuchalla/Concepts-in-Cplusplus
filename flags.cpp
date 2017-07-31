#include<iostream>
using std::cout;
using std::cin;
using std::ios;
main()
{
 float a=10;
 cout.setf(ios::showpos|ios::showpoint);
 cout<<a<<"\n";
 float b=10.3423;
 cout.width(10);
 cout.fill('$');
 cout<<b;
}
 
