#include <iostream>
#include <fstream>
#include <string>
#include "notepad.h"
using namespace std;

void writeFile(string filename) {
    ofstream file(filename);
    if (!file) {
        cout << "Error creating file.\n";
        return;
    }
    cout << "Type text (END to stop):\n";
    string line;
    while (true) {
        getline(cin >> ws, line);
        if (line == "END") break;
        file << line << endl;
    }
    file.close();
    cout << "File saved successfully.\n";
}

void readFile(string filename) {
    ifstream file(filename);
    if (!file) {
        cout << "File not found.\n";
        return;
    }
    cout << "File contents:\n";
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

void appendFile(string filename) {
    ofstream file(filename, ios::app);
    if (!file) {
        cout << "File not found.\n";
        return;
    }
    cout << "Type text to append (END to stop):\n";
    string line;
    while (true) {
        getline(cin >> ws, line);
        if (line == "END") break;
        file << line << endl;
    }
    file.close();
    cout << "Text appended successfully.\n";
}
