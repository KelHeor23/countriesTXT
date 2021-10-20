#include "countries_abbreviation.h"

int main()
{
	setlocale(LC_ALL, "ru");
	c_a abbreviation("countries_l_russian.txt", "countries_l_russian_2.txt");

	return 0;
}