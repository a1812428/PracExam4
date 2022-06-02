#ifndef BARNESNOBLE_H
#define BARNESNOBLE_H

#include<string>
using namespace std;

// class definition of BarnesNoble
#include "BookStore.h"
#include "Dymocks.h"

class BarnesNoble : public Dymocks {

    private:
        int numSoldBooks;

    public:
        BarnesNoble();
        BarnesNoble(string n);
        void soldBook();
        int get_numSoldBooks();
};

#endif //BARNESNOBLE_H