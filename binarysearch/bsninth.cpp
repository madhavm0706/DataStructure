// searching in a nearly sorted array

#include<iostream>
using namespace std;

int search(int arr[],int l,int e,int x){
    while(l<=e){
        int mid= l+(e-l)/2 ;

        if(arr[mid] == x){
            return mid;
        }else if(arr[mid-1] == x && (mid-1)>= l){
            return mid -1;
        }else if(arr[mid+1] == x && (mid +1)<=e){
            return mid+1;

        }else if(arr[mid]<x){
            l=mid+2;
        }else if(arr[mid]>x){
            e=mid-2;
        }
    }
    return -1;
}


int main(){
    int arr[]={5,10,30,20,40};
    int n=sizeof(arr)/sizeof(arr[0]);

    int x= 40;

    int answer = search(arr,0,n-1,x);

    cout<<"element is present at index "<<answer<<endl;
}