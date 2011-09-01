#ifndef COLORING_H
#define COLORING_H

#include "graph.h"

class Coloring
{
private:
	Graph& maxCliqueRec(Graph& G, Graph& C, Graph& best, int ub);
	int hColoring(Graph& G);
	

public:
	Coloring(){}

	Graph& maxClique(Graph& G)
	{
		Graph C;
		Graph best;
		return maxCliqueRec(G, C, best, 999999999);
	}
};

#endif

