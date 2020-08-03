

#include "Vertex.h"

Vertex::Vertex(std::set<std::string> vertexes):vertexes(vertexes) {
}

Vertex::Vertex(const Vertex &vertex) {
    std::set<std::string> temp(vertex.vertexes);
    vertexes = temp;
}

Vertex &Vertex::operator=(const Vertex &vertex) {
    if (this == &vertex){
        return *this;
    }
    this->vertexes.operator=(vertex.vertexes);
    return *this;
}

Vertex::Vertex() {

}

void Vertex::addVertex(std::string vertex) {

    vertexes.insert(vertex);
}

void Vertex::deleteVertex(std::string vertex) {
    vertexes.erase(vertex);

}

bool Vertex::isContain(std::string vertex) {
    std::set<std::string>::iterator it;
    it = vertexes.find(vertex);
    return it != vertexes.end();
}

std::set<std::string>::iterator Vertex::begin() const {
    std::set<std::string>::iterator it = vertexes.begin();
    return it;
}

std::set<std::string>::iterator Vertex::end() const {
    std::set<std::string>::iterator it  = vertexes.end();
    return it;
}

Vertex operator+(const Vertex &vertex1, const Vertex &vertex2){
    Vertex result(vertex1);
    std::set<std::string>::iterator it = vertex2.begin();
    for (;it!=vertex2.end();it++){
            result.addVertex(*it);
    }
    return result;

}

