#include<iostream>
using namespace std;
class college
{
 int rno;
 public:
 static int scount; 
void admission();
};
void college::admission()
{
 cout<<"assign roll no\n";
 cin>>rno;
 scount++;
}
int college::scount;
main()
{char ch;
 college s;
 do{
    cout<<"new student:\n";
    s.admission();
    cout<<"do you want to count\n";
    cin>>ch;
   }while(ch!='n');
cout<<"No of students="<<college::scount;
}
