
/******************************************************************************

Tomasz Saran grupa B CW6 zadanie 4

Napisz funkcje, która będzie obliczać silnie z liczby n.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;


int silniaRekurencja(unsigned int n) 
{
    if (n == 0) return 1;
     else return n * silniaRekurencja(n - 1);
}

int silniaPetla(int n) 
{
    unsigned int wynik = 1;
    for (int i = 1; i <= n; i++) 
        {
        wynik *= i;
        }
return wynik;
}

int silniaPetlaTablica(int n) //chyba najszybsze
{
    unsigned int wynik = 1;
    int tablica[n+1];
    tablica[0] = 1;
    for (int i = 1; i <= n; i++) 
        {
        tablica[i] = i * tablica[i-1];
        }
    wynik = tablica[n];
return wynik;
}



bool sprawdzanieLiczb(int a)
{
    bool prawda;
    if (a >= 0 ) prawda = true;
     else prawda = false;

return(prawda); 
}



int main() {
    
    int liczba;
    unsigned int silnia;
    char koniecProgramu;
    
    
    do{
        cout << "Podaj liczbe z dla ktorej chcesz policzyc silnie: "<<endl;
        cin >> liczba ; 
        if (sprawdzanieLiczb(liczba)==false) 
        cout << "Blędne dane" << endl;
        else 
            {
            //silnia=silniaPetla(liczba);
            //silnia=silniaRekurencja(liczba);
            silnia=silniaPetlaTablica(liczba);
            cout << "Silnia liczby  " << liczba << " wynosi : " << silnia << endl;
            cout << "***********************"<< endl;    
            cout << "Czy chcesz zakończyć program ? T/N "<< endl;
            cin >> koniecProgramu;    
            }
            
        }
        while(koniecProgramu!='T'&& koniecProgramu!='t');

    return 0;
}







