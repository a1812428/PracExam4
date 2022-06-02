#include "BookStore.h"
#include "Dymocks.h"
#include "BarnesNoble.h"
#include <iostream>
using namespace std;


BarnesNoble::BarnesNoble() : Dymocks(){
    this->numSoldBooks = 0;
}

BarnesNoble::BarnesNoble(string n) : Dymocks(false){
    this->set_name(n);
}
void BarnesNoble::soldBook(){
    this->numSoldBooks++;
}
int BarnesNoble::get_numSoldBooks(){
    return this->numSoldBooks;
}