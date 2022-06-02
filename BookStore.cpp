#include "BookStore.h"
#include <iostream>
using namespace std;

BookStore::BookStore(){

}
BookStore::BookStore(string n, string a, int b){
    this->name = n;
    this->address = a;
    this->numBook = b;
}

void BookStore::set_numBook(int b){
    this->numBook = b;
}

void BookStore::set_name(string n){
    this->name = n;
}
void BookStore::set_address(string a){
    this->address = a;
}
int BookStore::get_numBook(){
    return this->numBook;
}

string BookStore::get_name(){
    return this->name;
}

string BookStore::get_address(){
    return this->address;
}