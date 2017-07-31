#include<iostream>
using std::cout;
using std::cin;
class c;
class b;
class a
{
 int data;
 public:
 a()
 {
  data=1; 
 }
 friend int display(a,b,c);
};
class b
{
 int data;
 public:
 b()
 {
  data=1;
 }
 friend int display(a,b,c);
};
class c
{
 int data;
 public:
 c()
 {
  data=1;
 }
 friend int display(a,b,c);
};
int display(a A,b B,c C)
{
 return(A.data+B.data+C.data);
}
main()
{
 a A;
 b B;
 c C;
 cout<<"sum="<<display(A,B,C);
}
