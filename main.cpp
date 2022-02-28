//
// Created by beloin on 25/02/2022.
//

#include <iostream>
#include "Graph.h"
#include "string"

using namespace std;

int main(){
    Vertex* v1 = new Vertex("a");
    Vertex* v2 = new Vertex("b");

    Edge *ed = new Edge(v1,v2);

    auto* names = new string[2];

    ed->get_vertex_names(names);
    for (int i =0; i<2; i++) { cout << names[i] << endl; }

    auto edge_qtn = 1;
    Edge edges[] = {*ed};
    auto *gr = new Graph(LI, edges, edge_qtn);
    return 0;
}