// Minimum difference Element in a Sorted array

#include<iostream>
using namespace std;

int mindiff(int arr[],int l,int e,int x){

    while(l<=e){
        int mid=l+(e-l)/2;
        if(arr[mid] == x){
            return 0;
        }else if(arr[mid]>x){
            e=mid-1;
        }else{
            l=mid+1;
        }
    }

    int resultone=abs(arr[l] -x);
    int resulttwo = abs(arr[e] - x);

    if(resultone > resulttwo){
        return resulttwo;
    }else
    {
        return resultone;
    }
    
}



int main(){

      int arr[]={1,3,8,10,14,17,19};
      int n=sizeof(arr)/sizeof(arr[0]);

      int x = 19;

      int answer = mindiff(arr,0,n-1,x);
      cout<<"min diff is "<<answer<<endl;



}