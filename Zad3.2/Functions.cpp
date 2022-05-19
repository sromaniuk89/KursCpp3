#include "Functions.h"
#include <math.h>

//funkcja do potegowania liczb naturalnych (uproszczona)
int power(int a, int b)
{
	if (b < 0) //nie obslugujemy gdy wykladnik ujemny
	{
		return -1;
	}

	if (b == 0)
	{
		return 1;
	}

	if (b == 1)
	{
		return a;
	}

	int r = 1;

	for (int i = 0; i < b; i++)
	{
		r *= a;
	}

	return r;

}

//funkcja do potegowania z math.h nazywa sie pow
//nasza funkcja nazywa sie power, i to sa inne funkcje
//tutaj przeciazamy funkcje power, odbywa sie to w taki sposob ze mamy ta sama nazwe funkcji ale inne argumenty/typ zwracany
float power(float a, float b)
{
	return static_cast<float>(pow(a, b)); //rzutowanie stratne robimy jawnie
}

double power(double a, double b)
{
	return pow(a, b);
}