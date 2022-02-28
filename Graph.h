//
// Created by beloin on 25/02/2022.
//

#ifndef GRAPH_GRAPH_H
#define GRAPH_GRAPH_H

#include <array>
#include "string"
#include "Vertex.h"
#include "Edge.h"
#include "GraphFactory.h"

enum GraphRepresentation{
    LI, LA, MI, MA
};

class Graph {

public:
    Graph(GraphRepresentation rep);
    Graph(GraphRepresentation rep, Edge edges[], int edge_qnt);


    void add_vertex(Vertex);
    void add_edge(Edge);

    void create_representation();

private:
    GraphFactory fc;

    void set_graph_rep(GraphRepresentation)
};


#endif //GRAPH_GRAPH_H
