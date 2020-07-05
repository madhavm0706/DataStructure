// bubble sort algorithm

#include<iostream>
using namespace std;

void swap(int a, int b,int c){
    c = b;
    b=a;
    a=c;

}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){

        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }

    }

}


int main(){
    int arr[]={2,32,12,43,55,1,14,51};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr,n);
    printarray(arr,n);

    return 0;
    
}