#include<iostream>
using namespace std;
class student
{
 char name[50];
 int rollno;
 int marks[6];
 float sum,percent;
 public:
 student();
 void display();
 void calsum();
};
student::student()
{int j;
 cout<<"Enter name and rollno\n";
 cin>>name>>rollno;
 cout<<"Enter marks of 6 subjects\n";
 for(int j=0;j<=5;j++)
 {
  cin>>marks[j];
}
 }
void student::calsum()
{int j;
 for(j=0;j<=5;j++)
 { sum=sum+marks[j];}
   percent=sum/6;}
void student::display()
{int j;
 cout<<"Name of student is "<<name;
 cout<<"Roll no is "<<rollno;
 cout<<"Marks entered are"<<"\n";
 for(j=0;j<=5;j++)
 {
  cout<<marks[j]<<"\n";
 }
cout<<"Total marks are "<<sum;
cout<<"Percentage is"<<percent;
}
main()
{
 int no,i;
 cout<<"Enter no of students\n"<<"\n";
 cin>>no;
 student *s[no];
 for(int i=0;i<no;i++)
 {s[i]=new student;
  s[i]->calsum();
  s[i]->display();
 }
}

 
 
