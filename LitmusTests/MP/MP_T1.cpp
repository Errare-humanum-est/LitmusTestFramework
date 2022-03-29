//
// Created by tux on 3/28/22.
//
#include <iostream>
#include "MP_T1.h"

MP_T1::MP_T1(std::atomic<int> * x, std::atomic<int> * y): x(x), y(y){}

void MP_T1::run() {
    //std::cout << "T1";
    //while (!y->load(std::memory_order_relaxed)){}
    r0 = y->load(std::memory_order_relaxed);
    r1 = x->load(std::memory_order_relaxed);
    //std::cout << "R0: " << y->load(std::memory_order_relaxed) << "; R1: " << x->load(std::memory_order_relaxed) << " ";
}

bool MP_T1::check() const{
    if (r0 == 1 and r1 == 0){
        return false;
    }
    return true;
}