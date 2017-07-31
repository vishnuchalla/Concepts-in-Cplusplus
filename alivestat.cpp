#include<iostream>
using std::cout;
using std::cin;
class Myclass
{
 static int nobjects,nobjalive;
 public:Myclass()
        {
         ++nobjects;
         ++nobjalive;
        }
~Myclass()
{
 --nobjalive;}
static void show()
{
 cout<<"\nTotal no.of objects created:\n"<<nobjects;
 cout<<"\nNo of objects currently alive:\n"<<nobjalive;
}};
int Myclass::nobjects=0;
int Myclass::nobjalive=0;
main()
{
 Myclass obj1;
 obj1.show();
 {
  Myclass obj1,obj2;
  obj1.show();
 }
 obj1.show();
 Myclass obj2,obj3;
 obj2.show();
}


