#pragma once
#include "../mem/memify.h"


inline memify mem("barony.exe");

extern uintptr_t localPlayer;

namespace offsets
{
	constexpr std::ptrdiff_t localPlayer = 0x940E90;
	constexpr std::ptrdiff_t currentHp = 0x180;
	constexpr std::ptrdiff_t maxHp = 0x184;
	constexpr std::ptrdiff_t currentMp = 0x18C;
	constexpr std::ptrdiff_t maxMp = 0x190;
	constexpr std::ptrdiff_t str = 0x194;
	constexpr std::ptrdiff_t dex = 0x198;
	constexpr std::ptrdiff_t con = 0x19C;
	constexpr std::ptrdiff_t inte = 0x1A0;
	constexpr std::ptrdiff_t per = 0x1A4;
	constexpr std::ptrdiff_t chr = 0x1A8;
	constexpr std::ptrdiff_t hunger = 0x1B8;
}

class Player
{
public:
	uintptr_t localPlayer;
	int currentHp; //0x0180
	int maxHp; //0x0184
	int currentMp; //0x018C
	int maxMp; //0x0190
	int str; //0x0194
	int dex; //0x0198
	int con; //0x019C
	int inte; //0x01A0
	int per; //0x01A4
	int chr; //0x01A8
	int hunger; //0x01B8
}; //Size: 0x0440

inline Player player;

class Reader
{
public:

	uintptr_t localPlayer = 0;

	void ThreadLoop();

	void findValues();


};

inline Reader reader;




