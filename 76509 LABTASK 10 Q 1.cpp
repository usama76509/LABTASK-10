#include <iostream>
using namespace std;

int main() {
    int choice;
    int a, b;

    do {
    cout << "\n---- MENU ----\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Exit\n";
    cout << "Enter choice: ";
	cin >> choice;

    if (choice >= 1 && choice <= 4) {
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    }

    switch (choice) {
    case 1:
    cout << "Result = " << a + b << endl;
	break;
    case 2:
    cout << "Result = " << a - b << endl;
    break;
    case 3:
    cout << "Result = " << a * b << endl;
    break;
    case 4:
    if (b != 0)
    cout << "Result = " << a / b <<endl;
	else
    cout << " Division by zero.\n";
    break;
    case 5:
    cout << "Exiting\n";
    break;
    default:
    cout << "Invalid choice!\n";
    }
    } while (choice != 5);
    return 0;
}

