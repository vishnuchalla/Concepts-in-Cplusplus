#include<iostream>
using namespace std;
class Lprobe
{
 int *Htable,maxsize,size,key,value;
 public: 
 Lprobe();
 ~Lprobe(); 
 void display(); 
 void insert(int); 
 void del();
 int count(); 
 int search(); 
 void rehash();
};
Lprobe::Lprobe()
{
 maxsize=11;
 size=0; 
 Htable=new int[maxsize];
 for(int i=0;i<maxsize;i++)
 Htable[i]=-1;
}
void Lprobe::insert(int data)
 {
  key=data%maxsize;
  int x;
  if(size==maxsize)
 { cout<<"Hash table overflow,rehash ?";
   cin>>x;
  if(x)
  rehash();
 }
 else if(Htable[key]==-1)
 {
 Htable[key]=data;
 size++;
 }
 else{
 for(int i=1;i<maxsize;i++)
 {
 int h=(key+i)%maxsize;
 if(Htable[h]==-1)
 {
 Htable[h]=data;
 size++;
 break;
 }
 }}	
 }
 void Lprobe:: display()
 {
  for (int i=0;i<maxsize;i++)
  cout<<" "<<Htable[i];
}
 int Lprobe::count()
 {
 	return size;
 }
 int Lprobe::search()
 {
 	int i=1,flag=-1,h;
 	cout<<"Enter data to search";
 	cin>>value;
 	key=value%maxsize;
 	if(Htable[key]==-1)
 	return flag;
 	h=key;
 	do{
 		if(Htable[h]==value)
     {
 			flag=h;
            return flag;
 			break;
	  }
	else if(Htable[h]!=-1)
	{h=(key+i)%maxsize;
	i++;}
}while(h!=maxsize);
 }
 void Lprobe::del()
 {
 int pos=search();
 if(pos==-1)
 cout<<"element not found";
 else{
 int j=pos,i;
 Htable[j]=-1; 
 i=j+1;
 while(Htable[i]!=-1)
 {
 if(Htable[i]%maxsize==j)
 {
  Htable[j]=Htable[i];
  Htable[i]=-1; 
  j=i; 
  i=j+1;
 }
else
i++;
}
size--;}
} 
void Lprobe::rehash()
{
	int *q,t;
	t=maxsize;
	q=new int[t];
	for(int i=0;i<maxsize;i++)
	q[i]=Htable[i];
    size=0;
	maxsize=(maxsize*2)+1;
	Htable= new int[maxsize];
	for (int i=0;i<maxsize;i++)
	Htable[i]=-1;
	for(int i=0;i<t;i++)
	insert(q[i]);
	delete q;
}
Lprobe::~Lprobe()
{
 delete Htable;
}
int main()
{
	Lprobe obj;
	int ch,x,a;
	do{
		cout<<"\n1.Insert 2.Display 3.Delete 4.Search 5.Count 6.Exit \n";
		cin>>ch;
		switch(ch){
			case 1: cout<<"Enter a number";
					cin>>x; 
					obj.insert(x);
					break;
			case 2: obj.display();
					break;
			case 3: obj.del();
					break;
			case 4: a=obj.search();
					if(a==-1) cout<<"Element not found";
					else cout<<"Element found in position"<<a;
					break;
			case 5: a=obj.count();
					cout<<"Number of elements= "<<a;
					break;
		}
	}while(ch!=6);
	return 0;
}
 
