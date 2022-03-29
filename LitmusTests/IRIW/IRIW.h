//
// Created by tux on 3/28/22.
//

#ifndef LITMUSTESTFRAMEWORK_IRIW_H
#define LITMUSTESTFRAMEWORK_IRIW_H

#include "IRIW_T0.h"
#include "IRIW_T1.h"
#include "IRIW_T2.h"
#include "IRIW_T3.h"
#include <atomic>
#include <thread>
#include <iostream>

class IRIW {
    // Fail expected on ARM
    alignas(64) std::atomic<int> x;
    alignas(64) std::atomic<int> y;

    IRIW_T0 t0;
    IRIW_T1 t1;
    IRIW_T2 t2;
    IRIW_T3 t3;

public:
    IRIW();
    void run_test();
    bool check_result();

};


#endif //LITMUSTESTFRAMEWORK_IRIW_H
