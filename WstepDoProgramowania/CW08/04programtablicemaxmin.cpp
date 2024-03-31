/******************************************************************************

Tomasz Saran grupa B 
Napisz program wczytujący do tablicy 10 imion. Wypisz imiona w odwrotnej kolejności.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

void odwrocKolejnosc(string tab[], int n) 
{
    for (int i = 0; i < n / 2; i++) {
        string temp = tab[i];
        tab[i] = tab[n - i - 1];
        tab[n - i - 1] = temp;
    }
}

void wprowadzImiona(string tab[], int n) 
{
    for (int i = 0; i < n; i++) {
        cout << "Podaj imię " << i + 1 << ": ";
        cin >> tab[i];
    }
}

void wypiszImiona(string tab[], int n) 
{
    cout << "Imiona w odwrotnej kolejności: " << endl;
    for (int i = 0; i < n; i++) {
        cout << tab[i] << endl;
    }
}

int main() {
    
    char koniecProgramu;
    const int n = 10;
    string tab[n];
    
    do 
    {
    wprowadzImiona(tab, n);
    odwrocKolejnosc(tab, n);
    wypiszImiona(tab,n);
    
    cout << "***********************"<< endl;    
    cout << "Czy chcesz zakończyć program ? T/N "<< endl;
    cin >> koniecProgramu;    
    }
    while(koniecProgramu!='T'&& koniecProgramu!='t');    
    
    return 0;
}
