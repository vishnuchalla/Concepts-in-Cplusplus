#include<iostream>
#include<stdlib.h>
using namespace std;
template<class T>
class ll
{
int coun;
public:
struct node 
{
 T data;
 struct node *link;
}*first=NULL,*temp=NULL,*newnode;
ll()
{
coun=0;
}
void display()
{
 temp=first;
 while(temp!=NULL)
 {
  cout<<temp->data<<"->";
  temp=temp->link;
 }
 cout<<"NULL";
}
void create()
{
 newnode=(struct node*)malloc(sizeof(struct node));
 coun++;
 cout<<"Enter the data\n";
 cin>>newnode->data;
 newnode->link=NULL;
 if(first!=NULL)
 {
  temp->link=newnode;
  temp=newnode;
 }
 else
 temp=first=newnode;
}
void insert()
{
 newnode=(struct node*)malloc(sizeof(struct node));
 coun++;
 cout<<"Enter the data\n";
 cin>>newnode->data;
 newnode->link=first;
 first=newnode;
}
void insert1()
{
 int n=1,pos;
 newnode=(struct node*)malloc(sizeof(struct node));
 coun++;
 cout<<"Enter the data and the position\n";
 cin>>newnode->data>>pos;
 temp=first;
 while(n<pos-1)
 {
  temp=temp->link;
  n++;
 }
 newnode->link=temp->link;
 temp->link=newnode;
}
void insert2()
{
 newnode=(struct node*)malloc(sizeof(struct node));
 coun++;
 cout<<"Enter the data\n";
 cin>>newnode->data;
 temp=first;
 while(temp->link!=NULL)
 temp=temp->link;
 temp->link=newnode;
 newnode->link=NULL;
} 
void deletion()
{
 first=first->link;
 coun--;
}
void deletion1()
{
 int n=1,pos;
 cout<<"Enter the position\n";
 cin>>pos;
 temp=first;
 while(n<pos-1)
 {
  temp=temp->link;
  n++;
 }
 temp->link=temp->link->link;
 coun--;
}
void deletion2()
{
 temp=first;
 while(temp->link->link!=NULL)
 {
  temp=temp->link;
 }
 temp->link=NULL;
 coun--;
}
void search()
{
 int n,m=0,flag=0,count=0;
 cout<<"Enter the element which you want to search\n";
 cin>>n;
 temp=first;
 while(temp!=NULL)
{m++;
 if(n==temp->data)
 {flag=1;
  count++;
  cout<<"Element is present at "<<m<<"\n";
 }
 temp=temp->link;
}
 if(flag==0)
 {cout<<"Element not found\n";}
 cout<<"\nElement is found"<<count<<"times";
} 
void count()
{
 cout<<"Number of nodes="<<coun;
}
void operatorfunction()
{ 
 int choice;
 char c;
 do
{
 create(); 
 cout<<"Continue?(y/n)\n";
 cin>>c;
}while(c!='n');
 do
 {
  cout<<"\n1.insert at beginning\n2.Insert at middle\n3.Insert at end\n4.Display\n5.Delete at beginning\n6.Delete at middle\n7.Delete at the end\n8.Search\n9.No of elements\n10.exit\n";
  cin>>choice;
  switch(choice)
  {
   case 1:insert();
          break;
   case 2:insert1();
          break;
   case 3:insert2();
          break;
   case 4:display();
          break;
   case 5:deletion();
          break;
   case 6:deletion1();
          break;
   case 7:deletion2();
          break;
   case 8:search();
          break;
   case 9:count();
          break;
  }}while(choice!=10);
}};
main()
{
 int s,n;
 char end;
 do
 {
  cout<<"Enter list type from the following\n";
  cout<<" 1.Int\n 2.float\n 3.char\n";
  cin>>s;
  switch(s)
 {
  case 1:{ll<int>obj1;
         obj1.operatorfunction();}
         break;
  case 2:{ll<float>obj2;
         obj2.operatorfunction();}
         break;
  case 3:{ll<char>obj3;
         obj3.operatorfunction();}
         break;
 }
 cout<<"Do you want to continue(y/n)\n";
 cin>>end;
 }while(end!='n');
}
          
