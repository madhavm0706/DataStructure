#include<iostream>
using namespace std;

int main(){
    int a[100]={1,3,2,4,5};

    cout<<"enter the position and element, you want to add "<<endl;
    int pos;
    int num;
    cin>>pos>>num;

    for(int i=5; i>=pos;i--){
        a[i+1]=a[i];
        
    }

    a[pos] = num;

    for(int i=0; i<6;i++){
        cout<<a[i]<<"\t";
    }
}