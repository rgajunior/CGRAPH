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
	Vertex(int c, int t)
	{
		color = c;
		tag = t;
	}
	
	void addNeighbor(int n)
	{
		neighbors.push_back(n);
	}
	vector<int>& getNeighbors()
	{
		return neighbors;
	}
};

#endif