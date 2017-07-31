#include<iostream>
#include<stdlib.h>
using namespace std;
template<class T>
class queue
{
 int coun;
 public:
 struct node
 {
  T data;
  struct node *link;
 }*first=NULL,*temp=NULL;
 queue()
 {
  coun=0;
 }
 void insert()
 {
  struct node *ptr;
  ptr=(struct node*)malloc(sizeof(struct node));
  cout<<"Enter the data\n";
  cin>>ptr->data;
  ptr->link=NULL;
  if(first==NULL)
  {first=temp=ptr;}
  else
  {
   temp->link=ptr;
   temp=ptr;
  }
  coun++;
}
 T deletion()
 {
  T item;
  if(first==NULL)
  return (-9999);
  else
  {coun--;
   item=first->data;
   first=first->link;
   return item;}
 }
 int display()
 {
  struct node *ptr;
  ptr=(struct node*)malloc(sizeof(struct node));
  if(first==NULL)
  return (-9999);
  else
  {ptr=first;
  while(ptr!=NULL)
 {cout<<ptr->data<<"\t";
  ptr=ptr->link;}}
}
void count()
{
 cout<<"No of nodes: "<<coun;
}
T lastele()
{
 return temp->data;
}
 void operatorfunction()
 {
 int ch;
 do
 {
  cout<<"\nEnter your choice\n";
  cout<<"1.insert 2.Delete 3.lastelement 4.count 5.display 6.break\n";
  cin>>ch;
  switch(ch)
  {
   case 1:insert();
          break;
   case 2:if(deletion()==(-9999))
          cout<<"Queue is empty\n";
          else
          cout<<"Deletion element "<<deletion();
          break;
   case 3:cout<<"Lastelement= "<<lastele();
          break;
   case 4:count();
          break;
   case 5:if(deletion()==(-9999))
          cout<<"Queue is empty\n";
          else
          {cout<<"Queue: "<<"\n";
          display();}
          break;
}}while(ch!=6);
}};
main()
{
 int s,n;
 char end;
 do
 {
  cout<<"Enter Queue type\n";
  cout<<" 1.Int\n 2.float\n 3.char\n";
  cin>>s;
  switch(s)
 {
  case 1:{queue<int>obj1;
         obj1.operatorfunction();}
         break;
  case 2:{queue<float>obj2;
         obj2.operatorfunction();}
         break;
  case 3:{queue<char>obj3;
         obj3.operatorfunction();}
         break;
 }
 cout<<"Do you want to continue(y/n)\n";
 cin>>end;
 }while(end!='n');
}
  
  
  
   
   
   
