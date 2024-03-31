/******************************************************************************

Tomasz saran grupa B 

Napisz tablice dwuwymiarową 5x5, uzupełnij tablicę losowymi liczbami i odwróć 
kolejność liczb w tablicy. Wypisz tablicę przed i po odwróceniu.


*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



void wypiszLiczby(int tab[][5], int n, int m) 
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

void wypiszLiczbyOdwruconejTablicy(int tab[][5], int n, int m) 
{
    cout << "Tablica dwuwymiarowa o wymiarach " << n << "x" << m << ":\n";
    for (int i = n-1; i >= 0; i--) 
    {
        for (int j = m-1; j >= 0; j--) 
        {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int tab[5][5];
    
    wprowadzLiczbyLosowo(tab,5,5);
    wypiszLiczby(tab,5,5);
    cout << "Tablica odwrucona " << endl;
    wypiszLiczbyOdwruconejTablicy(tab, 5, 5);
    return 0;
}




