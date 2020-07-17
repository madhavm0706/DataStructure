// Reverse String using Recursion

#include<iostream>
using namespace std;


string reversestring(string str){
 
      if(str.length() ==1){

          return str;
          
      }else{
          string str1;

           str1.push_back(str.length() -1);

           return str1;

      }
}

int main(){

    string str = "madhav";

    string answer = reversestring(str);
    cout<<answer<<endl;

    return 0;
}