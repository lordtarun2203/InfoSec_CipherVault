#pragma once
#include <stdio.h>
#include<iostream>
#include"caesar_cipher_1.h"
#include"caesar_cipher_2.h"
#include"colors.h"

int fn_menuDriven_ceaserCipher2() {
	int choice;
	std::cout << "***************************************************************************\n";
	std::cout << "CBS3002 Information Security Lab\n";
	std::cout << "Lab Assessment 2\n";
	std::cout << "CAESAR CIPHER (CC)\n";
	std::cout << "Reg.No: 21BBS0120\n";
	std::cout << "Name: TARUN AADITYA\n ";
	std::cout << "Date: 26/06/23\n";
	std::cout << "Venue: SJT 416\n";
	std::cout << "***************************************************************************\n";
	printf("List of choices\n");
	printf("0-exit\n 1-Encryption_2 \n 2-Decryption_2\n ");
	printf("Enter your choice ");
	while (1) {
		printf("\nEnter your choice: ");
		scanf_s("%d", &choice);

		if (choice == 3) {
			printf("Exiting the program.\n");
			break;
		}
		switch (choice)
		{
		case(0):
			return 0;
		case(1):

			fn_encryption2();

			break;

		case(2):

			fn_decryption2();

			break;

		default:

			printf("Invalid choice. Please try again.\n");



		}


	}
}