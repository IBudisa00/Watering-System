#include "commandUnit.hh"

commandUnit::commandUnit(){
    needWatering = false;
}

bool commandUnit::getNeedWatering(){
    return needWatering;
}