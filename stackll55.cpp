#include<iostream>
#include<stdlib.h>
using namespace std;
template<class T>
class stack
{int coun;
 public:
 struct node
 {
  T data;
  struct node *link;
 }*top=NULL;
 stack()
 {
  coun=0;
 }
 void push()
 {
  struct node *ptr;
  ptr=(struct node*)malloc(sizeof(struct node));
  cout<<"Enter the element to insert\n";
  cin>>ptr->data;
  ptr->link=top;
  top=ptr;
  coun++;
  }
  T pop()
 {
  T ptr;
  if(top==NULL)
  {cout<<"Stack is empty\n";}
  else
  {
   coun--;
   ptr=top->data;
   top=top->link;
   return ptr;
  }
  }
 void display()
 {
  struct node *ptr;
  if(top==NULL)
 { cout<<"stack is empty\n";}
  else
  {ptr=top;
  while(ptr!=NULL)
 {cout<<ptr->data<<"\t";
  ptr=ptr->link;}}
 }
 T topele()
 {
  return (top->data);
 }
 void count()
 {
  cout<<"No of nodes: "<<coun;
 }
 void operatorfunction()
 {
 int ch;
 T elem;
 do
 {
  cout<<"\nEnter your choice\n";
  cout<<"1.push 2.pop 3.top 4.count 5.display 6.break\n";
  cin>>ch;
  switch(ch)
  {
   case 1:push();
          break;
   case 2:cout<<"Popped out "<<pop();
          break;
   case 3:cout<<"Top= "<<topele();
          break;
   case 4:count();
          break;
   case 5:cout<<"stack: "<<"\n";
          display();
          break;
}}while(ch!=6);
}};
main()
{
 int s,n;
 char end;
 do
 {
  cout<<"Enter stack type\n";
  cout<<" 1.Int\n 2.float\n 3.char\n";
  cin>>s;
  switch(s)
 {
  case 1:{stack<int>obj1;
         obj1.operatorfunction();}
         break;
  case 2:{stack<float>obj2;
         obj2.operatorfunction();}
         break;
  case 3:{stack<char>obj3;
         obj3.operatorfunction();}
         break;
 }
 cout<<"Do you want to continue(y/n)\n";
 cin>>end;
 }while(end!='n');
}
          
