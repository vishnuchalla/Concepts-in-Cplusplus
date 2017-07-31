#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::ios;
using std::oct;
using std::hex;
main()
{
 float a=10.2;
 cout<<"\n"<<"\nAfter setting the flags the 'a'="<<setiosflags(ios::showpos|ios::showpoint)<<a<<"\n";
 cout.setf(ios::showbase);
 cout<<hex<<10<<"\n";
 cout<<oct<<10<<"\n";
}
