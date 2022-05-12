// Zad1.6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <math.h>

void howMany(float value)
{
    //500.0 -> dla kompilatora to jest zapis liczby typu double
    //500.0f -> kompilator widzi to jako liczbe typu float 
    //wartosc dostepnych nominaly; dopisanie f oznacza ze podajemy liczbe typu float
    float data[15] = { 500.0f, 200.0f, 100.0f, 50.0f, 20.0f, 10.0f, 5.0f, 2.0f, 1.0f, 0.5f, 0.2f, 0.1f, 0.05f, 0.02f, 0.01f };
    int amount[15]; //liczba poszczegolnych nominalow
    int n = 0; //iterator po nominalach

    for (int i = 0; i < 15; i++) //inicjalizowanie tablicy zerami
    {
        amount[i] = 0;
    }

    while (value > 0.00) //petla dziala dopoki nie wszystkie pieniadze zostaly wyplacone
    {
        if (value - data[n] >= 0) //sprawdzamy czy wartosc pozostala do wyplaty jest wieksza niz aktualny nominal
        {
            amount[n] = static_cast<int>(std::floor(value / data[n])); //floor -> zaokraglanie w dol
            //std::cout << "v/d: " << value / data[n] << std::endl;
            value -= amount[n] * data[n]; //zdejmujemy wartosc uzyskana jako (liczba nominalow * wartosc nominalu)
            //std::cout << "v: "<< value << std::endl;
            value = round(value * 100) / 100;//sposob na pozbycie sie niedokladnosci w liczbie (do dwoch miejsc po przecinku)
            //123.449 * 100-> round(12 344.9) -> 12 345.0 / 100 -> 123.45

            //std::cout << "v round: "<< value << std::endl;
        }
        n++;
    }

    for (int i = 0; i < 15; i++) 
    {
        std::cout << data[i] << " : " << amount[i] << std::endl;
    }

}

//komentarz testowy
//test2
int main()
{
    howMany(123.45f);
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
