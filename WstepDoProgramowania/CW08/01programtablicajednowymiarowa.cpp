/******************************************************************************

Tomasz saran grupa B 

Napisz program wczytujący do tablicy 10 liczb. 
Użytkownik podaje liczbę a program ma wypisać pozycję tej liczby w tablicy.


*******************************************************************************/
#include <iostream>
using namespace std;

void wprowadzLiczby(double tab[], int n) 
{
    for (int i = 0; i < n; i++) {
        cout << "Podaj liczbe : " << i + 1 << ": ";
        cin >> tab[i];
    }
}

void wypiszPozycjeLiczbyWtablicy(double tab[], int n, double liczba) 
{   
    bool wystepuje = false;
    for (int i = 0; i < n; i++) 
    {
    if (tab[i] == liczba) 
        {
        cout << "Liczba " << liczba << " znajduje się na pozycji " << i + 1 << " w tablicy." << endl;
        wystepuje = true;
        }
    }
    if (!wystepuje) cout << "Liczba " << liczba << " nie występuje w tablicy." << endl;
    
}

int main() {
    
    char koniecProgramu;
    const int n = 10;
    double liczba;
    double tab[n];
    
    do 
    {
    wprowadzLiczby(tab, n);
    cout << "Podaj liczbę, której pozycję chcesz poznać: " << endl;
    cin >> liczba;
    wypiszPozycjeLiczbyWtablicy(tab, n, liczba);
    
    cout << "***********************"<< endl;    
    cout << "Czy chcesz zakończyć program ? T/N "<< endl;
    cin >> koniecProgramu;    
    }
    while(koniecProgramu!='T'&& koniecProgramu!='t');    
    
    return 0;
}
