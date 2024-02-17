#include <bits/stdc++.h>
using namespace std;

void plus_(int num1, int num2, char operation) {
    cout << num1 + num2 << endl;
}
void minusa(int num1, int num2, char operation) {
    cout << num1 - num2 << endl;
}
void multiply(int num1, int num2, char operation) {
    cout << num1 * num2 << endl;
}
void divide(int num1, int num2, char operation) {
    cout << num1 / num2 << endl;
}

int num1, num2;
int main() {
    char operation;
    cin >> num1 >> operation >> num2;
    switch (operation) {
        case '+':

            plus_(num1, num2, operation);
            break;
        case '-':

            minusa(num1, num2, operation);
            break;
        case 'x':

            multiply(num1, num2, operation);
            break;
        case '/':

            if (num2 != 0) {
                divide(num1, num2, operation);
            } else {
                cout << "Error: Division by zero is undefined." << endl;
            }
            break;
    }
}
