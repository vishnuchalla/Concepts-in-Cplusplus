#include<iostream>
using namespace std;
class preincrement
{
 int a,b;
 public:
        void readdata();
        void display();
        void operator++();
};
void preincrement::readdata()
{
 cout<<"Enter the values of a,b\n";/*similarly predecrement also*/
 cin>>a>>b;
}
void preincrement::display()
{
 cout<<"a="<<a<<"b="<<b;
}
void preincrement::operator++()
{
 a=++a;
 b=++b;
}
main()
{
 preincrement M;
 M.readdata();
 M.display();
 ++M;
 M.display();
}
