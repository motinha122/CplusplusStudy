#include <iostream>
#include <string>
#include <memory>

using string = std::string;

class Entity
{
public:
	int x;

public:
	void Print() const {
		std::cout << "Hello" << std::endl;
	}
};

class ScopedPtr
{
private:
	Entity* m_Obj;

public:
	ScopedPtr(Entity* ent)
		: m_Obj(ent){}

	~ScopedPtr() {
		delete m_Obj;
	}

	Entity* GetObject() {
		return m_Obj;
	}

	Entity* operator->() {
		return m_Obj;
	}

	const Entity* operator->() const {
		return m_Obj;
	}
};

int main()
{
	ScopedPtr scope = new Entity();
	scope->Print();
	return 0;
}