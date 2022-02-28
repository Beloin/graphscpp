//
// Created by beloin on 27/02/2022.
//

#include "GraphFactory.h"

GraphFactory::GraphFactory(GraphRepresentation rep) {
    this->rep = rep;
}

GraphDataStructure *GraphFactory::build() {
    switch (this->rep) {
        case GraphRepresentation::LI:
            return nullptr;
        case GraphRepresentation::LA:
            return nullptr;
        case GraphRepresentation::MI:
            return nullptr;
        case GraphRepresentation::MA:
            return nullptr;
    }
}