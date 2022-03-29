//
// Created by tux on 3/28/22.
//

#include "LB_T0.h"
LB_T0::LB_T0(std::atomic<int> * x, std::atomic<int> * y): x(x), y(y){}

void LB_T0::run() {
    //std::cout << "T0";
    r0 = x->load(std::memory_order_relaxed);
    y->store(1, std::memory_order_relaxed);
}

bool LB_T0::check() const {
    if (r0 == 1){
        return true;
    }
    return false;
}