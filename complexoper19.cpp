#include<iostream>
using namespace std;
class complex
{
int real;
int img;
static int i;
public:
void readdata();
void display();
friend complex  operator+(complex,complex);
};
void complex::readdata()
{
 cout<<"Enter the values of real and imaginary part\n";
 cin>>real>>img;
}
void complex::display()
{
 cout<<"Complex:"<<++i<<"\n";
 cout<<real<<"+i"<<img<<"\n";
}
complex operator+(complex c1,complex c2)
{
 complex c3;
 c3.real=c1.real+c2.real;
 c3.img=c1.img+c2.img;
 return c3;
}
int complex::i;
main()
{
 complex c1,c2,c3;
 c1.readdata();
 c1.display();
 c2.readdata();
 c2.display();
 c3=(c1+c2);
 c3.display();
}
