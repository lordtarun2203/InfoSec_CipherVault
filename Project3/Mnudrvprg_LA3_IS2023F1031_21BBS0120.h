#pragma once
#include <iostream>
#include"LA3_pssc_21BBS0120.h"
#include"colors.h"


using namespace std;

int fn_mnudrvprg_LA3_IS2023F1031_21BBS0120() {
    cout << "*********************" << endl;
    cout << "CBS3002 Information Security Lab" << endl;
    cout << "Lab Assessment 3" << endl;
    cout << "Polyalphabetic Substitution stream cipher (PSSC)" << endl;
    cout << "Reg.No: 21BBS0120" << endl;
    cout << "Name: TARUN AADITYA" << endl;
    cout << "Date: 03/07/23" << endl;
    cout << "Venue: SJT 416" << endl;
    cout << "*********************" << endl;

    int choice = 9;
    fn_red();
    cout << "List of choices" << endl;
    fn_reset();

    cout << "0-Exit" << endl;
    cout << "1-Encryption Program (PSSC)" << endl;
    cout << "2-Decryption Program (PSSC)" << endl;
    cout << "3-Both" << endl;
    while (choice != 0) {
        // Display the menu options
        fn_red();
        cout << "Enter your choice: ";
        fn_reset();

        cin >> choice;

        switch (choice) {
        case 0:
            // Exit the program
            cout << "Exiting the program..." << endl;

            break;
        case 1:
            // Call the encryption function
            fn_pssc_encryption_IS2023F1031_21BBS0120();
            cout << "Running Function Encryption IS2023F1031_120" << endl;
            break;
        case 2:
            // Call the decryption function
            fn_pssc_decryption_IS2023F1031_21BBS0120();
            cout << "Running Function Decryption IS2023F1031_120" << endl;
            break;
        case 3:
            // Call both encryption and decryption functions
            fn_pssc_encryption_IS2023F1031_21BBS0120();
            fn_pssc_decryption_IS2023F1031_21BBS0120();
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }

    return 0;
}