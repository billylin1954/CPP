
#include <bits/stdc++.h>
using namespace std;
int main() {
    char operation;
    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    switch (operation) {
        case '+':
            cout << num1 << " + "
                 << "Enter second number: ";
            cin >> num2;
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - "
                 << "Enter second number: ";
            cin >> num2;
            cout  << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * "
                 << "Enter second number: ";
            cin >> num2;
            cout  << num1 * num2 << endl;
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
    
    return 0;
}
