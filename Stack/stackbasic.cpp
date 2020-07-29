// All stack opeartions

#include<iostream>
using namespace std;

class stack{
    private:
        int top;
        int arr[6];
    public:
        stack(){
            top =-1;
            for(int i=0;i<6;i++){
                arr[i]=0;
            }
        }    

        bool isEmpty(){
            if(top==-1){
                return true;
            }else
            {
                return false;
            }
            
        }

        bool isFull(){
            if(top == 5){
                return true;
            }else
            {
                return false;
            }
            
        }

        void push(int val){
            if(isFull()){
                cout<<"stack overflow"<<endl;
            }else{
                top++;
                arr[top]=val;
            }
        }

        int pop(){

            if(isEmpty()){
                cout<<"stack underflow"<<endl;
            }else
            {
                int popvalue=arr[top];
                arr[top]=0;
                top--;
                return popvalue;
            }
            

        }

          int count(){
              return(top+1);
          }
          int peek(int pos){
              if(isEmpty()){
                  cout<<"stack underflow"<<endl;
                  return 0;
              }else
              {
                  return arr[pos];
              }
              

          }

          void change(int pos,int value){
              arr[pos]=value;
              cout<<"Item changed at position "<<pos<<endl;
          }

          void display(){
              cout<<"All values in stack are :- "<<endl;
              for(int i=5;i>=0;i--){
                  cout<<arr[i]<<" ";
              }
          }
};



int main(){
        
        stack s1;
        if(s1.isEmpty()){
            cout<<"Stack is Empty"<<endl;
        }else{
            cout<<"stack is not Empty"<<endl;
        }

        if(s1.isFull()){
            cout<<"Stack is Full"<<endl;
        }else{
            cout<<"stack is not Full"<<endl;
        }

        s1.push(1);
        s1.push(4);
        
        s1.display();
        cout<<endl;
      cout<<s1.peek(2)<<endl;

      s1.push(3);
        s1.push(2);
        s1.push(11);
        s1.push(12);

        s1.display();
        cout<<endl;

        s1.change(3,10);

        if(s1.isEmpty()){
            cout<<"Stack is Empty"<<endl;
        }else{
            cout<<"stack is not Empty"<<endl;
        }

        if(s1.isFull()){
            cout<<"Stack is Full"<<endl;
        }else{
            cout<<"stack is not Full"<<endl;
        }

        s1.display();





}