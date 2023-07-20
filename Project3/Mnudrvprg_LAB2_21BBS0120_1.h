#pragma once
#include <stdio.h>
#include<iostream>

#include"caesar_cipher_2.h"
using namespace std;

int fn_menuDriven_ceaserCipherx() {
	int choice;
	cout << "***************************************************************************" << endl;
	cout << "CBS3002 Information Security Lab" << endl;
	cout << "Lab Assessment 2" << endl;
	cout << "CAESER CIPHER (CC)" << endl;
	cout << "Reg.No: 21BBS0120" << endl;
	cout << "Name: TARUN AADITYA " << endl;
	cout << "Date: 26/06/23" << endl;
	cout << "Venue: SJT 416" << endl;
	cout << "***************************************************************************" << endl;
	printf("List of choices\n");
	printf("0-exit\n 1-Encryption Pogram (CC) \n 2-Decryption Program (CC)\n ");
	printf("Enter your choice ");
	scanf_s("%d", &choice);

	switch (choice)
	{
	case(0):
		return 0;
	case(1):
		fn_encryption3();
		break;

	case(2):
		fn_decryption3();
		break;


	}


}