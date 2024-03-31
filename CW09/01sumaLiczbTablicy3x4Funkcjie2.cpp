/******************************************************************************

Tomasz saran grupa B 

Napisz tablice dwuwymiarową 3x4. 
Program ma podać sumę wszystkich liczb zawartych w tablicy.


*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

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

void wprowadzLiczbyLosowo(int tab[][4], int n, int m) 
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

void wypiszLiczby(int tab[][4], int n, int m) 
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


int sumaElementowTablicy(int tab[][4], int n, int m) 
{
    int suma = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            suma += tab[i][j];
        }
    }
    return suma;
}

int main() 
{
    int tab[3][4];
    int i,j;
    char koniecProgramu;
    int suma = 0;
    
    do 
    {
        wprowadzLiczbyLosowo(tab,3,4);
        suma = sumaElementowTablicy(tab, 3, 4);
                wypiszLiczby(tab, 3, 4);
        cout << "Suma wszystkich liczb w tablicy to: " << suma << endl;
        
        cout << "Czy chcesz zakonczyc program? (t/n): ";
        cin >> koniecProgramu;
    } while (koniecProgramu != 't');
    
    return 0;
}

