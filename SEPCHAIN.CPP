#include<iostream>
using namespace std;
#define msize 11

class sepchain
{
	struct node
	{
		int data;
		struct node *link;
	}*htable[msize], *temp, *temp2;
	int dsize;
	public:
		sepchain()
		{
			dsize=0;
			for(int i=0;i<msize;i++)
				htable[i]=NULL;
		}
		void insert(int d)
		{
			int k=d%msize;
			struct node *nn;
			nn=new node;
			nn->data=d;
			nn->link=NULL;
			if(htable[k]==NULL)
				htable[k]=nn;
			else
			{
				node *temp=htable[k];
				while(temp->link!=NULL)
					temp=temp->link;
				temp->link=nn;
			}
			dsize++;
}

int search(int d)
{
	int k=d%msize;int key=0;
	node *temp=htable[k];
	while(temp!=NULL)
	{

	if(temp->data==d)
		return key;
	temp=temp->link;
	key++;
	}
	cout<<"Element not found!"<<endl;
	return -1;
}

void delet(int d)
{
	int hash, pos, i=0;
	hash=d%msize;
	pos=search(d);
	if(pos==-1)
		cout<<"Element not found"<<endl;
	else
	{
		if(pos==0)
		{
			temp=htable[hash];
			htable[hash]=temp->link;
			delete temp;
		}
		else
		{
			for(temp=htable[hash];i<pos-1;i++,temp=temp->link);
			temp2=temp->link;
			temp->link=temp->link->link;
			delete temp2;
		}
}
}

void display()
{
	for(int i=0;i<msize;i++)
	{
		cout<<"H["<<i<<"]"<<": ";
		for(temp=htable[i];temp!=NULL;temp=temp->link)
			cout<<temp->data<<"->";
			cout<<"NULL\n";
	}
}
};
main()
{
sepchain ob;
int ch,elem;
do{
	cout<<"Enter 1.Insert 2.Delete 3.Search 4.Display 5.Exit: ";
	cin>>ch;
	switch(ch)
	{
		case 1: cout<<"Enter data: ";
			cin>>elem;
			ob.insert(elem); break;
		case 2: cout<<"Enter data: ";
			cin>>elem;
			ob.delet(elem); break;
		case 3: cout<<"Enter elem to search: ";
			cin>>elem;
			cout<<"Bucket: "<<(elem)%msize<<endl;
			cout<<"Position: "<<ob.search(elem);break;
		case 4: ob.display();break;
	}
       }while(ch!=5);

}
