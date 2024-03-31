/******************************************************************************

Tomasz saran grupa B 

Napisz program wczytujący do tablicy 10 liczb. 
Program ma wypisać najmniejszą i największą liczbę w tablicy.


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

double wypiszMin(double tab[], int n) 
{   
    double min=tab[0];
    
    for (int i = 1; i < n; i++) 
        if (tab[i] < min) min = tab[i];
    
return(min);
}

double wypiszMax(double tab[], int n) 
{   
    double max=tab[0];
    
    for (int i = 1; i < n; i++) 
        if (tab[i] > max) max = tab[i];
    
return(max);
}

int main() {
    
    char koniecProgramu;
    const int n = 10;
    double tab[n];
    double min = tab[0];
    double max = tab[0];
    
    do 
    {
    wprowadzLiczby(tab, n);
    min=wypiszMin(tab,n);
    max=wypiszMax(tab,n);
    cout << "Najmniejsza liczba tablicy to : " << min << endl;
    cout << "Największa liczba tablicy to : " << max << endl;
    
    cout << "***********************"<< endl;    
    cout << "Czy chcesz zakończyć program ? T/N "<< endl;
    cin >> koniecProgramu;    
    }
    while(koniecProgramu!='T'&& koniecProgramu!='t');    
    
    return 0;
}
