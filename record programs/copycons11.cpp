#include<iostream>
using namespace std;
class sample
{
 int x,y;
 public:
 sample(int,int);
 void display();
 sample(sample &);
};
sample::sample(int a,int b)
{
 x=a;
 y=b;
}
void sample::display()
{
 cout<<x<<"\n";
 cout<<y<<"\n";
}
sample::sample(sample &t)
{
 x=t.x;
 y=t.y;
}
main()
{
 sample s(10,20);
 s.display();
 sample t(s);
 t.display();
}
