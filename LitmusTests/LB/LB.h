//
// Created by tux on 3/28/22.
//

#ifndef LITMUSTESTFRAMEWORK_LB_H
#define LITMUSTESTFRAMEWORK_LB_H

#include "LB_T0.h"
#include "LB_T1.h"
#include <atomic>
#include <thread>
#include <iostream>

class LB {
    alignas(64) std::atomic<int> x;
    alignas(64) std::atomic<int> y;

    LB_T0 t0;
    LB_T1 t1;

public:
    LB();
    void run_test();
    bool check_result();
};


#endif //LITMUSTESTFRAMEWORK_LB_H
