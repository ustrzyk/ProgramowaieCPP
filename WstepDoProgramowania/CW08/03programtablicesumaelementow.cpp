/******************************************************************************

Tomasz saran grupa B 

Napisz program wypełniający tablicę jednowymiarową 10 elementową 
liczbami całkowitymi. Wypisz zawartość tablicy.


*******************************************************************************/

#include <iostream>
using namespace std;

void wprowadzLiczby(int tab[], int n) 
{
    for (int i = 0; i < n; i++) {
        cout << "Podaj liczbe calkwita " << i + 1 << ": ";
        cin >> tab[i];
    }
}

void wypiszLiczby(int tab[], int n) 
{
    cout << "Liczby całkowite wprowadzone do tablicy to : " << endl;
    for (int i = 0; i < n; i++) {
        cout << tab[i] << endl;
    }
}

int main() {
    
    char koniecProgramu;
    const int n = 10;
    int tab[n];
    
    do 
    {
    wprowadzLiczby(tab, n);
    wypiszLiczby(tab,n);
    
    cout << "***********************"<< endl;    
    cout << "Czy chcesz zakończyć program ? T/N "<< endl;
    cin >> koniecProgramu;    
    }
    while(koniecProgramu!='T'&& koniecProgramu!='t');    
    
    return 0;
}
