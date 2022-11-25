#include <iostream>
#include <string>
#include <memory>
#include <vector>

using std::string;

struct Vertex
{
	float x, y, z;

	Vertex(float x, float y, float z)
		:x(x), y(y), z(z) {}

	Vertex(const Vertex& vertex)
		:x(vertex.x), y(vertex.y), z(vertex.z)
	{
		std::cout << "Copied" << std::endl;
	}

};

int main()
{
	std::vector<Vertex> vertices;
	vertices.reserve(3); //reserves 3 slots to store the vertices
	vertices.emplace_back(1, 2, 3); //stores 3 values by parameters without copying them 
	vertices.emplace_back(4, 5, 6);
	vertices.emplace_back(7, 8, 9);

	return 0;
}