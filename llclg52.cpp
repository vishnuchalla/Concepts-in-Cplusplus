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
 while(temp->link!=first)
{cout<<temp->data<<"->";
 temp=temp->link;}
 cout<<temp->data;
}
void create()
{
 newnode=(struct node*)malloc(sizeof(struct node));
 coun++;
 cout<<"Enter the data\n";
 cin>>newnode->data;
 newnode->link=first;
 if(first!=NULL)
 {temp->link=newnode;
 temp=newnode;}
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
 while(temp->link!=first)
 temp=temp->link;
 newnode->link=first;
 first=newnode;
 temp->link=first;
}
void insert1()
{
 int n=1,pos;
 newnode=(struct node*)malloc(sizeof(struct node));
 coun++;
 cout<<"Enter the data and position\n";
 cin>>newnode->data>>pos;
 temp=first;
 while(n<pos-1)
{temp=temp->link;
 n++;}
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
 while(temp->link!=first)
 temp=temp->link;
 temp->link=newnode;
 newnode->link=first;
}
void deletion()
{
 temp=first;
 while(temp->link!=first)
 temp=temp->link;
 first=first->link;
 temp->link=first;
 coun--;
}
void deletion1()
{
 int n=1,pos;
 cout<<"Enter the position\n";
 cin>>pos;
 temp=first;
 while(n<pos-1)
{temp=temp->link;
 n++;}
 temp->link=temp->link->link;
 coun--;
}
void deletion2()
{
 temp=first;
 while(temp->link->link!=first)
 temp=temp->link;
 temp->link=first;
 coun--;
}
void search()
{int count=0,flag=0,m=0;
 T n;
 cout<<"Enter the element which you want to search\n";
 cin>>n;
 temp=first;
 do
{
 m++;
 if(n==temp->data)
 {flag=1;
 count++;
 cout<<"Element is found at"<<m<<"position\n";}
 temp=temp->link;
}while(temp!=first);
if(flag==0)
cout<<"Element not found\n";
cout<<"Element is found"<<count<<"times\n";
}
void count()
{
 cout<<"No of nodes= "<<coun<<"\n";
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
  cout<<"1.Insert at the beginning\n2.Insert at the middle\n3.Insert at the End\n4.Display\n5.Delete at the beginning\n6.Delete in the middle\n7.Delete at the end\n8.Search\n9.Count\n10.Exit\n";
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



 
