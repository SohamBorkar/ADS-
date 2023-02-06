// C++ program for doubly linked list and insertion at start, display

#include <bits/stdc++.h>
using namespace std;

class node {
public:
	node* prev;
	int data;
	node* next;

	node(int value)
	{ // A constructor is called here
		prev = NULL; // By default previous pointer is
					// pointed to NULL
		data = value; // value is assigned to the data
		next = NULL; // By default next pointer is pointed
					// to NULL
	}
};

void insert_at_head(node*& head, int value)
{

	node* n = new node(value);
	n->next = head;

	if (head != NULL) {
		head->prev = n;
	}

	head = n;
}

void print(node * head){
    while (head != NULL)
    {
        cout << head -> data;
        head = head -> next;
    }
};

// Driver code
int main()
{
	node* head = NULL; // declaring an empty doubly linked list

	insert_at_head(head, 0);
	insert_at_head(head, 2);
	insert_at_head(head, 7);
	insert_at_head(head, 4);

	print(head);
	return 0;
}














// // Function to delete a node with a given
// value void deleteNode(Node **head, int data) {
// Node *current = *head; Node *prev =
// NULL; if (current != NULL && current->data
// == data)
// {
// *head = current->next;
// delete current;
// return;
// }
// while (current != NULL && current->data != data)
// { prev =
// current;
// current = current->next;
// } if (current
// == NULL)
// return;
// prev->next = current->next;
// delete current;
// }