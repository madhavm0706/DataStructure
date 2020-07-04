// Count of an element in a sorted array

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

int countelement(int arr[],int l, int e, int x){
    int answer;
    int first = firstoccurance(arr,l,e,x);
    int last = lastoccurance(arr,l,e,x);

    answer = (last - first +1) ;

    return answer;

}


int main(){

    int arr[]={1,2,3,4,8,8,8,9,9,9,9,11,11,11,11,13};

    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 1;

    int answer = countelement(arr,0,n-1,x);

    cout<<"there are "<<answer<<" elements present in an array of number "<<x<<endl;
}