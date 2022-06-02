#ifndef BOOKSTORE_H
#define BOOKSTORE_H

#include<string>
using namespace std;

// class definition of bookstore
class BookStore{
    private:
        string name;
        string address;
        int numBook;

    public:
        BookStore();
        BookStore(string n, string a, int b);
        void set_numBook(int b);
        void set_name(string n);
        void set_address(string a);
        int get_numBook();
        string get_name();
        string get_address();
        virtual float get_onlineTax() = 0;
};

#endif //BOOKSTORE_H