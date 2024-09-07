#ifndef __INCLUDE__H__
#define __INCLUDE__H__
#include <iostream>
#include <vector>

namespace choices{
    enum choice{
        ADD=1,
        SRCH,
        DIS, 
        EXI
    };   
};

class LibraryCat;

void mainmenu(LibraryCat Cat);


class Book{
    private:
    std::string title;
    std::string author;
    int year;

    public:
    Book(std::string title, std::string author, int year) : title(title), author(author), year(year){}

    std::string getTitle() const{
        return title;
    }

    std::string getAuthor() const{
        return author;
    }

    int getYear() const{
        return year;
    }


    void displayInfo(){
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Year: " << year << std::endl;
        std::cout << "<------------------------------>" << std::endl;
    }


    ~Book(){}
    
};

class LibraryCat{
    private:    
    std::vector<Book*> books;

    public:
    void addBook(){
        std::string tit, name;
        int yr;
        std::cout << "Enter Book Title: " << std::endl;
        std::cin >> tit;
        std::cout << "Enter Author Name: " << std::endl;
        std::cin >> name;
        std::cout << "Enter Year of the Book: " << std::endl;
        std::cin >> yr;
        books.push_back(new Book(tit, name, yr));
        
    }

    void searchbyauthor(){
        std::string name;
        std::cout << "Enter Author Name: " << std::endl;
        std::cin >> name;
        for (const auto& book : books){
            if(book->getAuthor() == name)
            {
                book->displayInfo();
               
            }
        }

    }

    void displayallbooks() const{
        std::cout << "Displaying all available books.... " << std::endl;
        std::cout << "<------------------------------>" << std::endl;
        for (const auto& book : books) {
            book->displayInfo();
        }
    }



};



#endif  //!__INCLUDE__H__

