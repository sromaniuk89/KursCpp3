// Zad2.4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>

bool checkString(std::string number)
{
    bool result = true;
    for (int i = 0; i < number.length(); ++i)
    {
        if (!(number[i] >= '0' && number[i] <= '9'))
        {
            result = false;
        }
    }
    return result;
}

int main()
{

    std::string number;
    std::cout << "Podaj number telefonu: " << std::endl;
    std::cin >> number;
    int numOfFigures = number.length();
    bool checkNum = checkString(number);

    if (numOfFigures == 8 && number[0] != '0' && checkNum == true)
    {
        std::cout << "Numer telefonu jest poprawny.";
    }
    else
    {
        std::cout << "Telefon jest błędny.";
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
