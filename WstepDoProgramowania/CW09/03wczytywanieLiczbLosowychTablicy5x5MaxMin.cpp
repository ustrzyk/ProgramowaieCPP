/******************************************************************************

Tomasz saran grupa B 

Napisz program wczytujący do tablicy 5x5 losowe liczby. 
Program ma wypisać najmniejszą i największą liczbę w tablicy.


*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
void wprowadzLiczby(int tab[][4], int n, int m) 
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


void wypiszLiczby(int tab[][4], int n, int m) 
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


void sumaElementowTablicy(int tab[][4], int n, int m) 
{
    int suma = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            suma += tab[i][j];
        }
    }
    cout << "Suma wszystkich liczb w tablicy to: " << suma << endl;
}

*/


int main() {
    int tab[5][5];
    int i, j;
    int min = 10, max = 0;

    srand(time(nullptr));

    for (i = 0; i < 5; i++) 
    {
        for (j = 0; j < 5; j++) 
        {
            tab[i][j] = rand() % 10;
            if (tab[i][j] < min) 
            {
                min = tab[i][j];
            }
            if (tab[i][j] > max) 
            {
                max = tab[i][j];
            }
        }
    }

    cout << "Tablica dwuwymiarowa o wymiarach 5x5:\n";
    cout << "---------------------\n";

    for (i = 0; i < 5; i++) 
    {
        cout << "| ";
        for (j = 0; j < 5; j++) 
        {
            cout << tab[i][j] << " | ";
        }
        cout << "\n---------------------\n";
    }

    cout << "Najmniejsza liczba w tablicy: " << min << endl;
    cout << "Największa liczba w tablicy: " << max << endl;

    return 0;
}

