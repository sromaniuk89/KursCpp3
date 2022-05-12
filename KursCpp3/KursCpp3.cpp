// KursCpp3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    int t = 0;
    std::cout << "enter the number: ";
    //std::cin >> t;
    std::string condition = (t > 6) ? "you rock!" : "you suck!";
    std::cout << ((t > 6) ? "you rock!" : "you suck!") << std::endl;

    const float ci = 1;

    std::cout << ci << std::endl;
    int a = static_cast<int>(ci);
    a = 2;
    std::cout << a << std::endl;

    double x = 1.12;
    float y = static_cast<float>(x);

    int b = 71777;
    char c = b;

    std::cout << c << std::endl;
    std::cout << static_cast<int>(c) << std::endl;

    const int tab[5] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        std::cout << tab[i] << std::endl;

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
