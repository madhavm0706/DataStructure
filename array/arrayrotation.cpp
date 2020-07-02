#include<iostream>
using namespace std;


void leftrotatearraybyone(int arr[],int n){

    int temp = arr[0],i;
    for(int i=0;i<n-1;i++){
        arr[i]= arr[i+1];
        }
    arr[n-1]= temp;
    
}

void leftrotatearray(int arr[],int n, int d){
    for(int i=0;i<d;i++){
        leftrotatearraybyone(arr,n);
    }
}






int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int d;
    cin>>d;
    int n = sizeof(arr)/sizeof(arr[0]);

    leftrotatearray(arr,n,d);

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}