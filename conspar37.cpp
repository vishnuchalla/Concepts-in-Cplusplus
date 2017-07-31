#include<iostream>
using namespace std;
class B 
{
 protected:
 int a,b;
 public:
 B(){}
 B(int a,int b)
 { 
  this->a=a;
  this->b=b;
 }
};
class D:public B
{
 int c;
 public:
 D():D(10)
 {
   cout<<"Enter the values of a and b\n";
   cin>>a>>b;
 }
 D(int c):B(a,b)
 {
  this->c=c;
 }
 void display()
 {
  cout<<"Values of a,b and c are: "<<a<<" "<<b<<" "<<c;
 }
};
main()
{
 D d;
 d.display();
}
