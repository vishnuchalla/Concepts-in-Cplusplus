#include<iostream>
using std::cout;
using std::cin;
class shape
{
 int age;
 char name[10];
 public:
 void set_val()
{
 cout<<"enter the values\n";
 cout<<"enter the name";
 cin>>name;
 cout<<"\nEnter age";
 cin>>age;
}
friend void display(shape);
};
void display(shape s)
{
 cout<<"\nName="<<s.name;
 cout<<"\nAge="<<s.age;
}
main()
{
 shape sh;
 sh.set_val();
 display(sh);
}
