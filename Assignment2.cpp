#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node*next;
    Node(int data)
	{
        		this->data=data;
        		next=NULL;
	}
};

void toappend(Node*&head,int data)
{
    Node*temp=head;
    Node*new_node=new Node(data);
    if(temp==NULL)
    {
	head=new_node;
	new_node->next=head;
	return;
    }
    while(temp->next!=head) // ANSWER TO Q1
   {
	temp=temp->next;
    }
    temp->next=new_node;
    new_node->next=head;
}

void printfunc(Node*&head)
{
	Node*temp=head;
    	do{cout<<temp->data<<"->";temp=temp->next;}
    	while(temp!=head);
}

int main()
{
	 Node*head=NULL;
    	toappend(head,1);
    	toappend(head,2);
    	toappend(head,3);
    	printfunc(head);
}

/*
ANSWER TO Q2

Applications :
1. Management of the computing resources.
2. Implementation of data structures, queues and fibonacci.
3. Used in computer networking for token scheduling.
4. Round Robin scheduling technique in games.
5. Audio/Video Streaming
6. Circular Escalators
*/