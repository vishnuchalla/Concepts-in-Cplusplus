#include<iostream>
using namespace std;
class unaryminus
{
 int a,b;
 public:
        void readdata();
        void display();
        void operator-();
};
void unaryminus::readdata()
{
 cout<<"Enter the values of a,b\n";
 cin>>a>>b;
}
void unaryminus::display()
{
 cout<<"a="<<a<<"b="<<b;
}
void unaryminus::operator-()
{
 a=-a;
 b=-b;
}
main()
{
 unaryminus M;
 M.readdata();
 M.display();
 -M;
 M.display();
}
