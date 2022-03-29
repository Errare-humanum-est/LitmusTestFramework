//
// Created by tux on 3/28/22.
//

#ifndef LITMUSTESTFRAMEWORK_MP_H
#define LITMUSTESTFRAMEWORK_MP_H

#include "MP_T0.h"
#include "MP_T1.h"
#include <atomic>
#include <thread>
#include <iostream>


class MP {
    // Fail expected on ARM

    alignas(64) std::atomic<int> x;
    alignas(64) std::atomic<int> y;

    MP_T0 t0;
    MP_T1 t1;

public:
    MP();
    void run_test();
    bool check_result();
};


#endif //LITMUSTESTFRAMEWORK_MP_H
