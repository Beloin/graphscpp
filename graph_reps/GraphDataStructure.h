//
// Created by beloin on 27/02/2022.
//

#ifndef GRAPH_GRAPHDATASTRUCTURE_H
#define GRAPH_GRAPHDATASTRUCTURE_H


#include "Graph.h"

class GraphDataStructure {

public:
    virtual void print_ds() = 0;
    virtual void create_ds(Graph gr) = 0;

};


#endif //GRAPH_GRAPHDATASTRUCTURE_H
