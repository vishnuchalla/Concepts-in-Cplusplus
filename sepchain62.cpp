#include<iostream>
#include<stdlib.h>
using namespace std;
#define msize 11
class sepchaining
{
 public:
 struct node
 {
  int data;
  struct node *link;
 }*htable[msize];
 int dsize;
 sepchaining()
 {
  dsize=0;
  for(int i=0;i<msize;i++)
  htable[i]=NULL;
 }
 void insert(int d)
 {
  int k=d%msize;
  struct node *nn;
  nn=new node;
  nn->data=d;
  nn->link=NULL;
  if(htable[k]==NULL)
  htable[k]=nn;
  else
  {
   struct node *temp;
   temp=new node;
   temp=htable[k];
   while(temp->link!=NULL)
   temp=temp->link;
   temp->link=nn;
  }
  dsize++;
}
 int search(int d)
 {
  int flag=0;
  int k=d%msize;
  if(htable[k]==NULL)
  {
   cout<<"Element not found\n";
   return (-1);
  }
  else
  {
   struct node *temp;
   temp=new node;
   temp=htable[k];
   while(temp!=NULL)
   if(temp->data==d)
   {
    flag=1;
    return(htable[k]->data);
   }
   temp=temp->link;
 }
 if(flag==0)
 {
  return (-1);
}
}
 int deletion(int key)
 {
  int k=search(key),samp;
  if(k!=(-1))
  {
   struct node *temp,*t;
   temp=new node;
   t=new node;
   temp=htable[k];
   if(temp->data==key)
   {
    samp=temp->data;
    t=temp;
    htable[k]=t->link;
   }
   else
  {
   while(temp->link->link!=NULL)
  {if(temp->link->data==key)
   break;
   else
   temp=temp->link;
  }
  t=temp;
  t->link=t->link->link;
  samp=t->link->data;
  t=t->link;
 }
 delete(t);
 return samp;
}}
void display()
{
 struct node *temp;
 temp=new node;
 for(int i=0;i<msize;i++)
 {
  cout<<"h["<<i<<"]";
  temp=htable[i];
  while(temp!=NULL)
  {
   cout<<"->"<<temp->data;
   temp=temp->link;
   cout<<"\n";
  }
}}};
main()
{
 sepchaining obj;
 int s,n,x;
 char ch;
 do
 {
  cout<<"Enter your choice\n";
  cout<<"1.Insert\n2.Delete\n3.Search\n4.Display\n5.Exit\n";
  cin>>s;
  switch(s)
  {
   case 1:cout<<"Enter number of elements you want to insert\n";
          cin>>n;
          for(int i=0;i<n;i++)
          {
           cout<<"Enter element\n";
           cin>>x;
           obj.insert(x);}
           break;
   case 2:int y,z;
          cout<<"Enter element you want to delete\n";
          cin>>y;
          z=obj.deletion(y);
          break;
   case 3:int m,n;
          cout<<"Enter element you want to search\n";
          cin>>m;
          n=obj.search(m);
          if(n==(-1))
          cout<<"Element not found\n";
          else
          cout<<"Element is at"<<n<<"\n";
          break;
   case 4:cout<<"Hash table\n";
          obj.display();
          break;
   case 5:exit(0);
          break;
}
 cout<<"Do you want to continue(y/n)\n";
 cin>>ch;
 }while(ch!='n');
}

