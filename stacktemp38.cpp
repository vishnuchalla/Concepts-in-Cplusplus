#include<iostream>
#include<stdlib.h>
using namespace std;
bool isTrue=1;
bool isFalse=0;
template<class T>
class stack
{
 T *stk;
 int top;
 int size;
 public:
stack(int x)
{
 top=(-1);
 size=x;
 stk=new T[size];
}
void push(T ele)
{
 stk[++top]=ele;
}
T pop()
{
 T ele;
 ele=stk[top];
 top--;
 return ele;
}
void display()
{
 int i;
 cout<<"Stack: \n";
 for(i=0;i<=top;i++)
 cout<<stk[i]<<"\t";
}
bool isfull()
{
 if(top>=(size-1))
 return true;
 else
 return false;
}
bool isempty()
{
 if(top==(-1))
 return true;
 else
 return false;
}
T topele()
{
 return stk[top];
}
~stack()
{
 delete stk;
}
int count()
{
 return (top+1);
}
void operatorfunction()
{
 int ch;
 T num1,num2;
 do
 {
  cout<<"\nEnter the choice\n";
  cout<<"\n1.push\n2.pop\n3.count\n4.topelement\n5.Display\n6.break\n";
  cin>>ch;
  switch(ch)
  {
   case 1:if(isfull())
          cout<<"Stack is full\n";
          else
          {cout<<"Enter the element to insert\n";
           cin>>num1;
           push(num1);}
          break;
   case 2:if(isempty())
          cout<<"Stack is empty\n";
          else
          {
           num2=pop();
           cout<<"The Element Deleted is "<<num2;
          }
          break;
  case 3:cout<<"Count= "<<count();
         break;
  case 4:if(isempty())
         cout<<"Stack is empty\n";
         else
         cout<<"The topelement of the stack "<<topele();
         break;
  case 5:display();
         break;
 }
 }while(ch!=6);
}};
main()
{
 int ch,n;
 do{
 cout<<"Enter the stack type and size\n";
 cout<<"1.Int\n2.Float\n3.Char\n4.Exit\n";
 cin>>ch>>n;
 switch(ch)
 {
  case 1:{stack<int>obj(n);
         obj.operatorfunction();}
         break;
  case 2:{stack<float>obj(n);
         obj.operatorfunction();}
         break;
  case 3:{stack<char>obj(n);
         obj.operatorfunction();}
         break;
  case 4:exit(0);
         break;
 }}while(ch<=4);
}
  
