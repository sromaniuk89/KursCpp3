//Zad 2.3
#include <iostream>

short int add1(short int a)
{
	return a;
}

int add2(short int a)
{
	return a;
}

long long int add3(short int a)
{
	return a;
}

double add4(short int a)
{
	return a;
}

int main() //short int z automatu skraca liczbę, bierze tyle ile jest w stanie pomieścić (-32768,32767)
{
	std::cout << "Wynik dodawania: " << add1(5) << std::endl;
	std::cout << "Wynik dodawania: " << add2(32768) << std::endl;
	std::cout << "Wynik dodawania: " << add3(458755) << std::endl;
	std::cout << "Wynik dodawania: " << add4(-25.67864) << std::endl;
}