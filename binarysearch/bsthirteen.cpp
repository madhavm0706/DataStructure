// Find position of an element in an Infinite Sorted Array

#include<iostream>
using namespace std;

int binarysearch(int arr[],int l, int e,int x){
    while(l<=e){
        int mid=l+(e-l)/2;
        if(arr[mid] ==x){
            return mid;
        }else if(arr[mid]<x){
            l=mid+1;
        }else
        {
            e=mid-1;
        }
        
    }
    return -1;
}

int infinite(int arr[],int l,int x){

    int e = 1;
    while(x>arr[e]){
        l= e;
        e= e*2;


    }
    int result = binarysearch(arr,l,e,x);
    return result;

}




int main(){
    // same algorithm will be applicabe to infinite sorted array

    int arr[]={1,3,6,8,10,11,14,16,17,18,19,23,24,28,29,31,33,38,39};
    int x= 19;

    int answer= infinite(arr,0,x);

    cout<<"Index of element "<<x<<" is "<<answer<<endl;
}
