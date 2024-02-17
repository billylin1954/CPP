
#include <bits/stdc++.h>
using namespace std;
void calculator(int num1,int num2,char operation){
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    switch (operation) {
        case '+':
            cout << num1 << " + "<< "Enter second number: ";     
            cin >> num2;
            cout  << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - "
                << "Enter second number: ";
            cin >> num2;
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << "Enter second number: ";
            cin >> num2;
            cout << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 << " / "
                << "Enter second number: ";
            cin >> num2;
            if (num2 != 0) {
                cout << num1/num2 << endl;
            } else {
                cout << "Error: Division by zero is undefined." << endl;
            }
            break;
    }
}
int main() {
    int num1,num2;
    char operation;
    calculator( num1, num2, operation);
    return 0;
}
