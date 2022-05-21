// Zad6.1b.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

//zapisujac tablice 2-wymiarowa jako char* argv[] uzyskujemy mozliwosc przekazania takiej tablicy o dowolnych wymiarach
int main(int argc, char* argv[])
{
    //argc zawsze bedzie miec wartosc >=1 bo jako pierwszy argument podawana jest nazwa programu!!!!!!!
    std::cout << "You have entered " << argc
        << " arguments:" << "\n";

    for (int i = 0; i < argc; ++i)
        std::cout << argv[i] << "\n"; //argv[i] pobiera tablice 1-wymiarowa. Taka tablica stanowi pojedynczy argument

    int sum = 0;
    //zakladamy ze uzytkownik podaje tylko 1 cyfre w argumencie
    //liczba argumentow jest dowolna
    for (int i = 1; i < argc; ++i)
    {
        //argv[i] -> i-ty argument uzytk. jest to tablica char
        //argv[i][0] -> dostajemy się do pierwszego znaku i-tego argumentu użytk.
        std::cout << argv[i][0]-'0' << "; "; //static_cast uzywamy na konkretnym typie, nie na tablicy

        //argv[i][0] -> to zwroci mi pojedynczy char
        //argv[i][0]-'0' -> to wykona mi konwersje z chara na konkretna wartosc
        //argv[i][0]-'0' -> w tym momencie char z argv jest zamieniany niejawnie na int, '0' rowniez 
        //zamieniane jest niejawnie na int, a nastepnie nastepuje operacja odejmowania

        sum += argv[i][0] - '0';
    }

    std::cout << sum;
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
