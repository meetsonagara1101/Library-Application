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

#include "Streamable.h"

namespace sdds {
    // Empty virtual destructor to this interface to guaranty that the descendants of the Streamable are removed from memory with no leak
    Streamable::~Streamable(){};

    // Insertion and Extraction operator overloads
    std::ostream& operator<<(std::ostream& os, const Streamable& s) {
        // Object of type Streamable can be written on an ostream object only if the Streamable object is in a valid state
        if (s) {
            s.write(os);
        }
        return os;
    }

    std::istream& operator>>(std::istream& is, Streamable& s) {
        return (s.read(is));
    }
}
