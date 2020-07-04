// order not known Search

#include<iostream>
using namespace std;

int binarysearch(int arr[],int l,int e, int x){
    
if(arr[0]<arr[1]){
    while(l<=e){
        int mid = l+(e-l)/2;
        if(arr[mid] == x){
            return mid;
        }else if(arr[mid]>x){
            e= mid-1;
        }else{
            l=mid+1;
        }

    }
    return -1;
    }
        
    else if(arr[1]<arr[0]){

    while(l<=e){
        int mid = l+(e-l)/2;
        if(arr[mid] == x){
            return mid;
        }else if(arr[mid]>x){
            l= mid+1;
        }else{
            e=mid-1;
        }

    }
    return -1;
    }

}



int main(){
    int arr[]={17,15,14,10,9,7,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x= 1;

    int answer = binarysearch(arr,0,n-1,x);

    cout<<"Element is present at index "<<answer<<endl;
}