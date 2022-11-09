#include <iostream>
#include <string>
#include <memory>

using string = std::string;

class Entity 
{
public:
	int num;

	Entity() 
		:num(0){
		std::cout << "Created" << std::endl;
	}

	Entity(int x)
		:num(x){
		std::cout << "Created" << std::endl;
	}

	~Entity() {
		std::cout << "Destroyed" << std::endl;
	}

public:
	void Print() {
		std::cout << "Entity" << std::endl;
	}
};

int main()
{
	std::unique_ptr<Entity> entity = std::make_unique<Entity>(); // unique pointer : scoped pointer, deletes when scope ends
	entity->Print();

	std::shared_ptr<Entity> ent1; // shared pointer : deletes when all references got deleted
	{
		std::shared_ptr<Entity> sharedEnt = std::make_shared<Entity>(); // 
		ent1 = sharedEnt;
	}

	std::weak_ptr<Entity> weak = std::weak_ptr<Entity>(); // weak pointer : doesnt count as reference to a shared pointer

	return 0;
}