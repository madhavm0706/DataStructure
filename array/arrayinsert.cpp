#include<iostream>
using namespace std;

int main(){
    int a[100] = {};
    int i=0;
    char choice;
    do{
        cout<<" enter"<<i+1<<" element "<<endl;
        cin>>a[i];
                cout<<"do you want to enter"<<i+2<<" element (PressY or y to enter)"<<endl;

        cin>>choice;
        i = i+1;
    }
     while (choice == 'Y' || choice == 'y');

     for (int k=0;k<i; k++){
         cout<<a[k]<<"\t";
     }
     
         
     
     

}