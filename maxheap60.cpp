#include<iostream>
using namespace std;
#define max 20
class heap
{
 int hsize,h[max],a[max];
 public:
 heap()
 {
  hsize=0;
 }
 void read()
{
 int i;
 cout<<"Enter the size of the heap\n";
 cin>>hsize;
 cout<<"Enter elements\n";
 for(i=1;i<=hsize;i++)
 {
  cin>>h[i];
 }
}
void heapify()
{  
 int parent,temp,child;
 for(int i=(hsize)/2;i>=1;i--)
 {
  parent=i;
  temp=h[parent];
  child=parent*2;
  while(child<=hsize)
  {
   if(h[child]<h[child+1])
   child++;
   if(h[parent]>h[child])
   break;
   h[parent]=h[child];
   h[child]=temp;
   parent=child;
   child=child*2;
  }
 }
}
void insert()
{
 int curl=(hsize+1);
 int ele;
 cout<<"enter element to insert\n";
 cin>>ele;
 while(curl!=1&&h[curl/2]<ele)
 {
  h[curl]=h[curl/2];
  curl=curl/2;
 }
 h[curl]=ele;
 hsize++;
}
int deletion()
{
 int ele;
 ele=h[1];
 h[1]=h[hsize];
 hsize--;
 heapify();
 return ele;
}
void heapsort()
{ 
 int x,i=1;
 int n=hsize;
 for(int j=1;j<=n;j++)
 {
  x=deletion();
  a[i]=x;
  cout<<a[i]<<"\n";
  i++;
 }
}
void display()
{
 for(int i=1;i<=hsize;i++)
 {
  cout<<h[i]<<"\n";
 }
}
};
 main()
{
 heap ob;
 ob.read();
 int op,x;
 do
 {
  cout<<"Enter the option\n";
  cout<<"1.Heapification\n2.Insertion\n3.Deletion\n4.Sorting\n5.Display\n6.Exit\n";
  cin>>op;
  switch(op)
  {
   case 1:ob.heapify();
          break;
   case 2:ob.insert();
          break;
   case 3:cout<<"Element deleted is \n";
          x=ob.deletion();
          cout<<x<<"\n";
          break;
   case 4:ob.heapsort();
          break;
   case 5:ob.display();
          break;
  }
}while(op!=6);
}
 
