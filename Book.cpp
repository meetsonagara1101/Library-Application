// Final Project
// Library Application Tester
// File  LibAppMain.cpp
// Version 1.0
// Author   Fardad Soleimanloo
// Revision History
// -----------------------------------------------------------
// Name               Date                 Reason
//
/////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include "Book.h"
#include <iostream>
#include <iomanip>
#include <cstring>

namespace sdds {
    Book::Book() {
        author_name = nullptr;
    }

    Book::Book(const Book &src) {
        *this = src;
    }

    Book &Book::operator=(const Book &src) {
        Publication::operator=(src);
        if(author_name) {
            delete[] author_name;
            author_name = nullptr;
        }

        if(src.author_name != nullptr) {
            author_name = new char[strlen(src.author_name) + 1];
            strcpy(author_name, src.author_name);
        } else {
            author_name = nullptr;
        }
        return *this;
    }

    Book::~Book() {
        delete[] author_name;
    }

    bool Book::conIO(std::ios &io) const {
        return &io == &std::cin || &io == &std::cout;
    }

    char Book::type() const {
        return 'B';
    }

    std::ostream &Book::write(std::ostream &os) const {
        Publication::write(os);
        if(conIO(os)) {
            os << " ";
            int i = 0;
            for(i = 0; i < SDDS_AUTHOR_WIDTH; i++) {
                if(author_name[i] == '\0') {
                    break;
                } else {
                    os << author_name[i];
                }
            }
            for(i = i; i < SDDS_AUTHOR_WIDTH; i++) {
                os << " ";
            }
            os << " |";
        } else {
            os << '\t' << author_name;
            os << '\n';
        }
        return os;
    }

    std::istream &Book::read(std::istream &is) {
        char temp[256]{};

        Publication::read(is);

        if(author_name) {
            delete[] author_name;
        }
        author_name = nullptr;

        if(conIO(is)) {
            is.ignore();
            std::cout << "Author: ";
            is.getline(temp, 256);
        } else {
            is.ignore();
            is.get(temp, 256);
        }

        if(is) {
            author_name = new char[strlen(temp) + 1];
            strcpy(author_name, temp);
        }
        return is;
    }

    void Book::set(int member_id) {
        Publication::set(member_id);
        resetDate();
    }

    Book::operator bool() const {
        if(author_name != nullptr && Publication::operator bool()) {
            return true;
        } else return false;
    }


}

