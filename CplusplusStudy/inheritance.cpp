#include <iostream>
#include <string>

class Entity
{
public:
	float X, Y;

	void Move(float xa, float ya) {
		X += xa;
		Y += ya;
		std::cout << "Moved: " << X << "," << Y << std::endl;
	}
};

class Player : public Entity
{
public:
	const char* Name;

	void PrintName() {
		std::cout << Name << std::endl;
	}
};

int main()
{
	Player player;
	player.Move(5, 5);
	return 0;
}