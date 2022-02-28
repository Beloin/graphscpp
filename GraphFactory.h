//
// Created by beloin on 27/02/2022.
//

#ifndef GRAPH_GRAPHFACTORY_H
#define GRAPH_GRAPHFACTORY_H


#include "graph_reps/GraphDataStructure.h"

class GraphFactory {

    GraphFactory(GraphRepresentation rep);

public:
    GraphDataStructure* build();

private:
    GraphRepresentation rep;
};


#endif //GRAPH_GRAPHFACTORY_H
