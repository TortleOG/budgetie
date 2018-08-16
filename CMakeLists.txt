cmake_minimum_required(VERSION 3.8)

project(budgetie)

add_executable(budgetie src/main.cpp)

if(MSVC)
    target_compile_options(budgetie PRIVATE /W4)
else()
    target_compile_options(budgetie PRIVATE -W -Wall -Wextra -Werror)
endif()
