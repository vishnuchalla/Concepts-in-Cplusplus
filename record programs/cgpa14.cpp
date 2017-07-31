#include<iostream>
using namespace std;
class student
{
 int i,c,s,sum,marks[8],k,rno,grade[8],g[8];
 float cgpa;
 char st[20],result[8],gr[8];
 public:
 student()
 {
  s=0;
  sum=0;
 }
 void getdata()
{
 cout<<"Enter the name of the student\n";
 cin>>st;
 cout<<"Enter the rollno of the student\n";
 cin>>rno;
 grade[0]=2;
 grade[1]=3;
 grade[2]=3;
 grade[3]=4;
 grade[4]=3;
 grade[5]=4;
 grade[6]=2;
 grade[7]=4;
 cout<<"Enter the marks of the student\n";
 k=0; 
 while(k<8)
  {cin>>marks[k];
   k++;}
}
void cal()
{
 k=0;
 while(k<8)
  {c=marks[k];
  if(90<=c&&c<=100)
  g[k]=10;
  else if(80<=c&&c<90)
  g[k]=9;
  else if(70<=c&&c<80)
  g[k]=8;
  else if(60<=c&&c<70)
  g[k]=7;
  else if(50<=c&&c<60)
  g[k]=6;
  else if(40<=c&&c<50)
  g[k]=5;
  else
  g[k]=0;
  k++;}
}
void alpha()
{
 k=0;
 while(k<8)
 {if(g[k]==10)
  {gr[k]='O';
  result[k]='P';}
  else if(g[k]==9)
  {gr[k]='S';
   result[k]='P';}
  else if(g[k]==8)
  {gr[k]='A';
  result[k]='P';}
  else if(g[k]==7)
  {gr[k]='B';
   result[k]='P';}
  else if(g[k]==6)
  {gr[k]='C';
  result[k]='P';}
  else if(g[k]==5)
  {gr[k]='D';
  result[k]='P';}
  else
  {gr[k]='F';
  result[k]='F';}
k++;}}
 void caldata()
 {
  for(i=0;i<8;i++)
  sum=sum+(grade[i]*g[i]);
  for(i=0;i<8;i++)
  s=s+grade[i];
  cgpa=float(sum)/s;
}
void display()
{
 cout<<"Vnr vignana jyothi institute of engineering and technology\n";
 cout<<"Name of the student\n";
 cout<<st<<"\n";
 cout<<"Roll number of the student\n";
 cout<<rno<<"\n";
 cout<<"Degree:Bachelor of Technology\n";
 cout<<"Branch:Computer Science and Engineering\n";
 cout<<"Semester:I year II sem\n";
 cout<<"EVEN 2015-2016\n";
 cout<<"Subjectcode:\t"<<"Course Name:\t"<<"Credits:\t"<<"Gradepoints:\t"<<"Grade:\t"<<"Result"<<"\n";
 cout<<"5BS02\t"<<"English Laboratory and Communication Skills\t"<<grade[0]<<"\t"<<g[0]<<"\t"<<gr[0]<<"\t"<<result[0]<<"\n";
 cout<<"5BS12\t"<<"Ordinary differential Equation and laplace transforms\t"<<grade[1]<<"\t"<<g[1]<<"\t"<<gr[1]<<"\t"<<result[1]<<"\n";
 cout<<"5BS13\t"<<"Computational methods\t"<<grade[2]<<"\t"<<g[2]<<"\t"<<gr[2]<<"\t"<<result[2]<<"\n";
 cout<<"5BS24\t"<<"Applied Physics\t"<<grade[3]<<"\t"<<g[3]<<"\t"<<gr[3]<<"\t"<<result[3]<<"\n";
 cout<<"5CS11\t"<<"Code of Ethics\t"<<grade[4]<<"\t"<<g[4]<<"\t"<<gr[4]<<"\t"<<result[4]<<"\n";
 cout<<"5IT02\t"<<"Data Structures\t"<<grade[5]<<"\t"<<g[5]<<"\t"<<gr[5]<<"\t"<<result[5]<<"\n";
 cout<<"5IT52\t"<<"Data Structures laboratory\t"<<grade[6]<<"\t"<<g[6]<<"\t"<<gr[6]<<"\t"<<result[6]<<"\n";
 cout<<"5ME19\t"<<"Engineering Drawing\t"<<grade[7]<<"\t"<<g[7]<<"\t"<<gr[7]<<"\n"<<result[7]<<"\n";
 cout<<"SGPA:"<<cgpa<<"\n";
}};
main()
{
 student *ss[60];
 int n,i;
 cout<<"Enter the no of students\n";
 cin>>n;
 for(i=0;i<n;i++)
 {
  ss[i]->getdata();
  ss[i]->cal();
  ss[i]->alpha();
  ss[i]->caldata();
}
 for(i=0;i<n;i++)
 {
  ss[i]->display();
 }
}

 
