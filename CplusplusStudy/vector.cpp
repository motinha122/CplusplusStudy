#include <iostream>
#include <string>
#include <memory>
#include <vector>

using string = std::string;


struct Vertex
{
	float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex) //modifies the iostream to display the vertices
{
	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
	return stream;
}

int main()
{
	std::vector<Vertex> vertices;
	vertices.push_back({ 1,2,3 });
	vertices.push_back({ 4,5,6 });

	for (int i = 0; i < vertices.size(); i++) { //cout the array
		std::cout << vertices[i] << std::endl;
	}

	for (Vertex& v : vertices) { //cout the array 2 
		std::cout << v << std::endl;
	}

	return 0;
}