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
 this->x=10;
 this->y=20;
}
void sample::display()
{
 cout<<this->x;
 cout<<this->y;
}
main()
{
 sample obj;
 obj.setdata();
 obj.display();
}
