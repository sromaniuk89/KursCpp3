// Zad5.8.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

//dziala ale generalnie spaghetti
void drawText()
{
    char cS[8][8] = {
    {' ',' ',' ' ,'$' ,'$' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,' ' ,' ' ,' '},
    {' ','$',' ' ,' ' ,' ' ,' ' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,' ' ,' ' ,' '},
    {' ',' ',' ' ,'$' ,'$' ,' ' ,' ' ,' '},
    {' ',' ',' ' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ',' ' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,'$' ,'$' ,' ' ,' ' ,' '}, };

    char cD[8][8] = {
    {' ',' ','$' ,'$' ,'$' ,' ' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,'$' ,'$' ,' ' ,' ' ,' '}, };

    char cA[8][8] = {
    {' ',' ',' ' ,'$' ,'$' ,' ' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,'$' ,'$' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '}, };

    char cHouse[8][8] = {
    {' ',' ',' ' ,'$' ,'$' ,'$' ,'$' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,'$' ,' '},
    {' ','$',' ' ,' ' ,' ' ,' ' ,'$' ,' '},
    {'$',' ',' ' ,' ' ,' ' ,' ' ,' ' ,'$'},
    {'$',' ','$' ,'$' ,'$' ,' ' ,' ' ,'$'},
    {'$',' ','$' ,' ' ,'$' ,' ' ,' ' ,'$'},
    {'$',' ','$' ,' ' ,'$' ,' ' ,' ' ,'$'},
    {'$','$','$' ,'$' ,'$' ,'$' ,'$' ,'$'}, };

    for (int i = 0; i < 8; i++) { // jedna petla for do iteracji po wierszach 
        for (int j = 0; j < 8; j++)
        {
            std::cout << cS[i][j];
        }
        for (int j = 0; j < 8; j++)
        {
            std::cout << cD[i][j];
        }
        for (int j = 0; j < 8; j++)
        {
            std::cout << cA[i][j];
        }
        for (int j = 0; j < 8; j++)
        {
            std::cout << cHouse[i][j];
        }
        for (int j = 0; j < 8; j++)
        {
            std::cout << cHouse[i][j];
        }
        std::cout << std::endl;
    }
    
}

//dziala ale generalnie spaghetti
void drawTextv2()
{
    char charArray[4][8][8] = {
        {{' ',' ',' ' ,'$' ,'$' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,' ' ,' ' ,' '},
    {' ','$',' ' ,' ' ,' ' ,' ' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,' ' ,' ' ,' '},
    {' ',' ',' ' ,'$' ,'$' ,' ' ,' ' ,' '},
    {' ',' ',' ' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ',' ' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,'$' ,'$' ,' ' ,' ' ,' '}, },


    {{' ',' ','$' ,'$' ,'$' ,' ' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,'$' ,'$' ,' ' ,' ' ,' '}, },

    {{' ',' ',' ' ,'$' ,'$' ,' ' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,'$' ,'$' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '}, },

    {{' ',' ',' ' ,'$' ,'$' ,'$' ,'$' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,'$' ,' '},
    {' ','$',' ' ,' ' ,' ' ,' ' ,'$' ,' '},
    {'$',' ',' ' ,' ' ,' ' ,' ' ,' ' ,'$'},
    {'$',' ','$' ,'$' ,'$' ,' ' ,' ' ,'$'},
    {'$',' ','$' ,' ' ,'$' ,' ' ,' ' ,'$'},
    {'$',' ','$' ,' ' ,'$' ,' ' ,' ' ,'$'},
    {'$','$','$' ,'$' ,'$' ,'$' ,'$' ,'$'}, } };

    for (int i = 0; i < 8; i++) // jedna petla for do iteracji po wierszach 
    { 
        for (int l = 0; l < 4; l++) //tutaj iterujemy po kolejnych literach
        {
            for (int j = 0; j < 8; j++) //nastepnie wyswieltamy znaki dla danej litery w danym wierszu
            {
                std::cout << charArray[l][i][j];
            }
            std::cout << ' ';
        }
        std::cout << std::endl;
    }

}

int main()
{
    drawText();
    drawTextv2();
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
