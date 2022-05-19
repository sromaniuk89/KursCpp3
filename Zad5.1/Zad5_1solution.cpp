#include "Zad5_1solution.h"
#include <iostream>

void taskA(int num[], int size) 
{
	std::cout << "A: " << std::endl;

	for (int i = 0; i < size; )
	{
		//std::cout << num[i] << std::endl;
		//wersja w jednej linii
		std::cout << num[i++] << "; "; //i++ musi przechowac na chwile wartosc i sprzed inkrementacji, teraz zadzila OK
		//std::cout << num[++i] << "; "; //teraz zadziala ZLE
	}
	std::cout << std::endl;

	for (int i = 0; i < size; )
	{
		//std::cout << num[i] << std::endl;
		//wersja w jednej linii
		//std::cout << num[i++] << "; "; //i++ musi przechowac na chwile wartosc i sprzed inkrementacji, teraz zadzila OK
		std::cout << num[++i] << "; "; //teraz zadziala ZLE
	}

	std::cout << std::endl;
}

void taskB(int num[], int size)
{
	std::cout << "B: " << std::endl;

	for (int i = size-1; i >= 0; i--)
	{
		//std::cout << num[i] << std::endl;
		std::cout << num[i] << "; "; //wersja w jednej linii
	}

	std::cout << std::endl;

}

void taskC(int num[], int size)
{
	std::cout << "C :" << std::endl;
	for (int i = 1; i < size; i += 2) //zaczynamy od 0 badz 1 zaleznie od tego jaka koncepcje przyjmujemy
	{
		//std::cout << num[i] << std::endl;
		std::cout << num[i] << "; ";
	}
	std::cout << std::endl;
}

void taskF(int num[], int size)
{
	std::cout << "F: " << std::endl;
	int suma = 0;
	for (int i = size - 5; i < size; ++i) //size=20-5 = 15, 16, 17, 18, 19
	{
		if (num[i] > 3)
		{
			suma += num[i];
		}
	}
	std::cout << suma;
	std::cout << std::endl;
}