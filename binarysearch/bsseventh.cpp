// number of times sorted array is rotated

#include<iostream>
using namespace std;

int rotatedarray(int arr[],int l,int e){
    if(arr[l]<arr[e]){
        return e+1;
    } else{
    while(l<=e){
        int mid = l+(e-l)/2 ;
        if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]){
            return mid;
        }
        else if(arr[l] < arr[mid]){
            l=mid+1;
        }else if(arr[mid]>arr[e]){
            e= mid-1;
        }
    }
    
}
}

int main(){

    int arr[]={1,2,3,4,6,7,8,9,10,12,14,15,16};
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = rotatedarray(arr,0,n-1);

    int answer = n-result;



    cout<<"array is rotated "<<answer<<" times"<<endl;

}