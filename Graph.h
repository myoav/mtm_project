
#ifndef GCALC_GRAPH_H
#define GCALC_GRAPH_H
#include <iostream>
#include <set>
#include <utility>


class Graph {
private:
    std::string name;
    std::set<std::string> vertexes;
    std::set<std::pair<std::string, std::string>> edges;
public:
    Graph(std::string name, std::set<std::string> vertexes, std::set<std::pair<std::string, std::string>> edges);

    Graph(const Graph &graph);

    ~Graph();

    Graph &operator=(const Graph &graph);



};


#endif //GCALC_GRAPH_H
