/******************************************************************************

Tomasz saran grupa B 

Utwórz tablicę, zawierającą liczby całkowite: np. 7, 3, 1, 3, 9, 5, 2, 4, 2, 2.  
(tablice można też uzupełnić losowymi liczbami) 
Program ma zsumować ile jest danych cyfr w tabeli.
Np. 1 występuje 1 raz, 2 wystepuje 3 razy itd.


*******************************************************************************/

#include <iostream>
using namespace std;

void wprowadzLiczby(int tab[], int n) 
{
    for (int i = 0; i < n; i++) {
        cout << "Podaj liczbe : " << i + 1 << ": ";
        cin >> tab[i];
    }
}

void zliczWystapieniaLiczby(int tab[], int n, int wystapienia[]) 
{   
    for (int i = 0; i < n; i++) {
        wystapienia[tab[i]]++;
    }
}

void wypiszWystapieniaLiczby(int wystapienia[]) 
{   
    cout << "Liczby w tablicy występują następującą liczbę razy:" << endl;
    for (int i = 0; i < 10; i++) {
        if (wystapienia[i] > 0) {
            cout << i << " występuje " << wystapienia[i] << " razy." << endl;
        }
    }
}

int main() 
{
    const int n = 10;
    int tab[n];
    int wystapienia[10] = {0};
    char koniecProgramu;
    
    do 
    {
        wprowadzLiczby(tab, n);
        zliczWystapieniaLiczby(tab, n, wystapienia);
        wypiszWystapieniaLiczby(wystapienia);
        
        cout << "***********************"<< endl;    
        cout << "Czy chcesz zakończyć program ? T/N "<< endl;
        cin >> koniecProgramu;    
    }
    while(koniecProgramu!='T'&& koniecProgramu!='t');    
    
    return 0;
}

