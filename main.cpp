//#include "MP_class.h"
#include "LitmusTests/MP/MP.h"
#include "LitmusTests/SB/SB.h"
#include "LitmusTests/LB/LB.h"
#include "LitmusTests/IRIW/IRIW.h"

#include <iostream>
#include <map>


template <class T>
void run_test(int runs) {
    std::map<bool, int> result;
    for (int i = 0; i<runs; i++) {
        auto *entity = new T;
        entity->run_test();
        result[entity->check_result()]++;
    }

    std::cout << typeid(T).name() << std::endl;
    std::cout << "Passed Tests: " << result[true] << std::endl;
    std::cout << "Failed Tests: " << result[false] << std::endl;
    std::cout << std::endl;
}

int main() {
    auto runs = 50000;
    std::cout << "Running Litmus Tests..." << std::endl;
    std::cout << "Number of runs per test: " << runs << std::endl;

    run_test<MP>(runs);
    run_test<SB>(runs);
    run_test<LB>(runs);
    run_test<IRIW>(runs);

    std::cout << "Done" << std::endl;
    return 0;
}

