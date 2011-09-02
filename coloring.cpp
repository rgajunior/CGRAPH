#include "coloring.h"

#define min(X,Y) ((X) < (Y) ? (X) : (Y))

Graph& Coloring::maxCliqueRec(Graph& G, Graph& C, Graph& best, int ub)
{
	if(G.isEmpty())
		return C;
	
	int k = hColoring(G);

	ub = min(ub,C.size() + k);

	if(ub <= best.size())
		return best;

	Vertex v = G.getMaxDegreeVertex();

	Graph* g1 = G.inducedByVertexGraph(v.getNeighbors());
	//return 0;
}

int Coloring::hColoring(Graph& G)
{
	//TODO
	return 0;
}