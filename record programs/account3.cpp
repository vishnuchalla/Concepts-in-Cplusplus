#include<iostream>
using namespace std;
class Account
{
 int ano;
 int balance;
 public:
 void getdata(int &,int &);
 void transfer(Account &);
 void display();
};
void Account::getdata(int &a,int &bal)
{
 ano=a;
 balance=bal;
}
void Account::transfer(Account &ac)
{
 int b;
 cout<<"Enter the amount you want to transfer\n";
 cin>>b;
 balance-=b;
 ac.balance+=b;
}
void Account::display()
{
 cout<<"Account details\n";
 cout<<"Account no="<<ano<<"\n";
 cout<<"Account balance="<<balance<<"\n";
}
main()
{int a,b,c,d;
 Account a1,a2;
 cout<<"Enter the number and balance of account1\n";
 cin>>a>>b;
 a1.getdata(a,b);
 cout<<"Enter the number and balance of account2\n";
 cin>>c>>d;
 a2.getdata(c,d);
 a1.transfer(a2); 
 a1.display();
 a2.display();
}
 
