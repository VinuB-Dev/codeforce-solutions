using namespace std;
#include <iostream>

struct Node{
  int data;
  Node* link;
};

void newNode(Node** head, int x){
  struct Node* temp = new Node();
  temp->data = x;
  temp->link = NULL;
  if(*head!=NULL)temp->link = *head;
  *head = temp;
}

int main(){
  Node* head;
  head = NULL;
  newNode(&head,10);
  cout<<head->data;
}
