#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\n============================\n";
        cout << "     GIT TEAM CALCULATOR\n";
        cout << "============================\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Square Root\n";
        cout << "6. Average\n";
        cout << "7. Exit\n";
        cout << "============================\n";

        cout << "Enter your choice: ";
        cin >> choice;

        double firstNumber;
        double secondNumber;

        switch (choice)
        {
        case 1:
            cout << "Enter first number: ";
            cin >> firstNumber;

            cout << "Enter second number: ";
            cin >> secondNumber;

            cout << "Result: "
                 << firstNumber + secondNumber << "\n";
            break;

        case 2:
            cout << "Enter first number: ";
            cin >> firstNumber;

            cout << "Enter second number: ";
            cin >> secondNumber;

            cout << "Result: "
                 << firstNumber - secondNumber << "\n";
            break;

        case 3:
            cout << "Enter first number: ";
            cin >> firstNumber;

            cout << "Enter second number: ";
            cin >> secondNumber;

            cout << "Result: "
                 << firstNumber * secondNumber << "\n";
            break;

        case 4:
            cout << "Enter first number: ";
            cin >> firstNumber;

            cout << "Enter second number: ";
            cin >> secondNumber;

            if (secondNumber == 0)
            {
                cout << "Error: Division by zero is not allowed.\n";
            }
            else
            {
                cout << "Result: "
                     << firstNumber / secondNumber << "\n";
            }

            break;

        case 5:
            cout << "Enter a number: ";
            cin >> firstNumber;

            if (firstNumber < 0)
            {
                cout << "Error: Cannot calculate square root "
                        "of a negative number.\n";
            }
            else
            {
                cout << "Result: "
                     << sqrt(firstNumber) << "\n";
            }

            break;

        case 6:
            cout << "Enter first number: ";
            cin >> firstNumber;

            cout << "Enter second number: ";
            cin >> secondNumber;

            cout << "Average: "
                 << (firstNumber + secondNumber) / 2 << "\n";
            break;

        case 7:
            cout << "Exiting calculator...\n";
            break;

        default:
            cout << "Invalid choice. Please select 1 to 8.\n";
        }

    } while (choice != 7);

    return 0;
}