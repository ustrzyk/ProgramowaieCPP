/******************************************************************************

Tomasz saran grupa B 


Napisz tablice dwuwymiarową 3x4. 
Program ma podać sumę wszystkich liczb parzystych zawartych w tablicy.


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

int main() 
{
    int tab[3][4];
    int i,j;
    char koniecProgramu;
    int suma = 0;
    
    do 
    {
        srand(time(nullptr));
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 4; j++) 
            {
                tab[i][j] = rand() % 10;
                if (tab[i][j] % 2 == 0) {
                    suma += tab[i][j];
                }
            }
        }
        
        cout << "Tablica dwuwymiarowa o wymiarach 3x4:\n";
        cout << "----------------\n";
        
        for (int i = 0; i < 3; i++) 
        {
            cout << "| ";
            for (int j = 0; j < 4; j++) 
            {
                cout << tab[i][j] << " | ";
            }
            cout << "\n-----------------\n";
        }
        
        cout << "Suma elementów parzystych w tablicy: " << suma << endl;
        suma = 0;
        
        cout << "***********************"<< endl;    
        cout << "Czy chcesz zakończyć program ? T/N "<< endl;
        cin >> koniecProgramu;    
    }
    while(koniecProgramu!='T'&& koniecProgramu!='t');    
    
    return 0;
}


