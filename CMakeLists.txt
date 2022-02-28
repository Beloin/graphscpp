cmake_minimum_required(VERSION 3.21)
project(graph)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(graph
        Graph.cpp
        Graph.h Vertex.cpp Vertex.h Edge.cpp Edge.h main.cpp graph_reps/GraphDataStructure.h GraphFactory.cpp GraphFactory.h graph_reps/GraphMA.cpp graph_reps/GraphMA.h graph_reps/GraphLA.cpp graph_reps/GraphLA.h data_structures/LinkedList.cpp data_structures/LinkedList.h)
