#include<iostream>
using namespace std;

int reversebs(int arr[],int l,int e,int x){

    while(l<=e){
        int mid= l+(e-l)/2;

        if(arr[mid] == x){
            return mid;
        }else if(arr[mid]> x){
            l=mid+1;
        }else{
            e=mid-1;
        }
    }

}

int main(){

    int arr[] = {31,23,12,10,9,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 1;

    int answer = reversebs(arr,0,n-1,x);

    cout<<"the element is present at index "<<answer<<endl;

}