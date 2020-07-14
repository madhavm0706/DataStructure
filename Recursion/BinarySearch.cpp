// Binary Search using Recursion


#include<iostream>
using namespace std;

int binarysearch(int arr[],int l,int e,int x){

    if(e>=l){

        int mid = l+(e-l)/2 ;

        if(arr[mid] == x){
            return mid;
        }else if(arr[mid]>x){
            return binarysearch(arr,l,mid-1,x);
        }else{
            return binarysearch(arr,mid+1,e,x);
        }

    }
    return -1;
}

int main(){
    int arr[]={2,4,6,9,10,11,13,15,18};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x =2;

    int answer = binarysearch(arr,0,n,x);
    cout<<answer<<endl;
}