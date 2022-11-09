#include <iostream>
#include <string>

class Entity {
public:
	Entity() = delete;

	static void Print() {
		std::cout << "Hotate" << std::endl;
	}
};

int main()
{
	Entity::Print();
	return 0;
}
