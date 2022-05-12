// Zad1.5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>

bool czyJestPalindrom(std::string str)
{
    int dl = str.size(); //zwrocenie dlugosci - to samo co length

    for (int i = 0; i < dl/2; i++) //przechodzimy po kolejnych literach stringa od poczatku do polowy
    {
        //if (str.at(i) != str.at(dl - i - 1)) //metoda .at() to samo co []; sprawdzamy czy litery sa rozne
        if (str[i] != str[dl - i - 1])
        { //jesli w ktoryms momencie litery sa rozne -> to nie jest palindrom i zwracamy false
            return false;
            //std::cout << "zaraz bedzie break" << std::endl;
            //break;
        }
    }

    //jezeli caly for wykonal sie poprawnie (czyli wszystkie pary liter byly takie same) -> to jest palindrom
    return true;
}

int main()
{
    std::cout << czyJestPalindrom("KAJAK") << std::endl;
    std::cout << czyJestPalindrom("ANNA") << std::endl;
    std::cout << czyJestPalindrom("KAJA") << std::endl;

    int i = 0;
    int j = 10;

    for (; i < j; i++, j--) {
        std::cout << i <<  " : " << j << std::endl;
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
