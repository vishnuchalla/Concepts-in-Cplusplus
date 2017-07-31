#include<iostream>
using std::cout;
using std::cin;
class area
{
 public:
 int radius,ar;
 void arr(int r)
 {
  cout<<"The area is ";
  ar=r*r;
  cout<<ar<<"\n";
 }
};
main()
{
 area a;
 cout<<"Enter radius\n";
 cin>>a.radius;
 a.arr(a.radius);
}
