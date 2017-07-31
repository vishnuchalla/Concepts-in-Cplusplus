#include<iostream>
using std::cout;
using std::cin;
class area
{
 public:
 int side,ar,length,breadth;
 void ar1(int s)
 {
  cout<<"The area= ";
  ar=s*s;
  cout<<ar<<"\n";
 }
 void ar2(int l,int b)
{
 cout<<"Area of rectangle= ";
 ar=l*b;
 cout<<ar<<"\n";
}
};
main()
{int c;
 area a;
 cout<<"Enter your choice\n";
 cout<<"1.area of square\n";
 cout<<"2.area of rectangle\n";
 cin>>c;
 switch(c)
 {
  case 1:cout<<"Enter the side\n";
         cin>>a.side;
         a.ar1(a.side);
         break;
  case 2:cout<<"Enter the length and breadth\n";
         cin>>a.length>>a.breadth;
         a.ar2(a.length,a.breadth);
         break;
 }
}
 
