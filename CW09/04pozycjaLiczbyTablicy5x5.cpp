/******************************************************************************

Tomasz saran grupa B 

Napisz program wczytujący do tablicy 5x5 losowe liczby. 
Użytkownik podaje liczbę a program ma wypisać pozycję tej liczby w tablicy.


*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void wprowadzLiczby(int tab[][5], int n, int m) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cout << "Podaj wartosc dla elementu [" << i << "][" << j << "]: ";
            cin >> tab[i][j];
        }
    }
}

void wprowadzLiczbyLosowo(int tab[][5], int n, int m) 
{
    int i,j;
    srand(time(nullptr));
    
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            tab[i][j] = rand() % 10;
        }
    }
}

void wypiszLiczby(int tab[][5], int n, int m) 
{
    cout << "Tablica dwuwymiarowa o wymiarach " << n << "x" << m << ":\n";
    cout << "+---";
    for (int y = 1; y < m; y++) 
    {
        cout << "----";
    }
    cout << "-\n";
    for (int x = 0; x < n; x++) 
    {
        cout << "| ";
        for (int y = 0; y < m; y++) 
        {
            cout << tab[x][y] << " | ";
        }
        cout << "\n----";
        for (int y = 1; y < m; y++) 
        {
            cout << "----";
        }
        cout << "-\n";
    }
}

void znajdzPozycjeLiczby(int tab[][5], int n, int m, int liczba) 
{
    int i,j;
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            if (tab[i][j] == liczba) 
            {
                cout << "Liczba " << liczba << " znajduje się na pozycji [" << i << "][" << j << "]\n";
            }
        }
    }
}







int main() {
    int tab[5][5];
    int i, j, liczba;
    
    wprowadzLiczbyLosowo(tab, 5, 5);
    wypiszLiczby(tab,5,5);

    cout << "Podaj liczbę: ";
    cin >> liczba;

    znajdzPozycjeLiczby(tab, 5, 5, liczba);

    return 0;
}

