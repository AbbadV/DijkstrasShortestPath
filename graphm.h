//
// Created by Shyawn Karim on 10/26/15.
//

#ifndef DIJKSTRASSHORTESTPATH_GRAPHM_H
#define DIJKSTRASSHORTESTPATH_GRAPHM_H


#include "nodedata.h"

const int MAXNODES = 101;

class GraphM
{
public:
    // default constructor
    GraphM();

    // builds up graph node information and adjacency matrix of edges
    // between each node reading from a data file
    void buildGraph(ifstream&);

    // insert an edge into graph between two given nodes
    void insertEdge(const int, const int, const int);

    // remove an edge between two given nodes
    void removeEdge();

    // find the shortest path between every node to every other node in
    // the graph, i.e., TableType T is updated with shortest path information
    void findShortestPath();

    // display the cost and path from every node to every other node
    void displayAll() const;

    // uses couts to display the shortest distance with path info between
    // the fromNode to toNode
    void display(const int, const int) const;


private:
    struct TableType
    {
        bool visited;                   // whether node has been visited
        int dist;                       // shortest distance from source known so far
        int path;                       // previous node in path of min dist
    };

    NodeData data[MAXNODES];            // data for graph nodes
    int C[MAXNODES][MAXNODES];          // cost array, the adjacency matrix
    int size;                           // number of nodes in the graph
    TableType T[MAXNODES][MAXNODES];    // stores visited, distance, path
};


#endif //DIJKSTRASSHORTESTPATH_GRAPHM_H