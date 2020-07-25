// length of linked list using recursion and iterative method

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

int print(Node* n){
    int length=0;
    while (n!=NULL)
    {
        cout<<"("<<n->data<<")"<<" ";
        n=n->next;
        length++;
    }
    return length;
}

// recursive method

int getcount(Node* n){
    if(n==NULL){
        return 0;
    }else
    {
        return 1+getcount(n->next);
    }
    
}


int main(){
        
        Node* head= NULL;
        Node * second = NULL;
        Node* third= NULL;
        Node * fourth = NULL;
         Node* fifth= NULL;
        Node * sixth = NULL;

        head = new Node();
        second = new Node();
        third = new Node();
        fourth = new Node();
        fifth = new Node();
        sixth = new Node();

        
        head->data=1;
        head->next=second;

        second->data=2;
        second->next=third;

        third->data=3;
        third->next=fourth;

        fourth->data=4;
        fourth->next=fifth;

        fifth->data=5;
        fifth->next=sixth;

        sixth->data=6;
        sixth->next=NULL;
         
         


        cout<<print(head)<<endl;
        cout<<"length of linked list is "<<getcount(head)<<endl;
}