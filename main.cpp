#include <iostream>
#include <string>
#include "notepad.h"
using namespace std;

int main() {
    int choice;
    string filename;

    do {
        cout << "\nSIMPLE NOTEPAD\n";
        cout << "1. Write File\n";
        cout << "2. Read File\n";
        cout << "3. Append File\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        cout << "Enter filename: ";
        cin >> filename;

        switch (choice) {
            case 1:
                writeFile(filename);
                break;
            case 2:
                readFile(filename);
                break;
            case 3:
                appendFile(filename);
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
