#include<iostream>
using namespace std;
bool isTrue=1;
bool isFalse=0;
template<class T>
class queue
{
 T *que;
 int front,rear;
 int size,coun;
 public:
 void insert(T);
 T topele();
 int count();
 queue(int);
 T deletion();
 ~queue();
 bool isempty();
 bool isfull();
 void display();
 void operatorfunction();
};
template<class T>
queue<T>::queue(int x)
{coun=0;
 front=rear=(-1);
 size=x;
 que=new T[size];
}
template<class T>
bool queue<T>::isempty()
{
 if(rear==-1)
 return true;
 else
 return false;
}
template<class T>
bool queue<T>::isfull()
{
 if(rear>=size-1)
 return true;
 else
 return false;
}
template<class T>
int queue<T>::count()
{
 return (rear+1);
}
template<class T>
T queue<T>::topele()
{
 return que[rear];
}
template<class T>
void queue<T>::insert(T x)
{
 if(front==-(1))
{front=rear=front+1;
 que[rear]=x;}
 else
 {rear=rear+1;
 que[rear]=x;}
 coun++;
}
template<class T>
T queue<T>::deletion()
{coun--;
 T x;
 x=que[front];
 front=front+1;
 rear--;
 return x;
}
template<class T>
queue<T>::~queue()
{
 delete que;
}
template<class T>
void queue<T>::display()
{int i;
 if(rear==-1)
 cout<<"Queue is empty\n";
 for(i=0;i<=rear;i++)
 cout<<que[i]<<"\t";
}
template<class T>
void queue<T>::operatorfunction()
{
 int ch;
 T elem;
 do
 {
  cout<<"\nEnter your choice\n";
  cout<<"1.insert 2.delete 3.lastelement 4.count 5.display 6.break\n";
  cin>>ch;
  switch(ch)
  {
   case 1:if(isfull())
          cout<<"Queue is full\n";
          else
          {cin>>elem;
          insert(elem);}
          break;
   case 2:if(isempty())
          cout<<"Queue is empty\n";
          else
          cout<<"Deleted element "<<deletion();
          break;
   case 3:cout<<"lastelement= "<<topele();
          break;
   case 4:cout<<"count= "<<count();
          break;
   case 5:cout<<"Queue: "<<"\n";
          display();
          break;
}}while(ch!=6);
}
main()
{
 int s,n;
 char end;
 do
 {
  cout<<"Enter Queue type and size\n";
  cout<<" 1.Int\n 2.float\n 3.char\n";
  cin>>s;
  cin>>n;
  switch(s)
 {
  case 1:{queue<int>obj1(n);
         obj1.operatorfunction();}
         break;
  case 2:{queue<float>obj2(n);
         obj2.operatorfunction();}
         break;
  case 3:{queue<char>obj3(n);
         obj3.operatorfunction();}
         break;
 }
 cout<<"Do you want to continue(y/n)\n";
 cin>>end;
 }while(end!='n');
}
          

