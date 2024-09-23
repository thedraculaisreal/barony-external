#include "../reader/reader.h"
#include "../mem/memify.h"
#include <thread>

int main()
{

	std::thread ReadThread(&Reader::ThreadLoop, &reader);

	ReadThread.detach();

	std::cout << "Loading Cheat..." << std::endl;

	Sleep(1000);

	while (true)
	{

		std::cout << "Current HP: " << player.currentHp << "\n";
		std::cout << "Max HP: " << player.maxHp << "\n";
		std::cout << "Current MP: " << player.currentMp << "\n";
		std::cout << "Max MP: " << player.maxMp << "\n";
		std::cout << "Strength: " << player.str << "\n";
		std::cout << "Dexterity: " << player.dex << "\n";
		std::cout << "Constitution: " << player.con << "\n";
		std::cout << "Intelligence: " << player.inte << "\n";
		std::cout << "Perception: " << player.per << "\n";
		std::cout << "Charisma: " << player.chr << "\n";
		std::cout << "Hunger: " << player.hunger << "\n";

		Sleep(1000);
	}

	return 0;
}