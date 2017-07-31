#include<iostream>
#include<stdlib.h>
using namespace std;
struct node 
{
 int data;
 struct node *link;
}*first=NULL,*temp=NULL,*newnode;
int coun=0;
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
main()
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
   case 10:exit(0);
          break;
   default:cout<<"Invalid choice\n";
           cout<<"Please Try Again\n";
           break;
  }}while(choice!=10);
}
