// Zad7.1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int nWD(int a, int b)
{
    if(a==b) 
        return a; //jak tylko 1 insturkcja w if'ie to nie trzeba klamr
    
    if (a % b == 0)
        return b;

    if (b % a == 0)
        return a;

    int nwd = 1;

    if (a > b)
    {
        //10/2=5
        //11/2=5
        for (int i = 2; i <= b / 2; i++)
        {
            if (a % i == 0 && b%i==0) //tu sprawdzamy czy i dzieli a oraz b
            {
                nwd = i;
            }
        }
    }
    else
    {
        for (int i = 2; i <= a / 2; i++)
        {
            if (a % i == 0 && b % i == 0) //tu sprawdzamy czy i dzieli a oraz b
            {
                nwd = i;
            }
        }
    }

    return nwd;
}

int nWW(int a, int b)
{
    int result = (a * b) / nWD(a, b);
    return result;
}

int main()
{
    std::cout << nWD(10,24) << std::endl;
    std::cout << nWD(12, 24) << std::endl;
    std::cout << nWD(24, 24) << std::endl;
    std::cout << nWD(56, 36) << std::endl;

    std::cout << "NWW" << std::endl;
    std::cout << nWW(10, 24) << std::endl;
    std::cout << nWW(12, 24) << std::endl;
    std::cout << nWW(24, 24) << std::endl;
    std::cout << nWW(56, 36) << std::endl;
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
