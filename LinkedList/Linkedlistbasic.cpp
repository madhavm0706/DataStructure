// linked list basic part

#include<iostream>
using namespace std;

class Node{
    public:
        int key;
        int data;
        Node* next;

        Node(){
            key = 0;
            data = 0;
            next= NULL;

        }

        Node(int k,int d){
            key = k;
            data = d;
        }
};

class Singlylinkedlist{
    public:
       Node * head;
       Singlylinkedlist(){
           head=NULL;
       }
       Singlylinkedlist(Node *n){
           head=n;

       }
    //    check if node exits or not
    Node* nodeexits(int k){
        Node* temp = NULL;
        Node* ptr = head;

        while (ptr != NULL)
        {
            if(ptr->key == k){
                temp = ptr;
            }
            ptr = ptr->next;
        }
        return temp;
        
    }

    // Append to a node to the list

    void append(Node *n){

    if(nodeexits(n->key)!=NULL){
        cout<<"Node already exits with key value of "<<n->key<<" Append with different value"<<endl;
    }

    else{
        
        if(head==NULL){
            head=n;
            cout<<"Node Appended"<<endl;
        }else{
            Node* ptr=head;
            while (ptr->next !=NULL){
               ptr=ptr->next;
            }
            ptr->next=n;
            cout<<"Node Appended"<<endl;
            
            
        }
    }

}


// Prepend node attach a node at the start

void prepend(Node* n){
    if(nodeexits(n->key)!=NULL){
        cout<<"Node already exits with key value "<<n->key<<" Try to prepend with different value"<<endl;

    }else{
        n->next=head;
        head=n;
        cout<<"Node prepend"<<endl;
    }
}

// insert a node after a particular node in the list

void insertnode(int k, Node* n){
    Node* ptr = nodeexits(k);
    if(ptr==NULL){
        cout<<"No node exists with key value "<<k<<endl;
    }else{
        if(nodeexits(n->key)!=NULL){
                    cout<<"Node already exits with key value "<<n->key<<" Try to insert node with different value"<<endl;

        }else
        {
            n->next=ptr->next;
            ptr->next=n;
            cout<<"Node inserted"<<endl;
        }
        
    }
}
// delete node by unique key
      void deletenode(int k){
          if(head==NULL){
              cout<<"list is empty, can not delete any thing"<<endl;
          }else if(head !=NULL){
                if(head->key == k){
                    head= head->next;
                    cout<<"Node unlinked with key value "<<k<<endl;
                }else{
                    Node* temp =NULL;
                    Node* prevptr= head;
                    Node* currentptr = head->next;

                    while(currentptr != NULL){
                        if(currentptr->key==k){
                            temp = currentptr;
                            currentptr =NULL;
                        }else{
                            prevptr =prevptr->next;
                            currentptr = currentptr->next;
                        }
                    }
                    if(temp !=NULL){
                        prevptr->next = temp->next;
                        cout<<"Node unlinked with keys value: "<<k<<endl;

                    }else{
                        cout<<"Node doesn't exit with key value : "<<k<<endl;
                    }
                }

          }
      }

    //   update node
    void updatenode(int k, int d){
        Node* ptr = nodeexits(k);
        if(ptr !=NULL){
            ptr->data = d;
            cout<<"Node updated sucessfully"<<endl;
        }else{
            cout<<"Node doesn't exits with key valve "<<k<<endl;
        }
    }

    // print linked list

    void print(){
        if(head==NULL){
            cout<<"No nodes in linked list "<<endl;

        }
        else{
            cout<<endl<<"singly linked list value : ";
            Node* temp = head;
            while(temp != NULL){
            cout<<"("<<temp->key<<","<<temp->data<<") -->";
            temp= temp->next;
        }
        }
        
    } 
};






int main(){

    Singlylinkedlist s;
    int option;
    int key1,k1,data1;

    do{
        cout<<"\nWhat operation do you want to perform select option number,or enter 0 to exit."<<endl;
        cout<<"1. appendnode()"<<endl;
        cout<<"2. prependnode()"<<endl;
        cout<<"3. insertnodeafter()"<<endl;
        cout<<"4. deletenodebykey()"<<endl;
        cout<<"5.updatenodebykey()"<<endl;
        cout<<"6. print()"<<endl;
        cout<<"7. clear screen"<<endl;


        cin>>option;
        Node *n1 = new Node();
        switch (option)
        {
        case 0:
            
            break;
        
        case 1:
           cout<<"Append node operation \nEnter key and data to node to be appended"<<endl;
           cin>>key1;
           cin>>data1;
           n1->key = key1;
           n1->data = data1;
           s.append(n1);

           break;

        case 2:
          cout<<"Prepend node operation \nEnter key and data of the node to be prepended"<<endl;
          cin>>key1;
          cin>>data1;
          n1->key = key1;
          n1->data = data1;
          s.prepend(n1);

          break;   

        case 3:
           cout<<"Insert node after operation \nEnter the key of exixting node after which you want to insert node"<<endl;
           cin>>k1;
           cout<<"Enter key and data of new node first"<<endl;
           cin>>key1;
           cin>>data1;
           n1->key = key1;
           n1->data = data1;

           s.insertnode(k1,n1);

           break;

            case 4:
               cout<<"Delete node by key operation- \nEnter key and new data to be updated"<<endl;
               cin>>key1;
               
               s.deletenode(key1);

               break;
        

           case 5:
               cout<<"update node by key operation- \nEnter key and new data to be updated"<<endl;
               cin>>key1;
               cin>>data1;
               s.updatenode(key1,data1);

               break;

            case 6:
                 s.print();
                 break;
            case 7:
                system("clear");
                break;
            default:
                cout<<"enter proper option"<<endl;            
        }
    }while (option !=0);
    
    return 0;
    



}