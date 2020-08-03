//
// Created by nhfh7 on 03/08/2020.
//

#include "Edges.h"

Edges::Edges(std::set<std::pair<std::string, std::string>> edges):edges(edges){}

Edges::Edges() {}

Edges::Edges(const Edges &edges) {
    std::set<std::pair<std::string,std::string>> temp(edges.edges);
    this->edges = temp;
}

Edges &Edges::operator=(const Edges &edges) {
    if (this == &edges){
        return *this;
    }
    this->edges.operator=(edges.edges);
    return *this;
}

void Edges::addEdge(std::pair<std::string, std::string> edge) {
    edges.insert(edge);
}

void Edges::deleteEdge(std::pair<std::string, std::string> edge) {
    edges.erase(edge);
}

bool Edges::isContain(std::pair<std::string, std::string> edge) const{
    std::set<std::pair<std::string,std::string>>::iterator it;
    it = edges.find(edge);
    return it != edges.end();
}

std::set<std::pair<std::string, std::string>>::iterator Edges::begin() const {
    std::set<std::pair<std::string,std::string>>::iterator it = edges.begin();
    return it;
}

std::set<std::pair<std::string, std::string>>::iterator Edges::end() const {
    std::set<std::pair<std::string,std::string>>::iterator it = edges.end();
    return it;
}


Edges operator+(const Edges &edges1, const Edges &edges2) {
    return Edges();
}
