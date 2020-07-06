// Next Alphabatical Element

#include<iostream>
using namespace std;

char searchchar(char arr[],int l, int e, char x){
    int result;
    while(l<=e){
        int mid = l+(e-l)/2 ; 

        if(arr[mid] == x){
            l=mid+1;
        }else if(arr[mid]>x){
            result = mid;
            e= mid-1;

        }else if(arr[mid]<x){
            l=mid+1;
        }
    }
    return result;
}



int main(){
    char arr[]={'a','c','f','h','i','l','m'};

    int n =sizeof(arr)/sizeof(arr[0]);
    char x = 'c';

    
    int result = searchchar(arr,0,n-1,x);

    
          cout<<"Next alphabate of "<<x<<" is "<<arr[result]<<endl;
  
    }
    


