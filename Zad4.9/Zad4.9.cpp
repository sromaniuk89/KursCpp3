// Zad4.9.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>

std::string concatenateStrings(std::string s[], char c)
{
    //metoda size() badz length() odnosi sie do klasy string i jest uzywana na obiektach tejze klasy!!!!
    //ta metoda zwraca dlugosc stringa, a NIE wielkosc tablicy typu string
    //w zwiazwku z powyzszym nie ma ona wplywu na tablice klasy string
    //std::cout << s.size() << std::endl; //metoda size NIE dziala na tablicy typu string
    //std::cout << s[0].size() << std::endl; //metoda size DZIALA na obiekcie typu string
    //std::cout << s[0][0] << std::endl; //s[0][0] w taki sposob odnosimy sie do konkretnego chara z danego stringa
    c = 'x';
    std::cout << sizeof(s) << std::endl; //metoda sizeof zwraca ilosc pamieci zajetej przez dany typ/obiekt
    std::cout << sizeof(s[0]) << std::endl; //metoda sizeof zwraca ilosc pamieci zajetej przez dany typ/obiekt

    return "test";
}

int main()
{
    std::string s[3] = { "abc", "cda", "efdsdddddddddddddddddddddddddddddddddddddddddddddsdsf12345678901234567890123456789012345678901234567890" };

    std::cout << sizeof(s) << std::endl; //metoda sizeof zwraca ilosc pamieci zajetej przez dany typ/obiekt
    std::cout << sizeof(s[0]) << std::endl; //metoda sizeof zwraca ilosc pamieci zajetej przez dany typ/obiekt
    char c = 'd';
    concatenateStrings(s, c);
    std::cout << c << std::endl;
    std::cout << "Hello World!\n";
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
