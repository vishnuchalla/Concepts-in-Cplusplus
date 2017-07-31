#include<iostream>
#define max 11
#define max1 7
using namespace std;
class lprobe
{
 int htable[max];
 int key,value,size;
 public:
 lprobe();
 void insert();
 int search(int);
 void display();
 int count();
};
lprobe::lprobe()
{
 size=0;
 for(int i=0;i<max;i++)
 htable[i]=(-1);
}
void lprobe::insert()
{
 int h;
 if(size==max)
 cout<<"Htable overflow\n";
 else
 {
  cout<<"Enter value\n";
  cin>>value;
  key=value%max;
  int h2=max1-(value%max1);
  if(htable[key]==(-1))
  htable[key]=value;
  else
  {
   for(int i=1;i<max;i++)
   { 
    h=(key+h2)%max;
    if(htable[h]==(-1))
    {
     htable[h]=value;
     break;
    }}}}size++;
 }
int lprobe::search(int value)
{
 int h,i=1,flag=(-1);
 key=value%max;
 int h2=max1-(value%max1);
 h=key;
 if(htable[key]==(-1))
 {
  cout<<"Elements not found\n";
  return flag;
 }
 else
 {do
  {if(htable[h]==value)
   {flag=h;
    break;}
  else if(htable[h]==(-1))
  break;
  h=(key+h2)%max;
  }while(h!=key);
 return flag;
}}
void lprobe::display()
{
 cout<<"Array: \n";
 for(int i=0;i<max;i++)
 cout<<htable[i]<<" ";
 cout<<"\n";
}
int lprobe::count()
{
 return size;
}
main()
{
 lprobe obj;
 char c;
 do
 {
  int s;
  cout<<"Enter your choice\n";
  cout<<"1.insert\n2.search\n3.count\n4.Display\n5.Exit\n";
  cin>>s;
  switch(s)
  {  
   case 1:obj.insert();
          break;
   case 2:int x,value;
          cout<<"Enter value to be searched\n";
          cin>>value;
          x=obj.search(value);
          if(x!=(-1))
          cout<<"Element found\n";
          break;
   case 3:cout<<"No of elements: "<<obj.count();
          break;
   case 4:obj.display();
          break;
   }
  cout<<"Do you want to continue(y/n)\n";
  cin>>c;
  }while(c!='n');
 }

