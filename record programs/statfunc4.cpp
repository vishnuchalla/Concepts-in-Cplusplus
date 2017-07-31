#include<iostream>
using std::cout;
using std::cin;
class sum
{
 static int a;
 public:
 static void set()
 {
  a=10;
 }
 static void display();
};
 void sum::display()
{
 cout<<"\nA="<<a;
}
int sum::a=0;
main()
{
 sum::set();
 sum::display();
}
