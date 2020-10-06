using namespace std;
#include <iostream>

//node structure
struct Node{
  int data;
  Node* link;
};


void newNode(Node** head, int x){
  struct Node* temp = new Node();//creating new node
  temp->data = x;
  temp->link = NULL;
  //updating new node
  if(*head!=NULL)temp->link = *head;
  *head = temp;
}

int main(){
  Node* head;
  head = NULL;
  newNode(&head,10);
  cout<<head->data;
}
