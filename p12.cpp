// //singly linked list, create, insert node from front, delete node, display

#include<iostream>
using namespace std;
class node{
   public:
      int data;
      node*next;
      node(int d){
      data=d;
      next= NULL;}
   };
void insertAthead(node*&head, int data){
   node*n= new node(data);
   n->next= head;
   head= n;
}
void print(node*head){
   while(head!=NULL){
      cout<<head->data<<"->";
      head= head->next;
   }
}
int main(){
   node*head= NULL;
   insertAthead(head,5);
   insertAthead(head,2);
   insertAthead(head,8);{}
   insertAthead(head,3);                            
   insertAthead(head,6);
   print(head);
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