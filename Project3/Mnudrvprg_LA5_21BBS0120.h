#pragma once
#include <stdio.h>
#include <stdlib.h>
#include"colors.h"
#include"Mnudrvprg_LA1_21BBS0120.h"
#include"menudrvprg_caesar_cipher_1.h"
#include"Mnudrvprg_caesar_cipher_2.h"
#include"Mnudrvprg_caesar_cipher_3.h"
#include"Mnudrvprg_LA3_IS2023F1031_21BBS0120.h"
#include"Mnudrvprg_LA4_IS2023F1031_21BBS0120.h"
int fn_main_page() {
	int i;
	while (1) {

		printf("\n");
		fn_red();
		printf("*************************************************************************************************************************************\n");
		fn_reset();
		fn_blue();
		printf("\t\t\t\t\t\t\t   CBS3002-INFORMATION SECURITY\n");
		printf("\t\t\t\t\t\t\t\t\tBY\n");
		fn_reset();
		fn_yellow();
		printf("\n");
		printf("\t\t\t\t\t\t\t  Reg.No:21BBS0120  Name : TARUN AADITYA\n");
		printf("\n");
		fn_reset();
		fn_blue();
		printf("\t\t\t\t\t\t\tSubmitted as part of Lab assessment to\n");
		fn_magenta();
		printf("\t\t\t\t\t\t\t\tDr.M.RAJASEKHARA BABU\n");
		fn_reset();
		fn_blue();
		printf("\t\t\t\t\t\t\tSCHOOL OF COMPUTER SCIENCE AND ENGINEERING \n");
		printf("\t\t\t\t\t\t    VELLORE INSTITUTE OF TECHNOLOGY(VIT),VELLORE-632014\n");
		printf("\t\t\t\t\t\t\t\t    JULY 2023\n");
		fn_reset();
		fn_red();
		printf("*************************************************************************************************************************************\n");
		fn_reset();
		fn_green();
		printf("0-Exit\t 1-Hello world Program\t 2-Caesar Cipher1 Program\t 3-Caesar Cipher2 Program\t 4-Caesar Cipher3 Program\n");
		printf("\n");
		printf("5-Stream Cipher Program\t 6-Block Cipher Program\n");
		fn_reset();
		fn_yellow();
		printf("-------------------------------------------------------------------------------------------------------------------------------------\n");
		fn_reset();
		printf("\nEnter your choice \n");
		scanf_s("%d", &i);
		switch (i) {
		case 0: {
			printf("Thank you for opting exit \n");
			return 0;
		}
		case 1: {
			printf("************************************************************************************************************************************************************\n");
			fn_magenta();
			printf("\nHello world Program\n");
			fn_reset();
			printf("************************************************************************************************************************************************************\n");
			fn_magenta();
			fn_mnudrvprg_LA1_21BBS0120();
			fn_reset();
			break;
		}
		case 2: {
			printf("************************************************************************************************************************************************************\n");
			fn_yellow();
			printf("\nCaesar Cipher1 Program\n");
			fn_reset();
			printf("************************************************************************************************************************************************************\n");
			fn_yellow();
			fn_menuDriven_ceaserCipher1();
			fn_reset();
			break;
		}
		case 3: {
			printf("************************************************************************************************************************************************************\n");
			fn_blue();
			printf("\nCaesar Cipher2 Program\n");
			fn_reset();
			printf("************************************************************************************************************************************************************\n");
			fn_blue();
			fn_menuDriven_ceaserCipher2();
			fn_reset();
			break;
		}
		case 4: {
			printf("************************************************************************************************************************************************************\n");
			fn_magenta();
			printf("\nCaesar Cipher3 Program\n");
			fn_reset();
			printf("************************************************************************************************************************************************************\n");
			fn_magenta();
			fn_menuDriven_ceaserCipher3();
			fn_reset();
			break;
		}
		case 5: {
			printf("************************************************************************************************************************************************************\n");
			fn_green();
			printf("\nStream Cipher Program Program\n");
			fn_reset();
			printf("************************************************************************************************************************************************************\n");
			fn_green();
			fn_mnudrvprg_LA3_IS2023F1031_21BBS0120();
			fn_reset();
			break;
		}
		case 6: {
			printf("************************************************************************************************************************************************************\n");
			fn_yellow();
			printf("\nBlock Cipher Program Program\n");
			fn_reset();
			printf("************************************************************************************************************************************************************\n");
			fn_yellow();
			fn_mnudrvprg_LA4_IS2023F1031_21BBS0120();
			fn_reset();
			break;
		}
		default: {
			printf("************************************************************************************************************************************************************\n");
			fn_red();
			printf("Opted wrong choice \n");
			fn_reset();
			printf("************************************************************************************************************************************************************\n");
			exit(0);

		}
		}
	}
	return 0;
}