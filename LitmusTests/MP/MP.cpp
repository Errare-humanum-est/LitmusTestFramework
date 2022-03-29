//
// Created by tux on 3/28/22.
//

#include "MP.h"
MP::MP() : x(0), y(0), t0(&x, &y), t1(&x, &y){
    //std::cout << "&x: " << &x << '\n';
    //std::cout << "&y: " << &y << '\n';
}

void MP::run_test(){
    std::thread t0_(&MP_T0::run, &t0);
    std::thread t1_(&MP_T1::run, &t1);

    t0_.join();
    t1_.join();
}

bool MP::check_result(){
    return t0.check() && t1.check();
}