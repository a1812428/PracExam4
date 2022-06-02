#ifndef STORECHAIN_H
#define STORECHAIN_H

#include<string>
using namespace std;

#include "BookStore.h"
#include "Dymocks.h"
#include "BarnesNoble.h"
// class definition of StoreChain
class StoreChain{

    public:
        BookStore ** num;
        StoreChain();
        BookStore **get_bookStores();
        
};

#endif //STORECHAIN_H