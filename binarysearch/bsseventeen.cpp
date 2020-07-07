// Search an element in a biotonic array
#include<iostream>
using namespace std;

int peakelement(int arr[],int l,int e){
    while(l<=e){
        int mid=l+(e-l)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }else if(arr[mid] >arr[mid-1]){
            l=mid+1;
        }else if(arr[mid]<arr[mid -1]){
            e=mid-1;
        }
    }
    return -1;
}

int binarysearch(int arr[],int l,int e,int x){

    while(l<=e){
        int mid=l+(e-l)/2 ;
        if(arr[mid] == x){
            return mid;
        }else if(arr[mid]>x){
            e=mid-1;
        }else
        {
            l=mid+1;
        }
        
    }
    return -1;

}

int binarysearch2(int arr[],int l,int e,int x){

    while(l<=e){
        int mid=l+(e-l)/2 ;
        if(arr[mid] == x){
            return mid;
        }else if(arr[mid]>x){
            l=mid+1;
        }else
        {
            e=mid-1;
        }
        
    }
    return -1;

}

int searchelement(int arr[],int l,int e,int x){
    int peak = peakelement(arr,l,e);
    
    

    int resultone = binarysearch(arr,l,peak-1,x);
    int resulttwo = binarysearch2(arr,peak,e,x);

    if(resultone == -1){
        return resulttwo;
    }else if(resulttwo == -1){
        return resultone;
    }
    else 
    {
        return -1;
    }

    return resulttwo;
    
}

int main(){
        int arr[]={1,3,4,5,6,8,9,10,14,19,22,21,12,7,2};
        int n = sizeof(arr)/sizeof(arr[0]);
        

        int x=2;

        int answer = searchelement(arr,0,n-1,x);

        cout<<"Index of the element "<<x<<" is "<<answer<<endl;
}