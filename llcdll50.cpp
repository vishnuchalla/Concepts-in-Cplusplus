#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
 int data;
 struct node *next,*prev;
}*first=NULL,*temp=NULL,*last=NULL,*newnode;
int coun=0;
void display()
{
 temp=first;
 while(temp->next!=first)
{cout<<"<-"<<temp->data<<"->";
 temp=temp->next;}
 cout<<"<-"<<temp->data<<"->";
}
void displayr()
{
 temp=first;
 while(temp->next!=first)
 temp=temp->next;
 last=temp;
 temp=last;
 if(first->prev==NULL)
 {while(temp->prev!=NULL)
 {cout<<"<-"<<temp->data<<"->";
 temp=temp->prev;}
 cout<<"<-"<<temp->data<<"->";}
 else
 {while(temp->prev!=last)
 {cout<<"<-"<<temp->data<<"->";
 temp=temp->prev;}
 cout<<"<-"<<temp->data<<"->";
}}
void create()
{
 newnode=(struct node*)malloc(sizeof(struct node));
 coun++;
 cout<<"Enter the data\n";
 cin>>newnode->data;
 newnode->next=first;
 newnode->prev=NULL;
 if(first!=NULL)
 {
  temp->next=newnode;
  newnode->prev=temp;
  temp=newnode;
 }
 else
 first=temp=newnode;
}
void insert()
{
 newnode=(struct node*)malloc(sizeof(struct node));
 coun++;
 cout<<"Enter the data\n";
 cin>>newnode->data;
 temp=first;
 while(temp->next!=first)
 temp=temp->next;
 last=temp;
 newnode->prev=last;
 newnode->next=first;
 first->prev=newnode;
 first=newnode;
 last->next=first;
}
void insert1()
{int n=1,pos;
 newnode=(struct node*)malloc(sizeof(struct node));
 coun++;
 cout<<"Enter the data and its position\n";
 cin>>newnode->data>>pos;
 if(pos>coun)
 cout<<"Insertion not possible\n";
 else
{ temp=first;
 while(n<pos-1)
 {temp=temp->next;
 n++;}
 newnode->next=temp->next;
 temp->next->prev=newnode;
 temp->next=newnode;
 newnode->prev=temp;
}}
void insert2()
{ 
 newnode=(struct node*)malloc(sizeof(struct node));
 coun++;
 cout<<"Enter the data\n";
 cin>>newnode->data;
 temp=first;
 while(temp->next!=first)
 temp=temp->next;
 last=temp;
 temp=first;
 while(temp->next!=first) 
 temp=temp->next;
 temp->next=newnode;
 newnode->prev=temp;
 newnode->next=first;
 first->prev=last;
}
void deletion()
{
 temp=first;
 while(temp->next!=first)
 temp=temp->next;
 last=temp;
 first=first->next;
 temp->next=first;
 first->prev=last;
 coun--;
}
void deletion1()
{
 int n=1,pos;
 cout<<"Enter the position to delete\n";
 cin>>pos;
 if(pos>coun)
 cout<<"Position out of bounds\n";
 else
 {temp=first;
 while(n<pos-1)
 {temp=temp->next;
  n++;}
 temp->next=temp->next->next;
 temp->next->prev=temp;}
 coun--;
}
void deletion2()
{
 temp=first;
 while(temp->next->next!=first)
 temp=temp->next;
 temp->next=first;
 temp=first;
 while(temp->next!=first)
 temp=temp->next;
 last=temp;
 first->prev=last;
 coun--;
}
void search()
{
 int n,flag=0,count=0,m=0;
 cout<<"Enter the element which you want to search\n";
 cin>>n;
 temp=first;
do
 {m++;
  if(n==temp->data)
  {flag=1;
   count++;
   cout<<"Element is found at"<<m<<"position\n";}
   temp=temp->next;} while(temp!=first);
  if(flag==0)
  cout<<"Element is not found\n";
  cout<<"Element is found"<<count<<"times\n";
} 
void count()
{
 cout<<"No of nodes= "<<coun;
}
main()
{
 int choice;
 char c;
 do
 {
  create();
  cout<<"Do you want to continue(y/n)\n";
  cin>>c;
 }while(c!='n');
 do
 {
  cout<<"\nEnter the choice\n";
  cout<<"1.Insert at the beginning\n2.Insert at the middle\n3.Insert at the End\n41.Display\n42.displayreverse\n5.Delete at the beginning\n6.Delete in the middle\n7.Delete at the end\n8.Search\n9.Count\n10.Exit\n";
  cin>>choice;
  switch(choice)
  {
   case 1:insert();
          break;
   case 2:insert1();
          break;
   case 3:insert2();
          break;
   case 41:display();
          break;
   case 42:displayr();
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
}

 
 

 
