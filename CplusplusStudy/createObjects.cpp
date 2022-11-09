#include <iostream>
#include <string>

using string = std::string;

class Entity {
private:
	string name;

public:
	Entity() :name("unknown") {}

	Entity(const string& pName) :name(pName) {}

	~Entity() {
		std::cout << "Object deleted" << std::endl;
	}

	const string& GetName() const {
		return name;
	}
};
int main()
{
	Entity enty("Xampson"); // Alocated on stack, only exists in this scope
	std::cout << enty.GetName() << std::endl;

	Entity* enty2 = new Entity("Batata"); // Alocated on heap
	std::cout << enty2->GetName() << std::endl;

	delete enty2; // Created object on heap needs to be deleted
	return 0;
}