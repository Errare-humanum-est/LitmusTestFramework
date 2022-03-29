//
// Created by tux on 3/28/22.
//

#ifndef LITMUSTESTFRAMEWORK__MP_T0_H
#define LITMUSTESTFRAMEWORK__MP_T0_H

#include <atomic>

class MP_T0 {
    std::atomic<int> * x;
    std::atomic<int> * y;

public:
    MP_T0(std::atomic<int> * x, std::atomic<int> * y);
    void run();
    static bool check();
};


#endif //LITMUSTESTFRAMEWORK__MP_T0_H
