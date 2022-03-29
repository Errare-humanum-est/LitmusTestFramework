//
// Created by tux on 3/28/22.
//

#include "IRIW_T1.h"

IRIW_T1::IRIW_T1(std::atomic<int> * x, std::atomic<int> * y): x(x), y(y){}

void IRIW_T1::run() {
    r0 = x->load(std::memory_order_relaxed);
    r1 = y->load(std::memory_order_relaxed);
}

bool IRIW_T1::check() const{
    if (r0 == 1 and r1 == 0){
        return false;
    }
    return true;
}