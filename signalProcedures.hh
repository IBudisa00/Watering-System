#include <iostream>
#include "signals.hh"

void handleShutdown(){
    std::cout << "Shutting down system...\n";
}

void handleEstablishCommCfm(){
    std::cout << "Communication established successfully.\n";
}

void handleEstablishCommRej(){
    std::cout << "Communication establishing failed.\n";
    std::cout << "Units communication unavailable.\n";
    //sendSignal(SHUTDOWN, receiver);
}