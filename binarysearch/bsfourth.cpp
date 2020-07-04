// first occurance of an element

#include<iostream>
using namespace std;


int firstoccurance(int arr[],int l,int e,int x){
 int index;
            while(l<=e){
                int mid=l+(e-l)/2 ;
               
                if(arr[mid] == x){

                    index =mid;
                    e=mid-1;

                }else if(arr[mid]>x){
                    e=mid-1;
                }else{
                    l=mid+1;
                }
            }
            return index;
}

int main(){

    int arr[]={1,3,4,8,8,8,9,9,10,11};

    int n = sizeof(arr)/sizeof(arr[0]);
    int x= 3;

    int answer = firstoccurance(arr,0,n-1,x);

    cout<<"the first occurance of element is "<<answer<<endl;

}