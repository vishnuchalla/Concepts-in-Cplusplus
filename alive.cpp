#include<iostream>
using std::cout;
using std::cin;
int nobjects=0,nobjalive=0;
class Myclass
{
 public:Myclass()
        {
         ++nobjects;
         ++nobjalive;
        }
~Myclass()
{
 --nobjalive;}
void show()
{
 cout<<"\nTotal no.of objects created:\n"<<nobjects;
 cout<<"\nNo of objects currently alive:\n"<<nobjalive;
}};
main()
{
 Myclass obj1;
 obj1.show();
 {
  Myclass obj1,obj2;
  obj2.show();
 }
 obj1.show();
 Myclass obj2,obj3;
 obj2.show();
}


