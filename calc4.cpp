#include <bits/stdc++.h>
using namespace std;
double num1, num2, out;

// Function to add two numbers
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to subtract two numbers
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to multiply two numbers
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function to divide two numbers
double divide(double num1, double num2) {
    if (num2 == 0) {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
    return num1 / num2;
}

int main() {
    string operation;
    cin >> num1 >> operation >> num2;
    if (operation == "+") {
        out = subtract(num1, num2);
        cout<<out<<endl;
    } else if (operation == "+") {
        out = subtract(num1, num2);
        cout<<out<<endl;
    } else if (operation == "-") {
        out = subtract(num1, num2);
        cout<<out<<endl;
    } else if (operation == "/") {
        out = subtract(num1, num2);
        cout<<out<<endl;
    } else {
        cout << "Error";
    }

    return 0;
}
