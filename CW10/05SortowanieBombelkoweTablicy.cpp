/******************************************************************************

Tomasz saran grupa B 

Napisz sortowanie bąbelkowe dla tablicy 5 elementowej. 
Wypisz tablice przed i po sortowaniu.


*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



void wypiszLiczby(int tab[], int n) 
{
    for (int x = 0; x < n; x++) 
        {
        cout << tab[x] << " ";
        }
        cout << endl;
    
}

void wprowadzLiczbyLosowo(int tab[], int n) 
{
    srand(time(nullptr));
    
    for (int i = 0; i < n; i++) 
        tab[i] = rand() % 10;

}


void sortowanieBombelkoweTablicy(int tab[], int n) 
{
    int temp;
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n-1; j++) 
        {
            if (tab[j] > tab[j + 1]) 
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
    
}


int main() {
    int n;
    char koniecProgramu;
    
    do 
    {
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;
    int tab[n]; 
    
    wprowadzLiczbyLosowo(tab,n);
    cout << "Tablica przed sortowaniem" << endl;
    
    wypiszLiczby(tab,n);
    
    sortowanieBombelkoweTablicy(tab,n);
    cout << "Tablica po sortowaniu bombelkowym" << endl;
    
    wypiszLiczby(tab,n);
    
    
    cout << "Czy chcesz zakonczyc program? (t/n): ";
    cin >> koniecProgramu;
    } while (koniecProgramu != 't');
    
    
    return 0;
}

