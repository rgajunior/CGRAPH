#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include "vertex.h"

using namespace std;

class Graph
{
private:
	vector<Vertex> vertices;
	void addVertex(Vertex&);
public:
	Graph(){};
	Graph(char* fileName);

	Vertex& getMaxDegreeVertex();
	bool isEmpty() const;
	int size() const;
	Graph* inducedByVertexGraph(vector<int>);
};

#endif