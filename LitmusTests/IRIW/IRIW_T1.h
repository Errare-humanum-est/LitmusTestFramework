//
// Created by tux on 3/28/22.
//

#ifndef LITMUSTESTFRAMEWORK_IRIW_T1_H
#define LITMUSTESTFRAMEWORK_IRIW_T1_H

#include <atomic>

class IRIW_T1 {
    std::atomic<int> * x{};
    std::atomic<int> * y{};

    // Internal
    int r0;
    int r1;

public:
    IRIW_T1(std::atomic<int> * x, std::atomic<int> * y);
    void run();
    [[nodiscard]] bool check() const;
};


#endif //LITMUSTESTFRAMEWORK_IRIW_T1_H
