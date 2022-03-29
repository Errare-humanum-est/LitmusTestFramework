//
// Created by tux on 3/28/22.
//

#ifndef LITMUSTESTFRAMEWORK_IRIW_T2_H
#define LITMUSTESTFRAMEWORK_IRIW_T2_H

#include <atomic>

class IRIW_T2 {
    std::atomic<int> * x;
    std::atomic<int> * y;

public:
    IRIW_T2(std::atomic<int> * x, std::atomic<int> * y);
    void run();
    static bool check();
};


#endif //LITMUSTESTFRAMEWORK_IRIW_T2_H
