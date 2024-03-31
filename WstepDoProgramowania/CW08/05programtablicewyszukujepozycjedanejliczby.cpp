/******************************************************************************

Tomasz Saran grupa B 
Napisz program wczytujący do tablicy 10 liczb rzeczywistych. 
Program ma wypisać sumę wszystkich elementów.

*******************************************************************************/
#include <iostream>
using namespace std;

void wprowadzLiczby(double tab[], int n) 
{
    for (int i = 0; i < n; i++) {
        cout << "Podaj liczbe rzeczywista " << i + 1 << ": ";
        cin >> tab[i];
    }
}

double sumaLiczb(double tab[], int n) 
{
    double suma=0;
    for (int i = 0; i < n; i++) 
    suma += tab[i];
    
    return(suma);
}

int main() {
    
    char koniecProgramu;
    const int n = 10;
    double tab[n];
    double suma = 0;
    
    do 
    {
    wprowadzLiczby(tab, n);
    suma=sumaLiczb(tab,n);
    cout << "Suma liczb: " << suma << endl;
    
    cout << "***********************"<< endl;    
    cout << "Czy chcesz zakończyć program ? T/N "<< endl;
    cin >> koniecProgramu;    
    }
    while(koniecProgramu!='T'&& koniecProgramu!='t');    
    
    return 0;
}
