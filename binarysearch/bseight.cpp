// search element in a rotated sorted array 

#include<iostream>
using namespace std;

int binarysearch(int arr[],int l,int e, int x){
    while(l<=e){
        int mid=l+(e-l)/2 ;
        if(arr[mid] == x){
            return mid;
        }else if(arr[mid] > x){
            e=mid-1;
        }else{
            l= mid+1;
        }
    }
    return -1;
}

int findindex(int arr[],int l,int e,int x){

     while(l<=e){
         int mid=l+(e-l)/2;
         if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]){
             return mid;
         }else if(arr[l]<arr[mid]){
             l=mid+1;
         }else if(arr[mid]< arr[e]){
             e=mid-1;
         }
     }

}

int searchelement(int arr[],int l,int e,int x){
    int index = findindex(arr,l,e,x);
    int element = binarysearch(arr,l,index,x);
    int element1 = binarysearch(arr,index+1,e,x);

    if(element == -1){
        return element1;
    }else if(element1 == -1){
        return element;
    }
}



int main(){

    int arr[] ={5,6,7,9,10,13,14,16,1,2,3,4};
    int n= sizeof(arr)/sizeof(arr[0]);

    int x = 4;

    int answer = searchelement(arr,0,n-1,x);

    cout<<"element "<<x<<"is present at index "<<answer<<endl;

}