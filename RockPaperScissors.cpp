#include <bits/stdc++.h>
using namespace std;

int main()
{
    int loop = 1;
    while(loop==1){
    srand(time(NULL));          //1:paper,2:rock,3 scissors
    int random = rand()%3;
    string input;
    cin >> input;

    if(input == "rock" && random == 0 ) {  
                                   
   	    cout<<"paper"<<endl;
    	cout<<"you lost"<<endl; 
    } if (input == "paper" && random == 1){
    	cout<<"scissors"<<endl;
    	cout<<"you lose"<<endl;
    } if (input == "scissors" && random == 1){
    	cout<<"rock"<<endl;
    	cout<<"you lose"<<endl;
    } if (input == "scissors" && random == 0){
    	cout<<"paper"<<endl;
    	cout<<"you win"<<endl;
    } if (input == "paper" && random == 0){
    	cout<<"scissors"<<endl;
	    cout<<"you win"<<endl;    
    } if (input == "rock" && random == 1 ){
       	cout<<"scissors"<<endl;
        cout<<"you win"<<endl;
    } 
    }
   return 0;
}