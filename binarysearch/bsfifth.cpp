// last occurance of an element

#include<iostream>
using namespace std;


int lastoccurance(int arr[],int l, int e,int x){
    int index;
    while(l<=e){
        int mid = l+(e-l)/2;
        if(arr[mid] == x){
            index= mid;
            l= mid+1;
        }else if(arr[mid]>x){
            e= mid-1;
        }else{
            l=mid+1;
        }
    }
    return index;
}



int main(){

    int arr[] = {1,3,4,5,6,8,8,8,9,9,9,10,11,11,13};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x = 8;

    int answer = lastoccurance(arr,0,n-1,x);

    cout<<"last occurance of the element is"<<answer<<endl;

}