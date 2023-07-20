#pragma once
#include<iostream>
using namespace std;

void fn_bci_encryption_IS2023F1031_21BBS0120() {
    string message;
    int key;

    cout << "Enter the message: ";
    cin >> message;
    cout << "Enter the key: ";
    cin >> key;
    int length = message.length();
    int numCols = (length + key - 1) / key;
    string encrypted = "";

    if (length % key != 0) {
        int numPadding = key - (length % key);
        message.append(numPadding, 'x');
        length += numPadding;
    }

    reverse(message.begin(), message.end());

    for (int i = 0; i < key; i++) {
        for (int j = 0; j < numCols; j++) {
            encrypted += message[j * key + i];
        }
    }

    cout << "The encrypted string is \n" << encrypted << endl;

}

void fn_bci_decryption_IS2023F1031_21BBS0120() {
    string message;
    int key;
    cout << "Enter the encrypted text: ";
    cin >> message;
    cout << "Enter the key: ";
    cin >> key;
    int length = message.length();
    int numCols = length / key;
    string decrypted = "";

    for (int i = 0; i < numCols; i++) {
        for (int j = 0; j < key; j++) {
            decrypted += message[j * numCols + i];
        }
    }

    reverse(decrypted.begin(), decrypted.end());

    while (!decrypted.empty() && decrypted.back() == 'x') {
        decrypted.pop_back();
    }

    cout << "The decrypted string is \n" << decrypted;
}