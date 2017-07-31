#include<iostream>
#include<string.h>
using namespace std;
template<class T>
T max(T &a,T &b)
{
 if(a>b)
 return a;
 else
 return b;
}
char* max(char *s1,char *s2)
{
 if(strcmp(s1,s2)>0)
 return s1;
 else
 return s2;
}
main()
{
 int a,b;
 float c,d;
 char x,y;
 char *s1,*s2;
 cout<<"Enter two integers\n"<<"\n";
 cin>>a>>b;
 cout<<"max of two integers\n";
 cout<<max(a,b);
 cout<<"Enter two floats\n";
 cin>>c>>d;
 cout<<"max of two floats\n";
 cout<<max(c,d);
 cout<<"Enter two chars\n";
 cin>>x>>y;
 cout<<"Max of two char\n";
 cout<<max(x,y);
 cout<<"Enter s1 and s2\n";
 cin>>s1>>s2;
 cout<<max(s1,s2);
}
