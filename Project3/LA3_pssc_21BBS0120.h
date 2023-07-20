#pragma once
#include<stdio.h>
#include<iostream>
using namespace std;

void fn_pssc_encryption_IS2023F1031_21BBS0120() {
    char word[100];
    char key[100];

    printf("Enter the word to encrypt: ");
    cin >> word;

    printf("Enter the key: ");
    cin >> key;
    int wordLen = strlen(word);
    int keyLen = strlen(key);

    for (int i = 0; i < wordLen; i++) {
        if (isalpha(word[i])) {
            int row = toupper(key[i % keyLen]) - 'A';
            int col = toupper(word[i]) - 'A';

            word[i] = tolower((row + col) % 26 + 'A');
        }
    }
    printf("The encrypted string is %s\n", word);

}

void fn_pssc_decryption_IS2023F1031_21BBS0120() {
    char word[100];
    char key[100];

    cout << "Enter the word to decrypt: ";
    cin >> word;

    cout << "Enter the key: ";
    cin >> key;

    int wordLen = strlen(word);
    int keyLen = strlen(key);

    for (int i = 0; i < wordLen; i++) {
        if (isalpha(word[i])) {
            int row = toupper(key[i % keyLen]) - 'A';
            int col = toupper(word[i]) - 'A';

            int decryptedChar = (col - row + 26) % 26;
            word[i] = tolower(decryptedChar + 'a');
        }
    }

    cout << "The decrypted string is" << word << endl;

}