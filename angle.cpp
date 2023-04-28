#include <bits/stdc++.h>
using namespace std;
int main() {
    int angle_1,angle_2,angle_3;
    cin>>angle_1>>angle_2>>angle_3;
    // Math Operators: (), * /, + -
    //                1     2    3    
    // Logical Operators: (), !=  ==  >   >=   <   <=,  ||   &&
    //                    1              2              3
    //                        left -> right
    int sum_of_angles = angle_1+angle_2+angle_3;
    //                        (1)     (2)  
    if (sum_of_angles==180 && angle_1==60 && angle_2==60 && angle_3==60) {
//                   1     5         2     6        3     7   (    4    )     
//      Logical Operation Result (Boolean): ture or false                      
      cout<<"Equilateral"<<endl;
    }(else if )((sum_of_angles==180) && (angle_1 == angle_2 || angle_2==angle_3 || angle_1 == angle_3) ){
   //                          1      5            2         6           3       7             4    
      cout<<"Isosceles"<<endl;
    }else if  (sum_of_angles==180 && angle_1 != angle_2 && angle_1 != angle_3 && angle_2 != angle_3 ){
      //                     1     5          2          6          3          7            4
      cout<<"Scalene"<<endl;  
    }else{
      cout<<"Error"<<endl;
    }
    
    return 0;
} 

