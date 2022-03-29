//
// Created by tux on 3/28/22.
//

#ifndef LITMUSTESTFRAMEWORK_LB_T0_H
#define LITMUSTESTFRAMEWORK_LB_T0_H


#include <atomic>

class LB_T0 {
    std::atomic<int> * x;
    std::atomic<int> * y;

    // Internal
    int r0;

public:
    LB_T0(std::atomic<int> * x, std::atomic<int> * y);
    void run();
    [[nodiscard]] bool check() const;
};


#endif //LITMUSTESTFRAMEWORK_LB_T0_H
