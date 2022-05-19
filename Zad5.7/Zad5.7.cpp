// Zad5.7.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

//rysowanie szachownicy pola maja wymiar 1x1
void drawBoard(int a = 8)
{
    for (int i = 0; i < a; i++) { //przechodzimy po wszystkich wierszach
        for (int j = 0; j < a; j++) {//przechodzimy po wszystkich znakach
            if ((i+j) % 2 == 0) { //i+j bo kolejne znaki w kolejnych wierszach maja byc rysowane na przemian
                std::cout << "#";
            }
            else {
                std::cout << "o";
            }
        }
       std::cout << std::endl;
    }
 }

//rysowanie szachownicy pola maja wymiar 1x1 v2
void drawChessboardv2(int size)
{
    //^ - XOR - alternatywa wykluczajaca
    // 00 -> 0
    // 01 -> 1
    // 10 -> 1
    // 11 -> 0
    for (unsigned y = 0; y < size; ++y) {
        for (unsigned x = 0; x < size; ++x) {
            if ((y % 2) ^ (x % 2)) {
                std::cout << "o";
            }
            else {
                std::cout << "#";
            }
        }

        std::cout << '\n';
    }

}

//rysowanie szachownicy pola maja wymiar 2x2
void drawBoard2x2(int a = 8) {
    for (int i = 0; i < a; i++) {//rysowanie pol w pionie
        for (int m = 0; m < 2; m++)//podwajanie wierszy, dzieki temu nasze pole zajmuje 2 miejsca w pionie
        {
            for (int j = 0; j < a; j++) {//rysowanie pol w poziomie
                for (int k = 0; k < 2; k++)//podwajanie znakow, dzieki temu nasze pole zajmuje 2 miejsca w poziomie
                {
                    if ((i + j) % 2 == 0) { //warunek zostaje taki sam, ale teraz analizuje pozycje pola a nie konkretnego
                        std::cout << "#";
                    }
                    else {
                        std::cout << "o";
                    }
                }
            }
            std::cout << std::endl;
        }
    }
}

int main()
{
    drawBoard();
    std::cout << '\n';
    drawChessboardv2(8);
    drawChessboardv2(9);
    drawBoard2x2();

    drawBoard2x2(4);
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
