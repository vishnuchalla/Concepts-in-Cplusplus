#include<iostream>
using namespace std;
class sample 
{
 int x,y;
 public:
 void setdata();
 void display();
};
void sample::setdata()
{
 x=10;
 y=20;
}
void sample::display()
{
 cout<<x<<"\n";
 cout<<y<<"\n";
}
main()
{
 sample obj;
 sample *p;
 p=new sample();
 p->setdata();
 p->display();
}
