#include <bits/stdc++.h>
using namespace std;

int main(){                     

int number_1,number_2;
string operator;
cin<<number_1<<operator<<number_2;
   if(operator == "x") {
    cout<<number_1*number_2<<endl;
   }else if(operator == "+"){
    cout<<number_1+number_2<<endl;
   }else if(operator == "/"){
    cout<<number_1/number_2<<endl;
   }else if(operator=="-"){
    cout<<number_1-number_2<<endl;
   }


   return 0;
}