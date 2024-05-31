#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;

	node(int d)
	{
		data = d;
		next = NULL;
	}

	void insertathead(node*& head, int d)
	{
		node* temp = new node(d);
		node* curr = head;

		while (curr->next != head)
		{
			curr = curr->next;
		}

		temp->next = head;
		curr->next = temp;
		head = temp;
	}

	void display(node* head)
	{
		node* temp = head;
		do
		{
			cout << temp->data << "->";
			temp = temp->next;
		} while (temp != head);
		cout << "(head)";
	}
};

void main()
{
	node* node1 = new node(1);
	node* node2 = new node(2);
	node* node3 = new node(3);
	node* node4 = new node(4);

	node* head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node1;

	head->insertathead(head, 0);
	node1->display(head);
	cout << endl;
}