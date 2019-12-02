CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
ADD_SUBDIRECTORY(googletest)
SET(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_FLAGS "-std=c++11 -O3")

ADD_EXECUTABLE(test
        op_test.cpp
        Add.cpp
        Mult.cpp
        base.cpp
        Sub.cpp
        Div.cpp
        Factory.cpp
)

ADD_EXECUTABLE(calculator
        calculator.cpp
        Add.cpp
        Mult.cpp
        base.cpp
        Sub.cpp
        Div.cpp
        Factory.cpp
)




TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)

