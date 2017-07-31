#include<iostream>
using namespace std;
class sample
{
 int a,b;
 public:
 sample();
 sample(int);
 sample(int,int);
 void display();
};
sample::sample()
{
 cout<<"enter the values of a and b\n";
 cin>>a>>b;
}
sample::sample(int a)
{
 this->a=a;
 b=100;
}
sample::sample(int a,int b)
{
 this->a=a;
 this->b=b;
}
void sample::display()
{
 cout<<a<<"\n"<<b<<"\n";
}
main()
{int a=10,b=20;
 sample s;
 s.display();
 sample s1(a);
 s1.display();
 sample s2(a,b);
 s2.display();
}
