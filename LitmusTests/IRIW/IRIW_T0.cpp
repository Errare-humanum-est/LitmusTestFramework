//
// Created by tux on 3/28/22.
//

#include "IRIW_T0.h"

IRIW_T0::IRIW_T0(std::atomic<int> * x, std::atomic<int> * y): x(x), y(y){}

void IRIW_T0::run() {
    x->store(1, std::memory_order_relaxed);
}

bool IRIW_T0::check() {
    return true;
}