#include <iostream>
#include <string>

class Entity {
public:
	float X, Y;

	Entity() {
		Y = 0.0f;
		X = 0.0f;
	}

	Entity(float x, float y) {
		Y = y;
		X = x;
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
