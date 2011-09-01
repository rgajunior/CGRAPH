#ifndef VERTEX_H
#define VERTEX_H

#include <vector>

using namespace std;

class Vertex
{
private:
	vector<int> neighbors;
	int color;
	int tag;
public:
	Vertex();
	
	vector<int>& getNeighbors()
	{
		return neighbors;
	}
};

#endif