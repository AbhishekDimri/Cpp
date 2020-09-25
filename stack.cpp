#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    node* link;
};
struct node* top=NULL;
node* create_node(int data)
{
    node * temp=new node;
    temp->data=data;
    temp->link=NULL;
    return temp;
}
void push(int data)
{
   node* temp=create_node(data);
   temp->link=top;
   top=temp;
}
void pop()
{
    if(top==NULL)
        cout<<"list is already empty ";
    else
    {
          node* temp=top;
          top=top->link;
          temp->link=NULL;
          delete temp;
    }
}
void display()
{
    node* temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->link;
    }
}
int main()
{
push(5);push(6);push(7);push(8);push(9);
display();
cout<<endl;
pop();
display();

}
