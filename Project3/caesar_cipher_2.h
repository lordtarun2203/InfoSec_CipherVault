#pragma once
#pragma warning(disable:4996)
#include<stdio.h>
#include<ctype.h>


void fn_encryption3()
{
	char text[500];
	char ch;
	int key;
	int i;

	printf("Enter a message to encrypt:   ");
	scanf(" %s", &text);
	printf("Enter the key  :   ");
	scanf(" %d", &key);

	for (i = 0; text[i] != '\0'; i++) {

		ch = text[i];

		if (isalnum(ch)) {
			if (islower(ch)) {
				ch = (ch - 'a' + key) % 26 + 'a';
			}
			if (isupper(ch)) {
				ch = (ch - 'A' + key) % 26 + 'A';

			}
			if (isdigit(ch))
				ch = (ch - '0' + key) % 10 + '0';


		}
		else
		{
			printf("Invalid message");
		}
		text[i] = ch;

	}
	printf("Encrypted message %s", text);



}


void fn_decryption3()
{
	char text[500];
	char ch;
	int key;
	int i;

	printf("Enter a message to decrypt :   ");
	scanf(" %s", &text);
	printf("Enter the key:   ");
	scanf(" %d", &key);

	for (i = 0; text[i] != '\0'; i++) {

		ch = text[i];

		if (isalnum(ch)) {
			if (islower(ch)) {
				ch = (ch - 'a' - key) % 26 + 'a';
			}
			if (isupper(ch)) {
				ch = (ch - 'A' - key) % 26 + 'A';

			}
			if (isdigit(ch))
				ch = (ch - '0' - key) % 10 + '0';


		}
		else
		{
			printf("Invalid message");
		}
		text[i] = ch;

	}
	printf("decrypted message %s", text);



}


// small letter encrypr-> (ch-'a'+key)%26 +'a'; (ch - 'a'-key+26)%26+'a'
// capital letters ->  (ch-'A'+key)%26 +'A' ; (ch - 'A'-key+26)%26+'A'
//Digits												-key + 10)%26+'0'
