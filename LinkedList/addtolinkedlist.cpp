// add node to a linked list 

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void print(Node * n){
    while (n != NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
    
}

// add at the starting of list
void push(Node** head_ref,int data){
    
   Node* new_node = new Node();

    new_node->data= data;
    new_node->next = *head_ref;
    *head_ref = new_node; 

}

int main(){

    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* fourth = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();


    head->data=1;
    head->next=second;

    second->data=3;
    second->next=third;

    third->data=5;
    third->next=fourth;

    fourth->data=7;
    fourth->next = NULL;
       
     push(&head,19);
    print(head);

    


    return 0;

}