#include <iostream>
#include <string>

class Entity {
public:
	virtual std::string GetName() { return "Entity"; }
};

class Player : public Entity {
private:
	std::string m_Name;
public:
	Player(const std::string& name)
		:m_Name(name) {}

	std::string GetName() override { return m_Name; }
};

int main()
{
	Player* e1 = new Player("Bankai");
	std::cout << e1->GetName() << std::endl;
	Entity* e = e1;
	std::cout << e->GetName() << std::endl;
	return 0;
}