// Zad4.2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>

std::string convert1DCharArrayToString(char cTab[], int a)
{
    std::string str;

    for (int i = 0; i < a; i++)
    {
        str += cTab[i];
    }
    str += '\n';

    return str;
}

//gdy przekazujemy tablice dwuwymiarowa musimy podac drugi wymiar
std::string convert2DCharArrayToString(char cTab[][7], int a, int b)
{
    std::string str;

    for (int i = 0; i < a; i++) //tutaj przechodzimy po wierszach
    {
        for (int j = 0; j < b; j++) //tutaj przechodzimy po kolejnych znakach w wierszu
        {
            //std::cout << cTab[i][j];
            str += cTab[i][j];
        }
        str += '\n';
    }
    return str;
}

int main()
{
    char cTab1D[10] = "123456789";
    char cTab[5][7] = { "abcdef", "asdfef", "qwrtef", "pouyef", "hgfdsa"};

    std::cout << convert1DCharArrayToString(cTab1D, 10);
    std::cout << convert2DCharArrayToString(cTab,5,7);
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
