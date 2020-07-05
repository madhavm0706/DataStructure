//  find floor of an element in a sorted array

#include<iostream>
using namespace std;

int floor(int arr[],int l, int e,int x){
    int result;
    while(l<=e){
        int mid = l+(e-l)/2 ;
        if(arr[mid] == x){
            return mid;
        }else if(arr[mid]> x){
            
            e= mid-1;
        }else if(arr[mid]<x){
            result = mid;
            l=mid+1;
        }
    }
    return result;
}


int main(){

    int arr[]={1,2,3,4,7,8,10,10,12,19};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x = 11;
          int answer= floor(arr,0,n-1,x);

          cout<<"floor of element "<<x<<" is "<<arr[answer]<<endl;
}