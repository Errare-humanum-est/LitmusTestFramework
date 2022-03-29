//
// Created by tux on 3/28/22.
//

#include "SB.h"
SB::SB() : x(0), y(0), t0(&x, &y), t1(&x, &y){}

void SB::run_test(){
    std::thread t0_(&SB_T0::run, &t0);
    std::thread t1_(&SB_T1::run, &t1);

    t0_.join();
    t1_.join();
}

bool SB::check_result(){
    if (t0.check() && t1.check()){
        return false;
    };
    return true;
}