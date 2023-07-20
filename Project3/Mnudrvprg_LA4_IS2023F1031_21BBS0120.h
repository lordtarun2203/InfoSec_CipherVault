#pragma once
#include<iostream>
#include"LA4_cbi_21BBS0120.h"
#include"colors.h"
using namespace std;


int fn_mnudrvprg_LA4_IS2023F1031_21BBS0120() {
	cout << "***" << endl;
	cout << "CBS3002 Information Security Lab" << endl;
	cout << "Lab Assessment 4" << endl;
	cout << "Block cipher (BCI)" << endl;
	cout << "Reg.No: 21BBS0129" << endl;
	cout << "Name: TARUN AADITYA" << endl;
	cout << "Date: 10/07/23" << endl;
	cout << "Venue: SJT 416" << endl;
	cout << "***" << endl;
	int choice;
	fn_red();
	cout << "List of choices" << endl;
	fn_reset();
	cout << "0 - Exit" << endl;
	cout << "1 - Encryption" << endl;
	cout << "2 - Decryption " << endl;
	cout << "3 - Both" << endl;
	fn_red();
	cout << "Enter your choice: ";
	fn_reset();
	cin >> choice;

	while (choice != 0) {
		switch (choice) {
		case 0:
			return 0;

		case 1:
			fn_blue();
			fn_bci_encryption_IS2023F1031_21BBS0120();
			fn_reset();
			break;
		case 2:
			fn_green();
			fn_bci_decryption_IS2023F1031_21BBS0120();
			fn_reset();
			break;
		case 3:
			fn_magenta();
			fn_bci_encryption_IS2023F1031_21BBS0120();
			fn_bci_decryption_IS2023F1031_21BBS0120();
			fn_reset();
			break;
		}
		cout << endl;
		cout << "Enter the choice again : ";
		cin >> choice;
	}


}