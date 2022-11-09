#include <iostream>
#include <string>

using string = std::string;

class Entity
{
public:
	int num;

	Entity()
		:num(0) {
		std::cout << "Created" << std::endl;
	}

	Entity(int x)
		:num(x) {
		std::cout << "Created" << std::endl;
	}

	~Entity() {
		std::cout << "Destroyed" << std::endl;
	}
};

class ScopedPtr
{
private:
	Entity* m_Ptr;

public:
	ScopedPtr(Entity* ptr)
		:m_Ptr(ptr) {}

	~ScopedPtr() {
		delete m_Ptr;
	}
};

int main()
{
	ScopedPtr e1 = new Entity; // heap and auto delete
	Entity* e = new Entity; // heap
	Entity a; //stack
	delete e;
	return 0;
}