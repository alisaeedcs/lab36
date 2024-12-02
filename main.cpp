#include <iostream>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

void outputMenu();

int main() {
    IntBinaryTree tree;

    ifstream input("codes.txt");
    string line;

    int choice;

    do {
        outputMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
            
        }
    } while (choice != 5);

    input.close();





    return 0;
}

void outputMenu() {
    cout << "BST Menu" << endl;
    cout << "1. Add record\n";
    cout << "2. Delete record\n";
    cout << "3. Search for record\n";
    cout << "4. Output records\n";
    cout << "5. Exit\n";
}