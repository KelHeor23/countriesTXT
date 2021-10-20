#include "countries_abbreviation.h"

c_a::countries_abbreviation(std::string file_o, std::string file_i)
{
	fileOut.open(file_o, std::fstream::out);
	fileIn.open(file_i, std::fstream::in | std::fstream::app);

	if (!fileOut.is_open())
		std::cout << "Не открылся исходный файл";
	if(!fileIn.is_open())
		std::cout << "Проблема с файлом назначения";
}