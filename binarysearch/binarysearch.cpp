#include<iostream>
using namespace std;



int binarysearch(int arr[],int l, int e,int x){
    

    while (l<=e)
    {
        int mid= l+(e-l)/2 ;
        if(arr[mid] == x){
            return mid;
        }else if(arr[mid]>x){
            e=mid-1;

        }else{
            l=mid+1;
        }
    }

    return -1;
    
}


int main(){


int arr[10]={1,2,3,4,5,9,10,11,14,15};
int x = 14;
int n = sizeof(arr)/sizeof(arr[0]);


int answer =  binarysearch(arr,0,n-1,x);

cout<<"element present at index  "<<answer<<endl;
}