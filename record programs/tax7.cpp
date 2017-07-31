#include<iostream>
using namespace std;
class employee;
class taxcalculator
{
 public:void taxdetails();
 void caltax(employee);
};
class employee
{
 float tax;
 int eno;
 char ename[30];
 float netsal,grosssal,pf,pt,basic,hra,da,totaldeductions;
 public:
 void read();
 void calgrosssal();
 void calnetsal();
 friend void taxcalculator::caltax(employee);
};
void employee::read()
{
 cout<<"Enter emp name and rollno\n";
 cin>>ename>>eno;
 cout<<"\nenter basic pay,hra and da\n";
 cin>>basic>>hra>>da;
 pf=float(8/100)*basic;
 pt=float(5/100)*basic;
}
void employee::calgrosssal()
{
 grosssal=basic+hra+da;
 cout<<"gross sal is"<<grosssal;
}
void employee::calnetsal()
{
 totaldeductions=pf+pt;
 netsal=grosssal-totaldeductions;
 cout<<"\n"<<"netsalary is"<<netsal;
}
void taxcalculator::taxdetails()
{
 cout<<"\n"<<"if sal>=10k tax is 0.2%";
 cout<<"\n"<<"if sal>10k and <=25k tax is 0.5%";
 cout<<"\n"<<"if sal>25k and <=50k tax is 1%";
 cout<<"\n"<<"if sal>50k and <=1lakh tax is 2%";
 cout<<"\n"<<"if sal>1lakh tax is 5%";
}
void taxcalculator::caltax(employee ob)
{
 float tax=ob.tax;
 float grosssal=ob.grosssal;
 if(grosssal<=10000)
 tax=(float)(grosssal*0.02);
 else if(grosssal>10000&&grosssal<=25000)
 tax=(float)(grosssal*0.05);
 else if(grosssal>25000&&grosssal<=50000)
 tax=(float)(grosssal*0.1);
 else if(grosssal>50000&&grosssal<=100000)
 tax=(float)(grosssal*0.2);
 else
 tax=(float)(grosssal*0.5);
 cout<<"\n"<<"tax is"<<tax;
}
main()
{
 taxcalculator t;
 employee e;
 e.read();
 e.calgrosssal();
 e.calnetsal();
 t.taxdetails();
 t.caltax(e);
}
