// Find Maximum element in biotonic array


#include<iostream>
using namespace std;


int maxelement(int arr[],int l,int e){
    while(l<=e){
        int mid=l+(e-l)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return arr[mid];
        }else if(arr[mid] >arr[mid-1]){
            l=mid+1;
        }else if(arr[mid]<arr[mid -1]){
            e=mid-1;
        }
    }
    return -1;
}




int main(){

    int arr[]={1,3,4,6,8,9,10,13,12,4,3,2,1};
    int n= sizeof(arr)/sizeof(arr[0]);

    int answer = maxelement(arr,0,n-1);
    cout<<"peak element is "<<answer<<endl;

}