//
// Created by tux on 3/28/22.
//

#include "SB_T1.h"
SB_T1::SB_T1(std::atomic<int> * x, std::atomic<int> * y): x(x), y(y){}

void SB_T1::run() {
    //std::cout << "T1";
    y->store(1, std::memory_order_relaxed);
    r0 = x->load(std::memory_order_relaxed);
}

bool SB_T1::check() const {
    if (r0 == 1){
        return true;
    }
    return false;
}