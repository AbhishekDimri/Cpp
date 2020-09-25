#include<iostream>
using namespace std;
struct node
{
  int data;
  node* link;
};
struct node* first=NULL;
struct node* last=NULL;
node *create_node(int data)
{
    node* temp=new node;
    temp->link=NULL;
    temp->data=data;
    return temp;
}
int main()
{

}
