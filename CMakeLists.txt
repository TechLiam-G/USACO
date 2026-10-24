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
add_executable(F_New_Year_Transportation "Codeforces - USACO-Liam-8-Graph/F_New_Year_Transportation.cpp")
add_executable(H_Network_Topology "Codeforces - USACO-Liam-8-Graph/H_Network_Topology.cpp")
add_executable(I_Rumor "Codeforces - USACO-Liam-8-Graph/I_Rumor.cpp")
add_executable(J_Two_Buttons "Codeforces - USACO-Liam-8-Graph/J_Two_Buttons.cpp")