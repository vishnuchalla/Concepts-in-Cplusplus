#include<iostream>
using namespace std;
template<class t1,class t2,class t3>
class sum
{
 t1 a;
 t2 b;
 public:
 void set(t1,t2);
 void display();
};
 template<class t1,class t2,class t3>
 void sum<t1,t2,t3>::set(t1 a,t2 b)
{
 this->a=a;
 this->b=b;
}
 template<class t1,class t2,class t3>
 void sum<t1,t2,t3>::display()
{
 cout<<a<<b;
}
main()
{
 sum<int,int,int>ob1;
 sum<float,float,int>ob2;
 ob1.set(10,20);
 ob2.set(10.5,12.55);
 ob1.display();
 ob2.display();
}
