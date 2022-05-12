// Zad1.2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

//1 % 2 = 1;
//2 % 2 = 0;
//3 % 2 = 1;
//4 % 2 = 0;
//...

int main()
{
    int l;
    std::cin >> l;

    if (l % 2) //kiedy w warunku otrzymamy 0 -> oznacza to false, gdy 1 -> oznacza to true
    { //if trafi tutaj gdy reszta z dzielenia wynosi 1 - to jest liczba nieparzysta
        std::cout << "Liczba jest nieparzysta\n";
    }
    else
    {   //analogicznie gdy reszta rowna sie 0
        std::cout << "Liczba jest parzysta\n";
    }
        
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
