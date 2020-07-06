// selection sort algoritms

#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void swap(int a, int b, int c){
    c=b;
    b=a;
    a=c;
}

void selection_sort(int arr[],int n){
   
    for(int i=0;i<n-1;i++){

        

        for(int j=i+1;j<n;j++){
            
            if(arr[i]>arr[j]){
                
                
                swap(arr[i],arr[j]);

            }
            
        }
    }

}



int main(){

    int arr[]={12,1,2,14,15,32,88,23,11,67};
    int n= sizeof(arr)/sizeof(arr[0]);

    selection_sort(arr,n);
    printarray(arr,n);


}