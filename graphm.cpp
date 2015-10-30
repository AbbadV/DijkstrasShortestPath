//
// Created by Shyawn Karim on 10/26/15.
//

#include "graphm.h"

using namespace std;


// --------------------- Default Constructor -----------------------------------------
//
// --------------------------------------------------------------
GraphM::GraphM()
{
    size = 0;

    for (int i = 1; i < MAXNODES; i++)
    {
        for (int j = 1; j < MAXNODES; j++)
        {
            C[i][j] = MAXNODES;
            T[i][j].visited = false;
            T[i][j].dist = MAXNODES;
            T[i][j].path = 0;
        }
    }
}

// --------------------- buildGraph -----------------------------------------
//
// --------------------------------------------------------------
void GraphM::buildGraph(ifstream &infile1)
{
    int curNode, nextNode, weight;

    infile1 >> size;

    if (size > 0)
    {
        for (int i = 1; i <= size; i++)
        {
                infile1 >> data[i].setData(infile1);
        }


    }
}

// --------------------- insertEdge -----------------------------------------
//
// --------------------------------------------------------------
void GraphM::insertEdge(const int curNode, const int nextNode, const int weight)
{
    C[curNode][nextNode] = weight;
}

// --------------------- removeEdge -----------------------------------------
//
// --------------------------------------------------------------
void GraphM::removeEdge()
{

}

// --------------------- findShortestPath -----------------------------------------
//
// --------------------------------------------------------------
void GraphM::findShortestPath()
{
//// finds the shortest distance from source to all other nodes
//    for (int i = 1; source <= nodeSize; source++)
//    {
//        find v // not visited, shortest distance at this point
//        mark v visited
//        for each w adjacent to v
//            if (w is not visited)
//                T[souce][w].dist = min (T[source][w].dist, T[source][v].dist + C[V][W])
//    }


}

// --------------------- displayAll -----------------------------------------
//
// --------------------------------------------------------------
void GraphM::displayAll() const
{

}

// --------------------- display -----------------------------------------
//
// --------------------------------------------------------------
void GraphM::display(const int i, const int i1) const
{

}