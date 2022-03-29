//
// Created by tux on 3/28/22.
//

#include "LB_T1.h"
LB_T1::LB_T1(std::atomic<int> * x, std::atomic<int> * y): x(x), y(y){}

void LB_T1::run() {
    //std::cout << "T1";
    r0 = y->load(std::memory_order_relaxed);
    x->store(1, std::memory_order_relaxed);
}

bool LB_T1::check() const {
    if (r0 == 1){
        return true;
    }
    return false;
}