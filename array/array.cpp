#include<iostream>
using namespace std;

int main(){
      
      int n;
    cout<<"enter the no of elements"<<endl;
    cin>>n;
    int a[n]={};

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }

 int sum = 0;

 for(int i=0;i<n;i++){
     sum = sum+a[i];
 }   
  cout<<"sum is"<<sum<<endl;

}