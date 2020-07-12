// Calculate Exponent 

#include<iostream>
using namespace std;

int exponent(int x, int n){
    if(n==0){
        return 1;

    }else{
        return(exponent(x,n-1)*x);
    }
}


int main(){
    int x= 3;
    int n = 2;

    int answer = exponent(x,n);
    cout<<answer<<endl;
}