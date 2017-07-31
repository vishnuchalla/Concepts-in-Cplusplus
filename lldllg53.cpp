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
 struct node *next,*prev;
}*first=NULL,*temp=NULL,*last=NULL,*newnode;
ll()
{
coun=0;
}
void display()
{
 temp=first;
 while(temp!=NULL)
{cout<<"<-"<<temp->data<<"->";
 temp=temp->next;}
 cout<<"NULL";
}
void displayr()
{
 temp=first;
 while(temp->next!=NULL)
 temp=temp->next;
 last=temp;
 temp=last;
 while(temp!=NULL)
 {cout<<"<-"<<temp->data<<"->";
 temp=temp->prev;}
 cout<<"NULL";
}
void create()
{
 newnode=(struct node*)malloc(sizeof(struct node));
 coun++;
 cout<<"Enter the data\n";
 cin>>newnode->data;
 newnode->next=NULL;
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
 newnode->next=first;
 first->prev=newnode;
 newnode->prev=NULL;
 first=newnode;
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
 while(temp->next!=NULL) 
 temp=temp->next;
 temp->next=newnode;
 newnode->prev=temp;
 newnode->next=NULL;
}
void deletion()
{
 first=first->next;
 first->prev=NULL;
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
 while(temp->next->next!=NULL)
 temp=temp->next;
 temp->next=NULL;
 coun--;
}
void search()
{
 int flag=0,count=0,m=0;
 T n;
 cout<<"Enter the element which you want to search\n";
 cin>>n;
 temp=first;
 while(temp!=NULL)
 {m++;
  if(n==temp->data)
  {flag=1;
   count++;
   cout<<"Element is found at"<<m<<"position\n";}
   temp=temp->next;}
  if(flag==0)
  cout<<"Element is not found\n";
  cout<<"Element is found"<<count<<"times\n";
} 
void count()
{
 cout<<"No of nodes= "<<coun;
}
void operatorfunction()
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



 
 

 
