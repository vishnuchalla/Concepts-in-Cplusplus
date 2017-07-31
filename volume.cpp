#include<iostream>
using std::cout;
using std::cin;
class box
{
 public:
 double length,breadth,height;
 void setheight(double height);
 void setlength(double length);
 void setbreadth(double breadth);
 double getvolume(void);
};
double box::getvolume(void)
{
 return (length*breadth*height);
}
void box::setlength(double len)
{
 length=len;
}
void box::setbreadth(double bre)
{
 breadth=bre;
}
void box::setheight(double hei)
{
 height=hei;
}
main()
{
 box box1,box2;
 double volume;
 box1.setlength(6);
 box1.setheight(5);
 box1.setbreadth(7);
 box2.setlength(12);
 box2.setheight(10);
 box2.setbreadth(13);
 volume=box1.getvolume();
 cout<<"volume of box1\n"<<volume;
 volume=box2.getvolume();
 cout<<"\nvolume of box2\n"<<volume;
}
