#include "reader.h"
#include <thread>

auto client = mem.GetBase("barony.exe");

uintptr_t localPlayer = mem.Read<uintptr_t>(client + offsets::localPlayer);

void Reader::ThreadLoop()
{

	while (true)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(250));

		findValues();
		
	}

}


void Reader::findValues()
{

	auto client = mem.GetBase("barony.exe");

	uintptr_t localPlayer = mem.Read<uintptr_t>(client + offsets::localPlayer);	
	int currentHealth = mem.Read<int>(localPlayer + offsets::currentHp);
	int maxHealth = mem.Read<int>(localPlayer + offsets::maxHp);
	int currentMp = mem.Read<int>(localPlayer + offsets::currentMp);
	int maxMp = mem.Read<int>(localPlayer + offsets::maxMp);
	int str = mem.Read<int>(localPlayer + offsets::str);
	int dex = mem.Read<int>(localPlayer + offsets::dex);
	int con = mem.Read<int>(localPlayer + offsets::con);
	int inte = mem.Read<int>(localPlayer + offsets::inte);
	int per = mem.Read<int>(localPlayer + offsets::per);
	int chr = mem.Read<int>(localPlayer + offsets::chr);
	int hunger = mem.Read<int>(localPlayer + offsets::hunger);

	player.currentHp = mem.Write<int>(localPlayer + offsets::currentHp, 1337);
	player.maxHp = mem.Write<int>(localPlayer + offsets::maxHp, 1337);
	player.currentMp = mem.Write<int>(localPlayer + offsets::currentMp, 1337);
	player.maxMp = mem.Write<int>(localPlayer + offsets::maxMp, 1337);
	player.str = mem.Write<int>(localPlayer + offsets::str, 1337);
	player.dex = mem.Write<int>(localPlayer + offsets::dex, 1337);
	player.chr = mem.Write<int>(localPlayer + offsets::chr, 1337);
	player.con = mem.Write<int>(localPlayer + offsets::con, 1337);
	player.inte = mem.Write<int>(localPlayer + offsets::inte, 1337);
	player.per = mem.Write<int>(localPlayer + offsets::per, 1337);
	player.hunger = mem.Write<int>(localPlayer + offsets::hunger, 1337);
	
}
