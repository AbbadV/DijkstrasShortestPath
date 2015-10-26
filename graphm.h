//
// Created by Shyawn Karim on 10/26/15.
//

#ifndef DIJKSTRASSHORTESTPATH_GRAPHM_H
#define DIJKSTRASSHORTESTPATH_GRAPHM_H


class GraphM
{
public:


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
