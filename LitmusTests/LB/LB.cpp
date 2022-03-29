//
// Created by tux on 3/28/22.
//

#include "LB.h"
LB::LB() : x(0), y(0), t0(&x, &y), t1(&x, &y){}

void LB::run_test(){
    std::thread t0_(&LB_T0::run, &t0);
    std::thread t1_(&LB_T1::run, &t1);

    t0_.join();
    t1_.join();
}

bool LB::check_result(){
    if (t0.check() && t1.check()){
        return false;
    };
    return true;
}