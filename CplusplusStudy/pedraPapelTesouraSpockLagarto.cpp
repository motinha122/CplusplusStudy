#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime> 

using string = std::string;

class Thing {
private:
	string type;
	string losesTo[2];

public:
	Thing() :type("n"), losesTo{ "n","n" } {}

	void Get(const string& rectype, const string& lose1, const string& lose2) {
		type = rectype;
		losesTo[0] = lose1;
		losesTo[1] = lose2;
	}

	const string& GetType() {
		return type;
	}

	const string& GetLoses(int x) {
		return losesTo[x];
	}

};

int randomNum() {
	srand(time(NULL));
	return (rand() % 5) + 1;
}

int main()
{
	string table[5][3] = {
		{"paper", "scissors", "lizard"},
		{"rock", "paper", "spock"},
		{"scissors", "rock", "spock"},
		{"spock", "paper", "lizard"},
		{"lizard", "rock", "scissors"}
	};

	Thing objects[5];

	for (int i = 0; i < 5; i++)
	{
		objects[i].Get(table[i][0], table[i][1], table[i][2]);
	}

	int playerSelect;

	Thing cpu = objects[randomNum()];

	std::cout << "Select > 1.Paper - 2.Rock - 3.Scissors - 4.Spock - 5.Lizard : ";
	std::cin >> playerSelect;
	playerSelect--;

	Thing player = objects[playerSelect];

	if (player.GetType() == cpu.GetType()) {
		std::cout << "Draw with " << cpu.GetType() << std::endl;
		return 1;
	}

	if (player.GetLoses(0) == cpu.GetType() || player.GetLoses(1) == cpu.GetType()) {
		std::cout << "You Lose against " << cpu.GetType() << std::endl;
		return -1;
	}
	else {
		std::cout << "You Won against " << cpu.GetType() << std::endl;
		return 0;
	}
	return 0;
}

