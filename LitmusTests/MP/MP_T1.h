//
// Created by tux on 3/28/22.
//

#ifndef LITMUSTESTFRAMEWORK_MP_T1_H
#define LITMUSTESTFRAMEWORK_MP_T1_H

#include <atomic>

class MP_T1 {
    std::atomic<int> * x{};
    std::atomic<int> * y{};

    // Internal
    int r0;
    int r1;

public:
    MP_T1(std::atomic<int> * x, std::atomic<int> * y);
    void run();
    [[nodiscard]] bool check() const;
};


#endif //LITMUSTESTFRAMEWORK_MP_T1_H
