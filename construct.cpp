#include<iostream>
using std::cout;
using std::cin;
class count
{
 int value;
 public:
 count()
 {
  value=0;
 }
 count(int val)
 {
  value=val;
 }
~count()
{
 cout<<"\n objected destroyed\n";
}
int getcount()
{
 return value;
}
void up()
{
 value=value+1;
}
};
main()
{
 count count1;
 count count2(1);
 cout<<"count1="<<count1.getcount();
 cout<<"count2="<<count2.getcount();
 count1.up();
 count2.up();
 cout<<"count1= "<<count1.getcount();
 cout<<"count2= "<<count2.getcount();
}

