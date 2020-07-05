// ceil of the element in soted array


#include<iostream>
using namespace std;


int ceil(int arr[],int l,int e,int x){
    int result;
    while(l<=e){
    int mid = l+(e-l)/2 ;
    if(arr[mid] == x){
        return mid;
    }else if(arr[mid]<x){
        l=mid+1;

    }else if(arr[mid]>x){
        result = mid;
        e=mid-1;
    }
    }

    return result;
    

}



int main(){

    int arr[]={1,2,4,5,6,7,8,10,11,13,14,17,20};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x = 3;

    int answer = ceil(arr,0,n-1,x);
    cout<<"the ceil of number "<<x<<" is "<<arr[answer]<<endl;

}