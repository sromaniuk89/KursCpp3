// Zad4.10.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

void extractStringsFromString(std::string str, char separator)
{
    int counter = 0;
    std::string temp;
    for (int i = 0; i < str.size(); ++i)
    {
        temp += str[i];

        if (str[i] == separator)
        {
            counter++;
            std::cout << counter << " (1)wydzielony string to: " << temp << std::endl;
            temp.clear();
        }
        if (i == (str.size() - 1) && str[str.size() - 1] != separator)
        {
            counter++;
            std::cout << counter << " (2)wydzielony string to: " << temp << std::endl;
        }
    }
}
int main()
{
    std::string sentence = "Nic dwa razy się nie zdarza";
    std::cout << "Test:" << std::endl;
    extractStringsFromString(sentence, ' ');
    std::cout << "Test:" << std::endl;
    extractStringsFromString("Jamniczek, który się zaplątał w ręczniczek", ' ');
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
