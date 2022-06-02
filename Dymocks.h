#ifndef DYMOCKS_H
#define DYMOCKS_H

#include "BookStore.h"

class Dymocks : public BookStore {

    private:
        int storeId;
        bool isOnline;
        static int nextNumStores;

    public:
        Dymocks();
        Dymocks(bool a);
        void set_storeId(int s);
        void set_isOnline(bool isOnline);
        void set_nextNumStores(int nextNumStores);
        int get_storeId();
        bool get_isOnline();
        int get_nextNumStores();
        float get_onlineTax();
};

#endif //DYMOCKS_H