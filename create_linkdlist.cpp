#include <iostream>
using namespace std;
struct Node { 
      int data; 
      struct Node *next; 
   };

struct Node *createNode(int new_data) { 
   struct Node *new_node = (struct Node*) malloc(sizeof(struct Node)); 
   new_node->data = new_data; 
   new_node->next = NULL;  
   //cout<<"create node- pointer will store a address - new_node's address - new_node:"<<new_node<<endl;
   //cout<<"create node- value of new node - new_node->data:"<<new_node->data<<endl;
   //cout<<"create node- pointer's address - &new_node:"<<&new_node<<endl;
   return new_node;
} 

void insertNode(struct Node *new_node,struct Node **head)// ** denotes the address of pointer--call by reference is required here inorder to use linked list in caller(int main)
{
  if(*head == NULL){
      *head = new_node;
  }  
  else{
      struct Node *temp = *head;
      while(temp->next != NULL){
         temp =temp->next;
      }
      temp->next = new_node;
  }
  //cout<<" insert node:"<<head<<endl;
}
bool isSortedDesc(struct Node *head) 
{ 
   if (head == NULL) 
      return true;  

   // Traverse the list till last node and return 
   // false if a node is smaller than or equal 
   // its next. 
   for (Node *t=head; t->next != NULL; t=t->next) 
   if (t->data <= t->next->data) 
         return false; 
   return true; 
} 
void printList( struct Node *head) { 
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) { 
      cout<< ptr->data <<" "; 
      ptr = ptr->next; 
   } 
} 
int main() { 
    
   struct Node *head = NULL;   
   
   int n,arr[n];
   cin>>n;
   for(int i=0;i<n;i++){
      cin>>arr[i];
      struct Node *new_node = createNode(arr[i]);
      insertNode (new_node, &head);
      
   }
 
   cout<<"The linked list is: ";
   printList(head); 
   cout<<endl;
   isSortedDesc(head) ? cout << "Yes" : 
                  cout << "No"; 
   
  return 0; 
}