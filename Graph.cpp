//
// Created by beloin on 25/02/2022.
//

#include "Graph.h"

Graph::Graph(GraphRepresentation rep, Edge *edges, int edge_qnt) {
    this->set_graph_rep(rep);
    for (int i =0; i <=edge_qnt; i++){
        Edge edg = edges[i];
        this->add_edge(edg);
    }
}

Graph::Graph(GraphRepresentation rep) {
    this->set_graph_rep(rep);
}

void Graph::add_edge(Edge) {}

void Graph::add_vertex(Vertex) {}

void Graph::set_graph_rep(GraphRepresentation rep) {
    this->fc = new GraphFactory(rep);
}