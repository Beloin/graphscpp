//
// Created by beloin on 25/02/2022.
//

#ifndef GRAPH_VERTEX_H
#define GRAPH_VERTEX_H
#include "string"


class Vertex {


public:
    Vertex(std::string name);

    int get_identifier(){
        return this->identifier;
    }
    int set_identifier(int id){
        this->identifier = id;
    }

    std::string get_name(){
        return this->name;
    }

private:
    int identifier;
    std::string name;
};


#endif //GRAPH_VERTEX_H
