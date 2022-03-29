//
// Created by tux on 3/28/22.
//

#include "IRIW_T2.h"

IRIW_T2::IRIW_T2(std::atomic<int> * x, std::atomic<int> * y): x(x), y(y){}

void IRIW_T2::run() {
    y->store(1, std::memory_order_relaxed);
}

bool IRIW_T2::check() {
    return true;
}