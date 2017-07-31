#include<iostream>
using namespace std;
class base
{
 protected:
 int height;
 int width;
 public:
 virtual int getarea()=0;
 void setwidth(int w)
 {
  width=w;
 }
 void setheight(int h)
 {
  height=h;
 }
};
class rectangle:public base
{
 public:
 int getarea()
 {
  return (height*width);
 }
};
class triangle:public base
{
 public:
 int getarea()
 {
 return(height*width)/2;
 }
};
main()
{
 rectangle r;
 triangle t;
 r.setwidth(5);
 r.setheight(10);
 t.setwidth(50);
 t.setheight(5);
 cout<<"Total rectangle area: "<<r.getarea()<<"\n";
 cout<<"Total triangle area: "<<t.getarea()<<"\n";
}
