cmake_minimum_required(VERSION 4.2)
project(C__)

set(CMAKE_CXX_STANDARD 20)

add_executable(C__ main.cpp)
add_executable(test tes.cpp)
add_executable(adj dfsadjlist.cpp)
add_executable(bfs bfsadjlist.cpp)

add_executable(B_Forever_Winter "Codeforces - USACO-Liam-8-Graph/B_Forever_Winter.cpp")
add_executable(A_Badge "Codeforces - USACO-Liam-8-Graph/A_Badge.cpp")
add_executable(G_Party "Codeforces - USACO-Liam-8-Graph/G_Party.cpp")
add_executable(E_LoveTriangle "Codeforces - USACO-Liam-8-Graph/lovetriangle.cpp")