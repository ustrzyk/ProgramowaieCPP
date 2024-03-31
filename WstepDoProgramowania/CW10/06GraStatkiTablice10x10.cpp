/******************************************************************************

Tomasz saran grupa B 

Napisz „grę w statki” ale w uproszczonej wersji. 
Wykorzystaj do tego tablice wielowymiarową 10x10.
Użytkownik podaje współrzędne a program odpowiada czy trafił czy spudłował. 
Tablice możesz uzupełnić ręcznie lub losowo. 
Program ma pytać o współrzędne do momentu gdy wszystkie statki zostaną zatopione.


*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void wypiszLiczby(int tab[][10], int n, int m) 
{
    cout << "Tablica dwuwymiarowa o wymiarach " << n << "x" << m << ":\n";
    for (int y = 0; y < m; y++) 
    {
        for (int x = 0; x < n; x++) 
        {
            cout << tab[x][y] << " ";
        }
        cout << endl;
    }
}



void wprowadzStatkiLosowo(int tab[][10], int n, int m, int statki) 
{
    srand(time(NULL));
    for (int i = 0; i < statki; i++)
    {
        n = rand() % 10;
        m = rand() % 10;
        if (tab[n][m] == 0)
        {
            tab[n][m] = 1;
        }
        else
        {
            i--;
        }
    }
}



int main()
{
    int tablicaGry[10][10] = {0};
    int statki = 10;
    int wiersz, kolumna;



    wprowadzStatkiLosowo(tablicaGry,10,10,statki);
    
    wypiszLiczby(tablicaGry,10,10);
    


    while (statki > 0)
    {
        cout << "Podaj wiersz (0-9): ";
        cin >> wiersz;
        cout << "Podaj kolumne (0-9): ";
        cin >> kolumna;
        

        if (tablicaGry[wiersz][kolumna] == 1)
        {
            cout << "Trafiony!" << endl;
            tablicaGry[wiersz][kolumna] = 2;
            statki--;
        }
        else
        {
            cout << "Pudło!" << endl;
        }
    }

    cout << "Zatopiłeś wszystkie statki." << endl;

    return 0;
}

