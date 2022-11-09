#include <iostream>
#include <string>

class Entity {
public:
	float X, Y;

	Entity() {
		Y = 0.0f;
		X = 0.0f;
		std::cout << "Created Entity" << std::endl;
	}

	Entity(float x, float y) {
		Y = y;
		X = x;
	}

	~Entity() {
		std::cout << "Destroyed Entity" << std::endl;
	}

	void Print() {
		std::cout << X << " , " << Y << std::endl;
	}
};

int main()
{
	Entity e;
	e.Print();
	Entity e1(2, 4);
	e1.Print();
	return 0;
}
