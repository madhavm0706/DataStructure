// Allocate minimum Number of Pages

#include<iostream>
using namespace std;

bool isvalid(int arr[],int n,int k,int num){
    int student = 1;
    int sum =0;

    for(int i=0;i<n;i++){
        sum =sum+ arr[i];
        if(sum>num){
            student ++;
            sum = arr[i];
        }

        if(student >k){
            return false;
        }
    }

    return true;


}



int allocate(int arr[],int n,int k){
    int l = 40;  // make a function to get max element in array
    int e = 100; //make a function to get sum of all element in a array
    int res =-1;
    while(l<=e){
        int mid= l+(e-l)/2 ;
        if(isvalid(arr,n,k,mid) == true){
            res = mid;
            e=mid-1;
        }else{
            l=mid+1;
        }
    }

    return res;
}


int main(){
    int arr[]={20,10,30,40}; //array may or may not be sorted
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =2;

    int result = allocate(arr,n,k);
    cout<<result<<endl;

}