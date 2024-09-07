#include <iostream>
#include <ostream>
#include "include.hpp"

void mainmenu(LibraryCat Cat){
    int ch;
    
    do{
    std::cout << "Main MENU: " << std::endl;
    std::cout << "1. Add Book" << std::endl;
    std::cout << "2. Search by Author" << std::endl;
    std::cout << "3. Display Catalog" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cin >> ch;

    switch (ch) {
        case choices::ADD:
            Cat.addBook();
            std::cout << "<------------------------------>" << std::endl;
            break;
        case choices::SRCH:
            Cat.searchbyauthor();
            std::cout << "<------------------------------>" << std::endl;
            break;
        case choices::DIS:
            Cat.displayallbooks();
            break;
        case choices::EXI:
            std::cout << "Exiting..." << std::endl;
            break;
        default:
            std::cout << "Wrong Choice. Try Again" << std::endl;
    }



    }while(ch!=4);
    
}