//
// Created by tux on 3/28/22.
//

#include "IRIW_T3.h"

IRIW_T3::IRIW_T3(std::atomic<int> * x, std::atomic<int> * y): x(x), y(y){}

void IRIW_T3::run() {
    r0 = y->load(std::memory_order_relaxed);
    r1 = x->load(std::memory_order_relaxed);
}

bool IRIW_T3::check() const{
    if (r0 == 1 and r1 == 0){
        return false;
    }
    return true;
}