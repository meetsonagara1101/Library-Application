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
#ifndef SDDS_LIBAPP_H
#define SDDS_LIBAPP_H
#include <cstring>
#include "Menu.h"
#include "Publication.h"
#include "Lib.h"
namespace sdds {
    class LibApp {
        char m_filename[256];
        Publication *PPA[SDDS_LIBRARY_CAPACITY]{};
        int NOLP;
        int LLRN;

        bool m_changed = false;
        Menu m_publicationMenu{"Choose the type of publication:"};
        Menu m_mainMenu{"Seneca Library Application"};
        Menu m_exitMenu{"Changes have been made to the data, what would you like to do?"};
        bool confirm(const char* message);
        void load();  // prints: "Loading Data"<NEWLINE>
        void save();   // prints: "Saving Data"<NEWLINE>
        int search(int option,char type);  // prints: "Searching for publication"<NEWLINE>
        void returnPub();
        void newPublication();
        void removePublication();
        void checkOutPub();
        Publication* getPub(int libRef);
    public:
        LibApp();
        ~LibApp();
        LibApp(const char filename[256]);
        void run();
    };
}
#endif // !SDDS_LIBAPP_H
