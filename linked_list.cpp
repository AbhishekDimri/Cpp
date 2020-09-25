#include<iostream>
#include<cstdlib>

using namespace std;
class node
{
    public:
    int data;
    node *link;
};

class node *start=NULL;

int fraction_search(node *Node, int n)
{
    node *temp = new node();
    temp = Node;

    while(Node!=NULL)
    {
        for(int i=0;i<n;i++)
        {
            if(Node->link!=NULL)
           { 
             Node = Node->link;
           }
           else
           {
               break;
           }
           
        }
        temp = temp->link;
    }
}

node* create_node(int data)
{
    node *temp=new node;
    temp->data=data;
    temp->link=NULL;
    return temp;
}
void insert_end(int data)
{
    if(start==NULL)
        start=create_node(data);
    else
    {
        node* ptr=start;
        while(ptr->link!=NULL)
        {
           ptr=ptr->link;
        }
        ptr->link=create_node(data);
    }
}
void insert_beg(int data)
{
    if(start==NULL)
        start=create_node(data);
    else
    {
       node* ptr=create_node(data);
       ptr->link=start;
       start=ptr;

    }
}
void insert_middle(int data)
{
    if(start==NULL)
        start=create_node(data);
    else
    {
        node* ptr=start;

        while(ptr->data < data)
        {
            ptr = ptr->link;
        }
        
        node* new_node = new node();
        new_node->link = ptr->link;
        new_node->data = data;
        
    }
}
void display()
{
    node* ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
}

int search_last(node *Node, int n)
{
    int c=0;
    node *temp = Node;
    

    while(Node!=NULL)
    {
        if(c>n-1)
        {
            temp = temp->link;
        }
        Node = Node->link;
        c++;
    }

    return temp->data;
}

int main()
{
    int n;
    bool b;

   insert_end(50);
   insert_end(60);
   insert_beg(5);
   insert_beg(6);
   insert_middle(8);

   do
   {
       cout<<"Enter the element from last you want to search : ";
       cin>>n;

     cout<<"The element is "<< search_last(start, n);

     cout<<"Want to search next ? ";
     cin>>b;

   }while(b);

    display();
}
