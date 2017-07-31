#include<iostream>
using namespace std;
class two;
class one
{
 int data1;
 public:
 void setdata();
 void display();
 friend void sum(one,two);
};
class two
{
 int data2;
 public:
 void setdata();
 void display();
 friend void sum(one,two);
};
void sum(one ob1,two ob2)
{
 cout<<"Sum of 2 numbers is"<<"\n";
 cout<<ob1.data1+ob2.data2;
}
void one::setdata()
{
 cout<<"Enter value of data1"<<"\n";
 cin>>data1;
}
void one::display()
{
 cout<<"Value of data1 is"<<data1;
}
void two::setdata()
{
 cout<<"Enter value of data2"<<"\n";
 cin>>data2;
}
void two::display()
{
 cout<<"Value of data2 is"<<data2;
}
main()
{
 one s;
 s.setdata();
 s.display();
 two p;
 p.setdata();
 p.display();
 sum(s,p);
}
