#
#include "StoreChain.h"
#include <iostream>
using namespace std;

StoreChain::StoreChain(){
    this->num = new BookStore*[5];
    this->num[0] = new BarnesNoble("Springfield");
    this->num[1] = new Dymocks(true);
    this->num[2] = new Dymocks(false);
    this->num[3] = new Dymocks(true);
    this->num[4] = new BarnesNoble("Centerville");

}
BookStore** StoreChain::get_bookStores(){
    return this->num;
}