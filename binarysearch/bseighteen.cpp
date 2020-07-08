//  Search in Row wise And Column wise Sorted Array

#include<iostream>
#include<tuple>
using namespace std;



tuple<int,int> searchelement(int arr[4][4],int n, int m,int x){

    int i = 0;
    int j = m-1;

    while(i>=0 && i<n && j>=0 && j<m)
    {
        if(arr[i][j] == x){
        return make_tuple(i,j);

    }else if(arr[i][j]> x){
        j--;

    }else if(arr[i][j]<x){
        i++;
    }
    
    

}
return make_tuple(-1,-1);

}





int main(){
      
      int arr[4][4]={{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,49},
                    {32,33,38,50}};

       int x = 50;

       auto v = searchelement(arr,4,4,x);

       cout<<"i = "<<get<0>(v)<<" j = "<<get<1>(v)<<endl;




}
