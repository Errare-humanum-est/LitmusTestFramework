//
// Created by tux on 3/28/22.
//

#include "MP_T0.h"

MP_T0::MP_T0(std::atomic<int> * x, std::atomic<int> * y): x(x), y(y){}

void MP_T0::run() {
    //std::cout << "T0";
    x->store(1, std::memory_order_relaxed);
    y->store(1, std::memory_order_relaxed);
}

bool MP_T0::check() {
    return true;
}