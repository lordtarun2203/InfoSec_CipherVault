#include <iostream>
#include"LA1_21BBS0120.h"
#include"colors.h"
#include <cstdlib>
#include <cstring>

int fn_mnudrvprg_LA1_21BBS0120()
{
    std::cout << "Menu:" << std::endl;
    std::cout << "0. Exit" << std::endl;
    std::cout << "1. Hello World" << std::endl;
    std::cout << "Enter your choice : ";

    int choice = 9;
    std::cin >> choice;

    switch (choice) {
    case 0:
        fn_green();
        // Exit the program
        std::cout << "Exiting the program...\n";
        fn_reset();
        break;
    case 1:
        fn_blue();
        fn_helloworld_21BBS0120();
        std::cout << "\033[0m";
        fn_reset();
        break;

    default:
        fn_red();
        std::cout << "Invalid choice! Please try again." << std::endl;
        fn_reset();
        break;
    }

    return 0;
}