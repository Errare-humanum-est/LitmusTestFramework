//
// Created by tux on 3/28/22.
//

#ifndef LITMUSTESTFRAMEWORK_SB_H
#define LITMUSTESTFRAMEWORK_SB_H

#include "SB_T0.h"
#include "SB_T1.h"
#include <atomic>
#include <thread>
#include <iostream>


class SB {
    // Fail expected on x86 & ARM
    alignas(64) std::atomic<int> x;
    alignas(64) std::atomic<int> y;

    SB_T0 t0;
    SB_T1 t1;

public:
    SB();
    void run_test();
    bool check_result();
};


#endif //LITMUSTESTFRAMEWORK_SB_H
