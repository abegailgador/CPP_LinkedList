
#include <bits/stdc++.h>
using namespace std;

/*
	Node struct
*/
class Node
{
	public:
	int data;
	Node *next;
};

/*
	Function to insert nodes in the list
*/
void insertNode(Node **head_ref, int new_data)
{
	Node *new_node = new Node();
	new_node->data = new_data;
	new_node->next = *head_ref;
	*head_ref = new_node;
}

/*
	Function to delete nodes in the list
*/
void deleteNode(Node *n, int pos)
{
	Node *current = n;
	Node *prev = n;
	current=n;
	
	for(int i=1;i<pos;i++)
	{
		prev=current;
		current=current->next;
	}
	prev->next=current->next;
}

/*
	Function to display list
*/
void displayList(Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

int main()
{
	Node *head = NULL;
	int pos;
	int num[5];
	
	cout << "Input atleast 5 numbers to insert in the list: ";
	
	for (int i = 0; i < 5; ++i) {
        cin >> num[i];
        insertNode(&head, num[i]);
    }

	cout << "Linked List: ";
	displayList(head);
	
	cout << endl;
	
	cout << "Input node position to be deleted: ";
	cin >> pos;
	
	deleteNode(head, pos);
	
	cout << "Updated Linked List: ";
	displayList(head);
}

