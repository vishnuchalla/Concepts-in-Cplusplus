#include <iostream>
#include<cstdio>
using namespace std;
class bst
{
    struct node
    {
        int data;
        struct node *left;
        struct node *right;
    }*root,*temp1,*temp,*nn;
    int size;
    public:
        bst();
        void insert();
        //int search(int);
        int count();
        int deletion();
        node *find_min(node *tmroot);
        void display();
        void inorder(node *temp);
        void preorder(node *temp);
        void postorder(node *temp);
        void display(node *ptr, int level);
};
void bst::display()
{
    cout<<"Select from following"<<endl;
    cout<<"[1]Inorder\n[2]Preorder\n[3]Postorder\n[4]Tree Construct\n";
    int ch=0;
    cin>>ch;
    switch(ch)
    {
        case 1:
            inorder(root);
            break;
        case 2:
            preorder(root);
            break;
        case 3:
            postorder(root);
            break;
        case 4 :
            display(root,1);
            break;
    };
}
bst::node* bst::find_min(node *tmroot)
{
    node *current=tmroot;
    if(current->left==NULL)
        return current;
    while(current->left->left!=NULL)
        current=current->left;
    return current;
}
bst::bst()
{
    root=NULL;
    size=0;
}

int bst::deletion()
{
    int data;
    cout<<"Enter data to delete"<<endl;
    cin>>data;
    if(root == NULL)
            return -1;
    node *temp=root;
    while((temp->data!=data)&&(temp!=NULL))
    {
        if(data < temp->data)
        {
            temp1=temp;
            temp=temp->left;
        }
        if(data > temp->data)
        {
            temp1=temp;
            temp=temp->right;
        }
    }
    cout<<"temp is "<<temp->data;
    if(temp==NULL)
    {
        return -1;
    }
    if(data==root->data)
    {
        temp=root;
        if((root->right==NULL && root->left==NULL))
        {
            root=NULL;
            goto a;
        }
        else if(root->right==NULL)
        {
            root=root->left;
            goto a;
        }
        else if(root->left==NULL)
        {
            root=root->right;
            goto a;
        }
    }
    if(temp->left==NULL||temp->right==NULL)
    {
        if(temp->left==NULL&&temp->right==NULL)
        {
            if(temp1->data>temp->data)
                temp1->left=NULL;
            else
                temp1->right=NULL;
        }
        else if(temp->left==NULL)
        {
            if(temp1->data>temp->data)
                temp1->left=temp->right;
            else
                temp1->right=temp->right;
        }
        else
        {
            if(temp1->data>temp->data)
                temp1->right=temp->left;
            else
                temp1->right=temp->left;
        }
    }
    else
    {
        node *mini;
        mini=find_min(temp);
        cout<<"mini is"<<mini->data;
        int tmp=temp->data;
        if(mini->left->right==NULL)
        {
            temp->data=mini->left->data;
            mini->left->data=tmp;
            temp=mini->left;
            mini->left=NULL;
        }
        else
        {
            temp->data=mini->left->data;
            mini->left->data=tmp;
            temp=mini->left;
            mini->left=temp->right;
            temp->right=NULL;
        }
    }
    a:
    int num=temp->data;
    delete temp;
    return num;
}
void bst::insert()
{
    int data;
    cout<<"Enter the data";
    cin>>data;
    nn=new node;
    nn->data=data;
    nn->left=NULL;
    nn->right=NULL;
    if(root==NULL)
        root=nn;
    else
    {
        temp=root;
        while(temp!=NULL)
        {
            if(temp->data==nn->data)
            {
                cout<<"Data already exists";
                return;
            }
            else if(temp->data>nn->data)
            {
                temp1=temp;
                temp=temp->left;
            }
            else
            {
                temp1=temp;
                temp=temp->right;
            }
        }
        if(temp1->data>nn->data)
            temp1->left=nn;
        else
            temp1->right=nn;
    }
}
void bst::inorder(node *temp)
{
    if(temp!=NULL)
    {
        inorder(temp->left);
        cout<<temp->data<<"\t";
        inorder(temp->right);
    }
}
void bst::preorder(node *temp)
{
    if(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        inorder(temp->left);
        inorder(temp->right);
    }
}
void bst::postorder(node *temp)
{
    if(temp!=NULL)
    {
        inorder(temp->left);
        inorder(temp->right);
        cout<<temp->data<<"\t";
    }
}
void bst::display(node *ptr, int level)
{
    int i;
    if (ptr != NULL)
    {
        display(ptr->right, level+1);
        cout<<endl;
        if (ptr == root)
            cout<<"Root->:  ";
        else
        {
            for (i = 0;i < level;i++)
                cout<<"       ";
	}
        cout<<ptr->data;
        display(ptr->left, level+1);
    }
}
int main()
{
    bst tree;
    int ch=0;
    do
    {
        int a;
        cout<<endl<<"Select from the following"<<endl;
        cout<<"[1]Insertion\n[2]Deletion\n[3]Display\n[4]Exit\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
                tree.insert();
                break;
            case 2:
                a=tree.deletion();
                if(a==-1)
                    cout<<"Error while deletion"<<endl;
                else
                    cout<<a<<" Deleted";
                break;
            case 3:
                tree.display();
                break;
        }
    }while(ch!=4);
}
