/******************************************************************************

Tomasz Saran grupa B Cw6 zadanie 2

Napisz funkcję, która wyprowadzi na ekran monitora trójkąt narysowany za pomocą znaków *

Przykład:

           *

         ***

       *****

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

void rysujTrojkat(int n) // n - rzad naszego trojkata
{
    for (int i = 1; i <= n; i++)  // wysokosc trojkata
        {
        for (int j = 1; j <= n - i; j++) //rysuje spacje
            {
            cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; j++) //rysuje gwiazdki 
                {
                cout << "*";
                }
            cout << endl;
        }
}


bool sprawdzanieLiczb(int a)
{
    bool prawda;
    if (a > 0 ) prawda = true;
     else prawda = false;

return(prawda); 
}


int main() {
    
    int rozmiarTrojkata;
    char koniecProgramu;
    
    
    do{
        cout << "Podaj wielkość trojkoata w liczbach naturalnych: "<<endl;
        cin >> rozmiarTrojkata; 
        if (sprawdzanieLiczb(rozmiarTrojkata)==false) 
        cout << "Blędne dane" << endl;
        else 
            {
            rysujTrojkat(rozmiarTrojkata);
            cout << "----------------"<< endl;    
            cout << "Czy chcesz zakończyć program ? T/N "<< endl;
            cin >> koniecProgramu;    
            }
            
        }
        while(koniecProgramu!='T'&& koniecProgramu!='t');

    return 0;
}


