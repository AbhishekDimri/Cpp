#include<iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node* next;
};

class Node* rear = NULL;
class Node* front = NULL;

Node* create_node(int data)
{
    Node* temp=new Node();
    temp->data=data;
    temp->next=NULL;
    return temp;
}

void enqueue(int data)
{
	 if(front==NULL && rear==NULL)
    {
     front=create_node(data);
     rear=front;
    }
    else
    {
        rear->next=create_node(data);
        rear=rear->next;
    }
}

void dequeue()
{
	Node* ptr = front;
	front = front->next;
	ptr->next = NULL;
	delete ptr;
}

void display()
{
	Node* temp = front;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main()
{
	enqueue(2);
	enqueue(4);
	enqueue(6);
	enqueue(8);
	dequeue();
	display();
}