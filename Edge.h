//
// Created by beloin on 25/02/2022.
//

#ifndef GRAPH_EDGE_H
#define GRAPH_EDGE_H


#include "Vertex.h"

class Edge {

public:
    Edge(Vertex *a, Vertex *b);

    int get_identifier(){
        return this->identifier;
    }

    int set_identifier(int id){
        this->identifier = id;
    }

    void get_vertex_names(std::string *str){
        for (int i = 0; i < this->VERTICES_LEN; i++){
            Vertex *v = vertices[i];
            str[i] = v->get_name();
        }
    }


private:
    int identifier;
    Vertex **vertices;

protected:
    int VERTICES_LEN = 2;

};


#endif //GRAPH_EDGE_H
