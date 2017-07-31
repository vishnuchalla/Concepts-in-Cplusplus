#include<iostream>
using namespace std;
class Qprobe
{
 int *Htable, maxsize,size,key,value;
 public: 
 Qprobe(); 
 void display(); 
 void insert(int); 
 int count(); 
 int search(); 
};
Qprobe::Qprobe()
{
  maxsize=11; 
  size=0; 
  Htable=new int[maxsize];
  for(int i=0;i<maxsize;i++)
  Htable[i]=-1;
}
void Qprobe::insert(int data)
{
  key = data%maxsize;
  int x;
  if(size==maxsize)
  {cout<<"Hash table overflow\n";}
  else if (Htable[key]==-1)
{ Htable[key]=data;
  size++;
}
  else{
  for(int i=1;i<maxsize;i++)
 {
  int h=(key+i*i)%maxsize;
  if(Htable[h]==-1)
 {
  Htable[h]=data;
  size++;
  break;
}}}}
 void Qprobe:: display()
{
 for(int i=0;i<maxsize;i++)
 cout<<" "<<Htable[i];
}
 int Qprobe::count()
{
 return size;
}
 int Qprobe::search()
 {
 	int i=1,flag=-1,h;
 	cout<<"Enter data to search";
 	cin>>value;
 	key=value%maxsize;
 	if(Htable[key]==-1)
 		return flag;
 	h=key;
 	do{
 		if(Htable[h]==value){
 			flag=h;
 			break;
		 }
		 else if(Htable[h]==-1)
		 	break;
		h=(key+(i*i)%maxsize);
		i++;
	 }while(h!=key);
	 return flag;
 }
int main()
{
	Qprobe obj;
	int ch,x,a;
	do{
		cout<<"\n1.Insert 2.Display 3.Search 4.Count 5.Exit \n";
		cin>>ch;
		switch(ch){
			case 1: cout<<"Enter a number";
					cin>>x; 
					obj.insert(x);
					break;
			case 2: obj.display();
					break;
			case 3: a=obj.search();
					if(a==-1) cout<<"Element not found";
					else cout<<"Element found in position"<<a;
					break;
			case 4: a=obj.count();
					cout<<"Number of elements= "<<a;
					break;
		}
	}while(ch!=5);
	return 0;
}
 
