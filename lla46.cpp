#include<iostream>
using namespace std;
template<class T,int msize>
class linearlist
{T a[msize];
 int size;
 public:
 linearlist()
{
 size=0;
}
 void create();
 int count();
 void insert(T,int);
 T deletion(int);
 bool isfull();
 bool isempty();
 T getele(int);
 int getindexof(T);
 int search(T);
 void display();
 void operatorfunction();
};
template<class T,int msize>
void linearlist<T,msize>::create()
{
 int n,i;
 cout<<"Enter the no of elements of the list\n";
 cin>>n;
 for(int i=0;i<n;i++)
 {cin>>a[i];
 size++;}
}
template<class T,int msize>
bool linearlist<T,msize>::isfull()
{
 if(size==msize)
 return true;
 else
 return false;
}
template<class T,int msize>
bool linearlist<T,msize>::isempty()
{
 if(size==0)
 return true;
 else
 return false;
}
template<class T,int msize>
void linearlist<T,msize>::display()
{ 
 cout<<"The elements of the list\n";
 for(int i=0;i<size;i++)
 cout<<a[i]<<"\t";
}
template<class T,int msize>
int linearlist<T,msize>::search(T ele)
{int flag=0,m=0,n=0;
 for(int i=0;i<size;i++)
 {if(ele==a[i])
  {flag++;
  n++;
  cout<<ele<<"is found at the position"<<m+1<<"\n";}
 m++;}
 if(flag==0)
 cout<<"Element is not found\n";
 else
 cout<<"Element is found"<<n<<"times\n";
 }
template<class T,int msize>
void linearlist<T,msize>::insert(T ele,int p)
{if(p>size+1)
 cout<<"position out of bounds\n";
 else
 {for(int i=size;i>=p;i--)
 a[i]=a[i-1];
 a[p-1]=ele;
 size++;}
}
template<class T,int msize>
T linearlist<T,msize>::deletion(int p)
{T x;
 if(p>size||p==0)
 return(0);
 else
 {x=a[p-1];
 for(int i=p;i<size-1;i++)
 a[i-1]=a[i];
 size--;}
 return x;
}
template<class T,int msize>
T linearlist<T,msize>::getele(int n)
{
 if(n>size)
 {
  cout<<"No element found\n";
  return(0);
 }
 else
 return(a[n-1]);
}
template<class T,int msize>
int linearlist<T,msize>::getindexof(T ele)
{int flag=0;
 for(int i=0;i<size;i++)
 {if(ele==a[i])
 {flag++;
 cout<<ele<<"is found at position"<<i+1<<"\n";
 return(i+1);
 }}
 if(flag==0)
 {cout<<"Element not found\n";
 return(0);}
}
template<class T,int msize>
int linearlist<T,msize>::count()
{
 return size;
}
template<class T,int msize>
void linearlist<T,msize>::operatorfunction()
{
 T num1,num2;
 int ch;
 int p;
 do
 {
  cout<<"\nEnter your choice of operation\n";
  cout<<"1.insert\n2.delete\n3.display\n4.getelement\n5.getindex\n6.search\n7.count\n8.exit\n";
  cin>>ch;
  switch(ch)
 {
  case 1:if(isfull())
         cout<<"List is full\n";
         else
         {cout<<"Enter the element and position which you want to insert\n";
         cin>>num1;
         cin>>p;
         insert(num1,p);}
         break;
  case 2:if(isempty())
         cout<<"List is empty\n";
         else
         {cout<<"Enter the position where you want to delete the element\n";
         cin>>p;
         num1=deletion(p);
         if(num1!=0)
         cout<<"The element deleted is"<<num1;
         else
         cout<<"position out of bounds\n";}
         break;
  case 3:display();
         break;
  case 4:cout<<"Enter the index to get an element\n";
         cin>>p;
         num2=getele(p);
         if(num2!=0)
         cout<<"Element at this index is"<<num2<<"\n";
         break;
  case 5:cout<<"Enter the element to get the index\n";
         cin>>num2;
         p=getindexof(num2);
         if(num1!=0)
         cout<<"Index of the element is"<<p<<"\n";
         break;
  case 6:cout<<"Enter the element which you want to search\n";
         cin>>num2;
         search(num2);
         break;
  case 7:ch=count();
         cout<<"No of elements"<<ch<<"\n";
         break;
}
}while(ch!=8);}
main()
{int n;
 char c;
 do
 {
  cout<<"\nEnter the type of list\n";
  cout<<"1.Int\n2.float\n3.char\n";
  cin>>n;
  switch(n)
  {
   case 1:{linearlist<int,10>ob1;
           ob1.create();
          ob1.operatorfunction();}
          break;
   case 2:{linearlist<float,10>ob2;
           ob2.create();
          ob2.operatorfunction();}
          break;
   case 3:{linearlist<char,10>ob3;
           ob3.create();
          ob3.operatorfunction();}
          break;
  }
 cout<<"Do you want to continue(y/n):";
 cin>>c;
 }while(c!='n');
}
  
   
 
 
