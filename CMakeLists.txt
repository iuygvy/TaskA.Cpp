cmake_minimum_required(VERSION 3.24)
project(Zadanie_A)

set(CMAKE_CXX_STANDARD 17)

set(Headers bitwise_operations.h)

add_executable(Zadanie_A ${PROJECT_SOURCE_DIR}/ main.cpp emplace.cpp insert.cpp erase.cpp print.cpp emptiness_nonempty.cpp member.cpp disjoint_conjunctive.cpp inclusion_equality.cpp operations.cpp cardinality.cpp relations.cpp)
