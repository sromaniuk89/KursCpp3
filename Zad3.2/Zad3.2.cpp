// Zad3.2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "Functions.h"
#include <iostream>

int main()
{
    //int power
    //pamietamy zeby prawidlowo i rzetelnie testowac to co napisalismy
    std::cout << power(3, -1) << std::endl;
    std::cout << power(3, 0) << std::endl;
    std::cout << power(3, 1) << std::endl;
    std::cout << power(3, 2) << std::endl;
    std::cout << power(3, 4) << std::endl;

    //float power
    std::cout << power(3.0f, -1.0f) << std::endl;
    std::cout << power(3.5f, 0.0f) << std::endl;
    std::cout << power(3.5f, 1.0f) << std::endl;
    std::cout << power(3.5f, 2.0f) << std::endl;
    std::cout << power(3.5f, 4.0f) << std::endl;

    //double power
    std::cout << power(3.0, -1.0) << std::endl;
    std::cout << power(3.5, 0.0) << std::endl;
    std::cout << power(3.5, 1.0) << std::endl;

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
