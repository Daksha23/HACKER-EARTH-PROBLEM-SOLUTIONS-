#include<iostream>
using namespace std;
class Node{
	public:
	 int data;
	 Node *next;
};

void insert_node(Node* &head,int data,Node* &current)
{
   Node *ptr=new Node;
   ptr->data=data;
   ptr->next=NULL;
   if (head==NULL)
   {
   head=ptr;
   current=ptr;
   return;
   }
   current->next=ptr;
   current=ptr;
}
void display(Node *head)
{
	while(head!=NULL)
	{
    	cout<<head->data<<" ";
		head=head->next;
	}
}
Node* reverse(Node *first,Node *last,Node* &head)
{
    Node *temp;
	Node *temp2;
	if(head==first)
	head=last;
	else
	{
		temp=head;
		while(temp->next!=first)
		temp=temp->next;
		temp->next=last;
	}
	temp=last->next;
	last=last->next;
	while(first!=last)
	{
		temp2=first->next;
		first->next=temp;
		temp=first;
		first=temp2;
	}
   return last;
}
Node* reverse_list(Node* first,Node * &head)
{
	Node *last=first;
	Node *ptr=first->next;
	while(ptr!=NULL)
	{
		if(ptr->data %2 ==0)
		{
		last=ptr;
		ptr=ptr->next;
		}
        else
		break;
	}
    if(first == last)
	return first;
	else
	{
      last=reverse(first,last,head);
	  return last;
	}
}
void original_list(Node* &head)
{
	Node *ptr=head;
	while(ptr!=NULL)
	{
		if(ptr->data % 2==0)
		ptr=reverse_list(ptr,head);
		if(ptr==NULL)
            break;
		ptr=ptr->next;
	}
}
int main()
{
	int n,i,x;
	cin>>n;
    Node *head=NULL;
	Node *current=NULL;
	for(i=0;i<n;i++)
	{
	cin>>x;
	insert_node(head,x,current);
	}
	original_list(head);
	display(head);
}
