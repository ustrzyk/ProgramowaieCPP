/******************************************************************************

Tomasz saran grupa B 

Napisz program wczytujący do tablicy 5x5 losowe liczby. 
Program ma wypisać najmniejszą i największą liczbę w tablicy.


*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void wprowadzLiczby(int tab[][5], int n, int m) 
{
    int i,j;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cout << "Podaj wartosc dla elementu [" << i << "][" << j << "]: ";
            cin >> tab[i][j];
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

void wypiszMinMax(int tab[][5], int n, int m) 
{
    int min = 10, max = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
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
    cout << "Najmniejsza liczba w tablicy to: " << min << endl;
    cout << "Największa liczba w tablicy to: " << max << endl;
}

int main() {
    int tab[5][5];
    int i, j;

    wprowadzLiczbyLosowo(tab,5,5);
    wypiszLiczby(tab,5,5);
    wypiszMinMax(tab, 5, 5);
    return 0;
}


