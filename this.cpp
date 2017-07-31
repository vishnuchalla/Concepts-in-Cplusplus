#include<iostream>
using std::cout;
using std::cin;
class box
{
 public:
 box(double l,double b,double h)
 {
  cout<<"\nconstructor called\n";
  length=l;
  breadth=b;
  height=h;
 }
double volume()
{
 return length*breadth*height;
}
int compare(box box)
{
 return this->volume()>box.volume();
}
private:
double length;
double breadth,height;
};
main()
{
 box box1(3.3,12,1.5);
 box box2(8.5,6.6,2.0);
 if(box1.compare(box2))
 {
  cout<<"\nbox2 is smaller than box1\n";
 }
 else
 {
  cout<<"\nbox2 is larger than box1\n";
 }
}
