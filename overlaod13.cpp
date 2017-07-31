#include<iostream>
using namespace std;
class swapprogram
{
 int c;
 float d;
 char s;
 public:
 void display(char a,char b)
{
 s=a;
 a=b;
 b=s;
 cout<<"After swap:"<<a<<b;
}
void display(int a,int b)
{
 c=a;
 a=b;
 b=c;
 cout<<"After swap:"<<a<<b;
}
void display(float a,float b)
{
 d=a;
 a=b;
 b=d;
 cout<<"After swap:"<<a<<b;
}
};
main()
{
 swapprogram s;
 s.display('A','B');
 s.display(3,4);
 s.display(2.5,5.2);
}
