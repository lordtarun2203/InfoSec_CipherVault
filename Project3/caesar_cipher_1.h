#pragma once
#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996)

void fn_encryption1()
{

    int i, key = 3;
    char str[100];

    printf("\n Enter a String to be encrypted \n");
    scanf("%s",&str);

    for (i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + key;
    printf("Encrypted message - %s\n", str);
}

void fn_decryption1()
{

    int i, key = 3;
    char str[100];

    printf("\n Enter a String to be decrypted \n");
    scanf("%s",&str);

    for (i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - key;
    printf("Decrypted message - %s\n", str);
}

void fn_encryption2() {
    int i, key = 3;
    char str[100];

    printf("Enter a string\n");
    scanf("%s", &str);

    printf("Enter key\n");
    scanf("%d", &key);

    for (i = 0; i < 100 && str[i] != '\0'; i++) {
        str[i] += key;
    }

    printf("Encrypted msg: %s\n", str);
}

void fn_decryption2() {
    int i, key;
    char str[100];

    printf("Enter a string\n");
    scanf("%s", &str);

    printf("Enter key\n");
    scanf("%d", &key);

    for (i = 0; i < 100 && str[i] != '\0'; i++) {
        str[i] -= key;
    }

    printf("Decrypted msg: %s", str);
}


int fn_print_string(char* str)
{

    printf(str);
    return 0;
}

int fn_get_string_input1()
{
    int i;
    char str[100] = "Hello World";
    fn_print_string(str);
    printf("\n");


    return 0;
}


void fn_get_string_input2()
{
    int i;
    char str[100];
    printf("Enter input string \n");
    gets_s(str);
    fn_print_string(str);


    //return 0;
}