#include "graph.h"

Graph::Graph(char* fileName)
{
	FILE* fp = fopen(fileName, "r");

	if(!fp)
	{
		printf("could not open file <%s>", fileName);
		exit(1);
	}
	
	int n, e;

	fscanf(fp, "%d %d", &n, &e);

	for(int i=1; i<=n; i++)
		this->addVertex(Vertex(-1,i));
	
	for(int i=0; i<e; i++)
	{
		int v1, v2;
		fscanf(fp, "%d %d", &v1, &v2);
		
		this->vertices[v1].addNeighbor(v2);
		this->vertices[v2].addNeighbor(v1);
	}
}


Vertex& Graph::getMaxDegreeVertex()
{
	int max = vertices[0].getNeighbors().size();
	int maxi = 0;

	for(int i=1; i<vertices.size(); i++)
	{
		if (max < vertices[i].getNeighbors().size())
		{
			max = vertices[i].getNeighbors().size();
			maxi = i;
		}
	}
	return vertices[maxi];
}

Graph* Graph::inducedByVertexGraph(vector<int> vs)
{
	Graph* g1 = new Graph();

	for(int i=0; i<vs.size(); i++)
		g1->addVertex(vertices[vs[i]]);

	return g1;
}

void Graph::addVertex(Vertex& v)
{
	vertices.push_back(v);
}
bool Graph::isEmpty() const
{
	return vertices.empty();
}

int Graph::size() const
{
	return vertices.size();
}