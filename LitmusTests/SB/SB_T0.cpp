//
// Created by tux on 3/28/22.
//

#include "SB_T0.h"
SB_T0::SB_T0(std::atomic<int> * x, std::atomic<int> * y): x(x), y(y){}

void SB_T0::run() {
    //std::cout << "T0";
    x->store(1, std::memory_order_relaxed);
    r0 = y->load(std::memory_order_relaxed);
}

bool SB_T0::check() const {
    if (r0 == 1){
        return true;
    }
    return false;
}