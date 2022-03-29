cmake_minimum_required(VERSION 3.21)
project(LitmusTestFramework)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS -pthread)
set(CMAKE_CXX_FLAGS_RELEASE "-O1")

add_executable(LitmusTestFramework main.cpp LitmusTests/MP/MP_T0.cpp LitmusTests/MP/MP_T0.h
        LitmusTests/MP/MP_T1.cpp LitmusTests/MP/MP_T1.h LitmusTests/MP/MP.cpp LitmusTests/MP/MP.h
        LitmusTests/SB/SB_T0.cpp LitmusTests/SB/SB_T0.h LitmusTests/SB/SB.cpp LitmusTests/SB/SB.h
        LitmusTests/SB/SB_T1.cpp LitmusTests/SB/SB_T1.h LitmusTests/LB/LB.cpp LitmusTests/LB/LB.h
        LitmusTests/LB/LB_T0.cpp LitmusTests/LB/LB_T0.h LitmusTests/LB/LB_T1.cpp LitmusTests/LB/LB_T1.h
        LitmusTests/IRIW/IRIW.cpp LitmusTests/IRIW/IRIW.h LitmusTests/IRIW/IRIW_T0.cpp LitmusTests/IRIW/IRIW_T0.h
        LitmusTests/IRIW/IRIW_T1.cpp LitmusTests/IRIW/IRIW_T1.h LitmusTests/IRIW/IRIW_T2.cpp LitmusTests/IRIW/IRIW_T2.h
        LitmusTests/IRIW/IRIW_T3.cpp LitmusTests/IRIW/IRIW_T3.h)