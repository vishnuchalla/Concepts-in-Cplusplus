#include<iostream>
using namespace std;
class ratio
{
 int a,b;
 public:
 void read();
 void display();
 friend class xyz;
};
class xyz
{
 int c,d;
 public:
 void read();
 void display(ratio);
 void findratio(ratio);
 friend class ratio;
};
void ratio::read()
{
 cout<<"Enter the values of a and b\n";
 cin>>a>>b;
}
void ratio::display()
{
 cout<<"The values of a and b\n";
 cout<<a<<b;
}
void xyz::read()
{
 cout<<"Enter the values of a and b\n";
 cin>>c>>d;
}
void xyz::display(ratio ob)
{
 cout<<"values of a and b\n";
 cout<<ob.a<<ob.b;
 cout<<"Values of c and d\n";
 cout<<c<<d;
}
void xyz::findratio(ratio ob)
{
 if(c-d==0)
 cout<<"Not possible\n";
 else
 cout<<(ob.a-ob.b)/(c-d);
}
main()
{
 ratio one;
 xyz two;
 one.read();
 one.display();
 two.read();
 two.display(one);
 two.findratio(one);
}

