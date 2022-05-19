// Zad2.6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <iomanip>
#include <math.h>

void printDoubleNumber(double d) //123.456
{
    //sprawdzamy czy liczba jest ujemna, jesli tak to wyswietlamy minus i robimy liczbe dodatnia
    if (d < 0.0) 
    {
        std::cout << '-';
        d *= -1.0; //przemnażamy razy -1 zeby miec wartosc dodatnia
    }

    //123
    int a = static_cast<int>(d); //czesc calkowita jest wyciagnieta z double'a
    //.456
    double b = d - a; //czesc po przecinku/kropce
    int n1 = 1; //liczba cyfr czesci calkowitej
    //123

    while (a > 9) //tu zliczamy ile jest cyfr w czesci calkowitej, robimy to bo nie jestesmy w stanie je wyswietlic od lewej prawej
    {
        a /= 10;
        n1++;
    }

    a = static_cast<int>(d); //odswiezamy ta wartosc

    for (int i = 0; i < n1; i++)
    {
        //tutaj wyciagamy kolejne cyfry z czesci calkowitej oczywiscie od lewej do prawej
        //123
        //123/100 -> 1
        //23/10 -> 2
        //3/1 -> 3
        //rozwiazanie polega na dzieleniu przez odpowiednia potege 10
        int p = static_cast<int>(pow(10, n1 - i - 1));//obliczamy odpowiednia potega 10 rzutujemy bo pow zwraca double
        int c = a / p; //cyfra ktora nas aktualnie interesuje
        a -= c * p; //zmniejszamy a zeby pozbac

        std::cout << c;
    }

    std::cout << '.';

    //.0 *10 -> 0.0
    //.456 *10 = 4.56 -> 4
    //(4.56-4) *10 = 5.6 -> 5
    do
    {
        b *= 10;
        int c = static_cast<int>(b);
        std::cout << c;
        b -= c;
    } while (b > 0.0);


}

int main()
{
    printDoubleNumber(-123.456); //wyswietli wiecej cyfr po przecinku bo jest double tez nie jest idealny

    std::cout << std::endl;
    std::cout << std::setprecision(35) << - 1234444444.456 << std::endl;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
