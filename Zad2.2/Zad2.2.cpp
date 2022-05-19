// Zad2.2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int random1To10() {
    return rand() % 10 + 1; //obliczamy reszte z dzielenia i mamy zakres 0-9 potem dodajemy 1
}

int main()
{
    //funkcja rand() generuje liczby pseudolosowe (czyli przy uruchamianiu programu beda za kazdym razem takie same, 
    // ale kolejne liczby w trakcie dzialania programu sa juz inne)
    //funkcja rand() losuje wartosci w zakresie 0 do RAND_MAX (standardowo 32767)
    //zeby przy kazdorazowym uruchomieniu programy liczby generowane przez rand() byly inne uzywa sie srand()
    //srand zmienia pozycje ziarna losowania (random seed)

    int a1 = random1To10();
    int a2 = random1To10();
    int a3 = random1To10();
    std::cout << a1 << "\n";
    std::cout << a2 << "\n";
    std::cout << a3 << "\n";
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
