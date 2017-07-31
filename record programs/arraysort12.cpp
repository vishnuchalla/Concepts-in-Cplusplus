#include<iostream>
using namespace std;
class array
{
 int size,i,j;
 int *a;
 public:
 array(int);
 void sort();
 void read();
 void display();
 ~array();
};
array::array(int size1)
{
 size=size1;
 a=new int[size];
 cout<<"Memory is allocated with size\n"<<size<<"\n";
}
array::~array()
{
 cout<<"Memory deallocated\n";
 delete a;
}
void array::sort()
{int c;
for(i=0;i<(size/2)-1;i++)
{for(j=i+1;j<size/2;j++)
 if(a[i]>a[j])
 {c=a[i];
 a[i]=a[j];
 a[j]=c;}}
for(i=size/2;i<size-1;i++)
{for(j=i+1;j<size;j++)
 if(a[i]<a[j])
 {c=a[i];
  a[i]=a[j];
  a[j]=c;}}
}
void array::display()
{
 cout<<"The sorted elements are:\n";
 for(i=0;i<size;i++)
 cout<<a[i]<<"\t";
}
void array::read()
{
 cout<<"Enter the elements\n";
 for(i=0;i<size;i++)
 cin>>*(a+i);
}
main()
{
 array s(10);
 s.read();
 s.sort();
 s.display();
}
 
