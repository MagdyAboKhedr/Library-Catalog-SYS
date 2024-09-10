#ifndef __INCLUDE__H__
#define __INCLUDE__H__
#include <iostream>
#include <vector>
#include <string>

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


    std::string displayInfo()const{
        std::string full;
        full +=  "Author: "+ author + "," + "Title: " + title + "," + "Year: "+ std::to_string(year) + "\n";
        return full;
    }


    ~Book(){}
    
};

class LibraryCat{
    private:    
    std::vector<Book> books;

    public:

    std::size_t getnumberofbooks(){
        return books.size();
    }
    void addBook(const Book& book){

        // std::cout << "Enter Book Title: " << std::endl;
        // std::cin >> tit;
        // std::cout << "Enter Author Name: " << std::endl;
        // std::cin >> name;
        // std::cout << "Enter Year of the Book: " << std::endl;
        // std::cin >> yr;
        books.push_back(book);
    }

    std::string searchbyauthor(std::string name) const{
        std::string matchingbook;
        for (const Book& book : books){
            if(book.getAuthor() == name)
            {
                matchingbook += book.displayInfo() + "\n";
               
            }

        }
        if (matchingbook.empty()) {
            return "No books found for author: " + name;
        }
        return matchingbook;

    }

    std::string displayallbooks() const{
        std::string full;
        for (const Book& book : books) {
            std::string auth = book.getAuthor();
            std::string title = book.getTitle();
            std::string yr = std::to_string(book.getYear());
            full +=  "Author: "+ auth + "," + "Title: " + title + "," + "Year: "+ yr + "\n";

        }
        return full;
    }



};



#endif  //!__INCLUDE__H__

