// Zad7.2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include <algorithm>

char dec2HexDigit(int d)
{
    char result;

    if (d < 0 || d>15) //sprawdzamy czy mamy doczynienia z odpowiednim zakresem cyfry hex
        return '-';

    if (d > 9)
    {
        result = d + 'A' - 10;
    }
    else
    {
        result = d + '0'; //???
    }

    return result;
}

//decimal to hexadecimal
std::string dec2Hex(int number)
{
    std::string result;

    do
    {
        int r = number % 16;
        number /= 16;

        result += dec2HexDigit(r);
        //badz
        //result = dec2HexDigit(r) + result; wtedy nie trzeba odwracac
    } while (number > 0);

    //wykorzystanie funkcji z bibiolteki algorithm
    std::reverse(result.begin(), result.end());

    return result;
}

int main()
{
    std::cout << dec2Hex(0) << std::endl;
    std::cout << dec2Hex(30874) << std::endl;

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
