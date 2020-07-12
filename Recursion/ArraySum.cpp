// Array Sum using Recursion
#include<iostream>
using namespace std;

int sum(int arr[],int n){

    if(n<=0){
        return 0;

    }else{
        return(sum(arr,n-1)+arr[n-1]);
    }

}



int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int answer = sum(arr,n);
    cout<<"Sum of all elements is "<<answer<<endl;
}