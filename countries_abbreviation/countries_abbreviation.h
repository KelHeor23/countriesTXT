#pragma once
#include "stdafx.h"

#define countries_abbreviation c_a

class countries_abbreviation
{
private:
	std::fstream fileOut;
	std::fstream fileIn;

public:
	countries_abbreviation(std::string, std::string);

};

