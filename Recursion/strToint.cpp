// convert string to integer using recursion

#include<iostream>
#include<cmath>
using namespace std;

int convert(string str){

    if(str.length() ==1){
        return str[0] -'0';
    }else{
        double x = str[0] - '0';

        double y = convert(str.substr(1));
          
          double answer = x* pow(10,str.length() -1) + y;
        return answer;
    }
    
   
    
}



int main(){
    string a = "4534322";

    cout<<convert(a);

}