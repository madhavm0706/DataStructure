// Reverse Array using Recursion

#include<iostream>
using namespace std;

void reverse(int arr[],int l,int e){
    
    if(l>=e){
        return;
        
    }else{
       int temp;
        temp=arr[l];
       arr[l] = arr[e];
       arr[e] = temp;
       reverse(arr,l+1,e-1);
    }
}

void printArray(int arr[], int size) 
{ 
   for (int i = 0; i < size; i++) 
   cout << arr[i] << " "; 
  
   cout << endl; 
} 






int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n= sizeof(arr)/sizeof(arr[0]);

    reverse(arr,0,n-1);
    printArray(arr,n);
    
}