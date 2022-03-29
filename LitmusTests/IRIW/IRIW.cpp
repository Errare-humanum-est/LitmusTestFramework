//
// Created by tux on 3/28/22.
//

#include "IRIW.h"
IRIW::IRIW() : x(0), y(0), t0(&x, &y), t1(&x, &y), t2(&x, &y), t3(&x, &y){}

void IRIW::run_test(){
    std::thread t0_(&IRIW_T0::run, &t0);
    std::thread t1_(&IRIW_T1::run, &t1);
    std::thread t2_(&IRIW_T2::run, &t2);
    std::thread t3_(&IRIW_T3::run, &t3);

    t0_.join();
    t1_.join();
    t2_.join();
    t3_.join();
}

bool IRIW::check_result(){
    if (!t1.check() && !t3.check()){
        return false;
    }
    return true;
}