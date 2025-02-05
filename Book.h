
#ifndef SDDS_BOOK_H
#define SDDS_BOOK_H

#include "Publication.h"
#include "Date.h"
#include "Lib.h"

namespace sdds {
    class Book : public Publication {
        char* author_name;
    public:
        Book();
        Book(const Book& src);
        Book& operator=(const Book& src);
        ~Book();
        bool conIO(std::ios& io) const;
        char type() const;
        std::ostream& write(std::ostream& os) const;
        std::istream& read(std::istream& is);
        void set(int member_id);
        operator bool() const;
    };
}


#endif //SDDS_BOOK_H
