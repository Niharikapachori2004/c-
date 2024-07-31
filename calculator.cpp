#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char op;

    // Taking input from the user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    // Performing the corresponding arithmetic operation
    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero" << endl;
            break;
        case '%':
            if (static_cast<int>(num2) != 0)
                cout << "Result: " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
            else
                cout << "Error: Division by zero" << endl;
            break;
        default:
            cout << "Error: Invalid operator" << endl;
    }

    return 0;
}

