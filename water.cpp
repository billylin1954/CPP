#include <bits/stdc++.h>
using namespace std;

int main(){                     
int loop = 1;
int input;

cin>>input;
int pressure = 5*input-400;
if ( pressure > 100 ){
    cout<<pressure<<endl;
    cout<<" -1"<<endl;
}else if (pressure==100){
    cout<<pressure<<endl;
    cout<<" 0"<<endl;
}else if (pressure<100){
    cout<<pressure<<endl;
    cout<<" 1"<<endl;
}
    


   return 0;
}