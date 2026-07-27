#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0; // Return 0 or handle the error as needed
    }
    return a / b;
}

int remainder(int a, int b)
{
    if (b ==0){
        cout << "Error: Division by zero!" << endl;
        return 0; // Return 0 or handle the error as needed
    }
    return a % b;
}

int power (int a, int b) {
    int result = 1;
    for (int i = 0; i < b; ++i) {
        result *= a;
    }
    return result;
}



int main() {

    int choice, num1, num2;
    cout << "Select operation:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Modulus\n";
    cout << "6. Power\n";
    //cout << "7. Factorial\n";
    cin >> choice;
    
    switch (choice)
    {
    case 1:
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
        cout << "Result: " << add(num1, num2) << endl;
        break;
    case 2:
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
        cout << "Result: " << subtract(num1, num2) << endl;
        break;
    case 3:
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
        cout << "Result: " << multiply(num1, num2) << endl;
        break;
    case 4:
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
        cout << "Result: " << divide(num1, num2) << endl;
        break;
    case 5:
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
        cout << "Result: " << remainder(num1, num2) << endl;
        break;
        case 6:
        cout << "Enter two numbers: ";
    cin >> num1 >> num2;
        cout << "Result: " << power(num1, num2) << endl;
        break;
        /*
    case 7:
        cout << "Enter a number: ";
        cin >> num1;
        cout << "Result: " << factorial(num1) << endl;
        break;
        */
    default:
        cerr << "Invalid choice!" << endl;
    }
    return 0;
}

