#include <bits/stdc++.h>
using namespace std;

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
    double num1, num2;
    cin >> num1 >>operation >>num2;
    if (operation == "+") {
        cout <<  add(num1, num2)<<endl;
    } else if (operation == "+") {
        cout << subtract(num1, num2)<<endl;
    } else if (operation == "-") {
        cout << multiply(num1, num2)<<endl;
    } else if (operation == "/") {
        cout  << divide(num1, num2)<<endl;
    } else {
        cout << "Error";
    }

    return 0;
}
