#include <iostream>
#include <set>
#include <map>
#include "Vertex.h"

int main() {
    Vertex v1;
    v1.addVertex("yoav");
    v1.addVertex("yoav12");
    v1.addVertex("yoav2");
    Vertex v2;
    v2.addVertex("israel");
    v2 =v1;
    v1.addVertex("miku");
    v1.addVertex("miku2");
    bool yoyo = v2.isContain("yoajv");

    v2.deleteVertex("yoavgg");
    Vertex v3 = v1+ v2;
    v2.deleteVertex("yoav1");

}
