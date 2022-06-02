#include "BookStore.h"
#include "Dymocks.h"
#include <iostream>
using namespace std;

int Dymocks::nextNumStores = 0;

Dymocks::Dymocks() : BookStore(){
    this->storeId = Dymocks::nextNumStores;
    this->set_nextNumStores(Dymocks::nextNumStores + 1);
}

Dymocks::Dymocks(bool a) : BookStore("Dymocks", "", 1000){
    this->isOnline = a;
}
void Dymocks::set_storeId(int s){
    this->storeId = s;
}
void Dymocks::set_isOnline(bool isOnline){
    this->isOnline = isOnline;
}

void Dymocks::set_nextNumStores(int nextNumStores){
    Dymocks::nextNumStores = nextNumStores;
}

int Dymocks::get_storeId(){
    return this->storeId;
}

bool Dymocks::get_isOnline(){
    return this->isOnline;
}

int Dymocks::get_nextNumStores(){
    return Dymocks::nextNumStores;
}

float Dymocks::get_onlineTax(){
    if(this->isOnline){
        return 500;
    }
    else{
        return 0;
    }
}