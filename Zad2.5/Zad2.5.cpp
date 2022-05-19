// Zad2.5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <iomanip>
#include <cmath>

double roundFunction(double number, int n)
{
    double num = 0;

    int a = 0;
    a = pow(10, n);
    num = round(number * a) / a; // num = 12454/1000 = 12.453
    return num;
}

int main()
{
    float numberF = 12.4543645;
    double number = 12.4543645;
    int n = 0;
    n = 4;

    std::cout << std::setprecision(10) << numberF << std::endl;
    std::cout << std::setprecision(10) << number << std::endl;

    std::cout << "wyniki: \n";
    std::cout << std::setprecision(10) << roundFunction(number, 1) << std::endl;
    std::cout << std::setprecision(10) << roundFunction(number, 2) << std::endl;
    std::cout << std::setprecision(10) << roundFunction(number, 3) << std::endl;
    std::cout << std::setprecision(10) << roundFunction(number, 4) << std::endl;
    std::cout << std::setprecision(10) << roundFunction(number, 5) << std::endl;
    std::cout << std::setprecision(10) << roundFunction(number, 6) << std::endl;

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
