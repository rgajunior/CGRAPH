#include "graph.h"

Vertex& Graph::getMaxDegreeVertex()
{
	list<Vertex>::iterator vertices_it;
	list<Vertex>::iterator max = vertices.begin();
	
	for(vertices_it = vertices.begin(); vertices_it != vertices.end(); vertices_it++)
	{
		if (max->getNeighbors().size() < vertices_it->getNeighbors().size())
			max = vertices_it;
	}
	return *max;
}

Graph& Graph::inducedByVertexGraph(vector<int>)
{

	//TODO
	return Graph();
}

bool Graph::isEmpty() const
{
	return vertices.empty();
}

int Graph::size() const
{
	return vertices.size();
}