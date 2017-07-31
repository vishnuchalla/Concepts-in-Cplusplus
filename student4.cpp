#include<iostream>
using namespace std;
class student
{
 char name[20],dept[20];
 int rno,marks[6],i,tot;
 float per;
 public:
 void getinput()
{
 cout<<"enter the name\n";
 cin>>name;
 cout<<"enter the dept\n";
 cin>>dept;
 cout<<"enter the rollno\n";
 cin>>rno;
 cout<<"enter the marks\n";
 for(i=0;i<6;i++)
 cin>>marks[i];
}
void cal()
{
 tot=0;
 for(i=0;i<6;i++)
 tot=tot+marks[i];
 per=float(tot*100)/600;
}
void output()
{
 cout<<"name="<<name<<"\n";
 cout<<"dept="<<dept<<"\n";
 cout<<"rollno="<<rno<<"\n";
 cout<<"marks\n";
 for(i=0;i<6;i++)
 cout<<"subject"<<(i+1)<<"="<<marks[i]<<"\n";
 cout<<"Total="<<tot<<"\n";
 cout<<"Percentage="<<per;
}
};
main()
{
 student s;
 s.getinput();
 s.cal();
 s.output();
}
