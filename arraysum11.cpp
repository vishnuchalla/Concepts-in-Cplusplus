#include<iostream>
using namespace std;
class array
{
 int size,i;
 int *a;
 public:
 array(int);
 void sum();
 void read();
 ~array();
};
array::array(int size1)
{
 size=size1;
 a=new int[size];
 cout<<"Memory is allocated with size\n"<<size;
}
array::~array()
{
 cout<<"Memory deallocated\n";
 delete a;
}
void array::sum()
{
 int sum=0;
 cout<<"The sum of given elements\n";
 for(i=0;i<size;i++)
 sum=sum+a[i];
 cout<<sum;
}
void array::read()
{
 cout<<"Enter the elements\n";
 for(i=0;i<size;i++)
 cin>>a[i];
}
main()
{
 array s(5);
 s.read();
 s.sum();
}
 
