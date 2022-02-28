//
// Created by beloin on 25/02/2022.
//

#include <cstdlib>
#include "Edge.h"

Edge::Edge(Vertex *a, Vertex *b) {
    this->vertices = (Vertex**) std::malloc(sizeof (Vertex) * 2);
    this->vertices[0] = a;
    this->vertices[1] = b;
}