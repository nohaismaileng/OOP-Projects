#include <iostream>
#include <cctype>
#include "calculator.h"

using namespace std;

int main()
{
    char choice;
    int attempts = 0;

    while (attempts < 3)
    {
        std::cout << "\n===== MULTI-PURPOSE CALCULATOR =====\n";
        std::cout << "C - Basic Calculator\n";
        std::cout << "S - Trig Calculator\n";
        std::cout << "P - Programmer Calculator\n";
        std::cout << "E - Exit\n";
        std::cout << "Enter your choice: ";

        std::cin >> choice;
        choice = toupper(choice);

        if (choice == 'E')
        {
            std::cout << "Program exited.\n";
            break;
        }

        if (choice == 'C')
        {
            Calculator_Base basic;
            basic.Display();

            char operation;

            std::cout << "\nChoose operation:\n";
            std::cout << "A - Add\n";
            std::cout << "S - Subtract\n";
            std::cout << "M - Multiply\n";
            std::cout << "D - Divide\n";
            std::cout << "R - Modulus\n";
            std::cout << "Enter operation: ";

            std::cin >> operation;
            operation = toupper(operation);

            if (operation == 'A')
            {
                basic.add();
            }
            else if (operation == 'S')
            {
                basic.sub();
            }
            else if (operation == 'M')
            {
                basic.multiply();
            }
            else if (operation == 'D')
            {
                basic.divide();
            }
            else if (operation == 'R')
            {
                basic.modulus();
            }
            else
            {
                std::cout << "Invalid operation!\n";
            }

            attempts = 0;
        }

        else if (choice == 'S')
        {
            Trig_Calculator scientific;
            scientific.Display();

            char operation;

            std::cout << "\nChoose operation:\n";
            std::cout << "S - Sin\n";
            std::cout << "C - Cos\n";
            std::cout << "T - Tan\n";
            std::cout << "Enter operation: ";

            std::cin >> operation;
            operation = toupper(operation);

            if (operation == 'S')
            {
                scientific.sin_angle();
            }
            else if (operation == 'C')
            {
                scientific.cos_angle();
            }
            else if (operation == 'T')
            {
                scientific.tan_anlge();
            }
            else
            {
                std::cout << "Invalid operation!\n";
            }

            attempts = 0;
        }

        else if (choice == 'P')
        {
            Programmer_Calculator programmer;
            programmer.Display();

            char operation;

            std::cout << "\nChoose operation:\n";
            std::cout << "H - Hexadecimal to Decimal\n";
            std::cout << "D - Decimal to Hexadecimal\n";
            std::cout << "Enter operation: ";

            cin >> operation;
            operation = toupper(operation);

            if (operation == 'H')
            {
                programmer.Hex_to_Dec();
            }
            else if (operation == 'D')
            {
                programmer.Dec_to_Hex();
            }
            else
            {
                std::cout << "Invalid operation!\n";
            }

            attempts = 0;
        }

        else
        {
            attempts++;

            std::cout << "Invalid choice!\n";
            std::cout << "Attempts remaining: " << 3 - attempts << endl;

            if (attempts == 3)
            {
                std::cout << "Too many invalid attempts. Program exited.\n";
            }
        }
    }

    return 0;
}
