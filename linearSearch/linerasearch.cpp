#include<iostream>
using namespace std;

int linearsearch(int arr[],int n,int x){
    for(int i=0;i<n-1;i++){
        if(arr[i] == x){
            return i;
            }
            
        
        
    }
    return -1;
}



int main(){

    

    int arr[]={1,34,32,3,23,22,65,78,97,54,65};
    int N = sizeof(arr)/sizeof(arr[0]);
    
    

    int X= 65;

    int answer =  linearsearch(arr,N,X);

    cout<<answer<<"\n";

    

}