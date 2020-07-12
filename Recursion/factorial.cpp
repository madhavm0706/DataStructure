// factorial using recursion


#include<iostream>
using namespace std;

unsigned int factorial(int n){
    if(n==0){
        return 1;
    }else
    {
        return factorial(n-1)*n;
    }
    
}


int main(){
     int n = 4;
     int answer = factorial(n);

     cout<<"Factorial of number "<<n<<" is "<<answer<<endl;
}