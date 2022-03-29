//
// Created by tux on 3/28/22.
//

#ifndef LITMUSTESTFRAMEWORK_SB_T1_H
#define LITMUSTESTFRAMEWORK_SB_T1_H
#include <atomic>

class SB_T1 {
    std::atomic<int> * x;
    std::atomic<int> * y;

    // Internal
    int r0;

public:
    SB_T1(std::atomic<int> * x, std::atomic<int> * y);
    void run();
    [[nodiscard]] bool check() const;
};


#endif //LITMUSTESTFRAMEWORK_SB_T1_H
