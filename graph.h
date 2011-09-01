#ifndef GRAPH_H
#define GRAPH_H

#include <list>
#include "vertex.h"

using namespace std;

class Graph
{
private:
	list<Vertex> vertices;

public:
	Graph();

	Vertex& getMaxDegreeVertex();
	bool isEmpty() const;
	int size() const;
	Graph& inducedByVertexGraph(vector<int>);
};

#endif