#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

void showMenu() {
    cout << "\nC++ CALCULATOR\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulus (%)\n";
    cout << "0. Exit\n";
    cout << "\n";
    cout << "Enter your choice: ";
}

double getNumber(const string &prompt) {
    double value;
    cout << prompt;
    while (!(cin >> value)) {
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return value;
}

int main() {
    int choice;
    double a, b;

    do {
        showMenu();
        while (!(cin >> choice)) {
            cout << "Invalid choice. Enter a number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (choice) {
            case 1:
                a = getNumber("Enter first number: ");
                b = getNumber("Enter second number: ");
                cout << "Result: " << (a + b) << endl;
                break;

            case 2:
                a = getNumber("Enter first number: ");
                b = getNumber("Enter second number: ");
                cout << "Result: " << (a - b) << endl;
                break;

            case 3:
                a = getNumber("Enter first number: ");
                b = getNumber("Enter second number: ");
                cout << "Result: " << (a * b) << endl;
                break;

            case 4:
                a = getNumber("Enter numerator: ");
                b = getNumber("Enter denominator: ");
                if (b == 0)
                    cout << "Error: Division by zero is undefined.\n";
                else
                    cout << "Result: " << (a / b) << endl;
                break;

            case 5:
                a = getNumber("Enter first number: ");
                b = getNumber("Enter second number: ");
                if (b == 0)
                    cout << "Error: Modulus by zero is undefined.\n";
                else
                    cout << "Result: " << fmod(a, b) << endl;
                break;

            case 0:
                cout << "Exiting calculator. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice, please try again.\n";
        }

    } while (choice != 0);

    return 0;
}