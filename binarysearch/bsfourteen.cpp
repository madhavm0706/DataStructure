//  Index of First 1 in a Binary Sorted Infinite Array

#include<iostream>
using namespace std;


int firstoccurance(int arr[],int l,int e,int x){
int res;
    while(l<=e){
        int mid=l+(e-l)/2 ;
        
        if(arr[mid] == x){
            res = mid;
            e=mid-1;

        }else if(arr[mid]<x){
            l=mid+1;
        }else
        {
            e=mid-1;
        }
        
    }
    return res;

}


int firstelement(int arr[],int x){
    int l=0;
    int e=1;

    while(x>arr[e]){
        l=1;
        e=e*2;
    }
    int result = firstoccurance(arr,l,e,x);
    return result;
}



int main(){
    int arr[]={0,0,0,0,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
    int x = 2;

    int answer = firstelement(arr,x);
    cout<<"index of first "<<x<<" is "<<answer<<endl;
}
