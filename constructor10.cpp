#include<iostream>
using namespace std;
class sample
{
 int x,y;
 public:
 sample();
 void display();
 ~sample();
};
sample::sample()
{
 x=10;
 y=20;
}
void sample::display()
{
 cout<<x<<y;
}
sample::~sample()
{
 cout<<"destructor called\n";
}
main()
{
 int x,y;
 cout<<"values of x,y\n";
 sample obj;
 obj.display();
}
