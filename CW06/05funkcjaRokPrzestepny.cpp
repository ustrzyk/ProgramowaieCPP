
/******************************************************************************

Tomasz Saran grupa B CW6 zadanie 5

Napisz funkcję, która sprawdza czy podany przez użytkownika rok jest rokiem przestępnym.

*******************************************************************************/
#include <iostream>
//#include <cmath>
using namespace std;


int czyRokPrzestepny(int a) 
{
    bool prawda;
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0 ) prawda = true;
        else prawda = false;
        
return(prawda);         
}


bool sprawdzanieLiczb(int a)
{
    bool prawda;
    if (a > 0 ) prawda = true;
     else prawda = false;

return(prawda); 
}



int main() {
    
int rok;
char koniecProgramu;
    
    
do{
    cout << "Podaj rok do sprawdzenia czy przestepny : "<< endl;
    cin >> rok;
    if (sprawdzanieLiczb(rok)==false) 
    cout << "Blędne dane" << endl;
    else 
        {
        if (czyRokPrzestepny(rok)) cout << "Rok jest przestępny " << endl;
        else cout << "Rok jest nieprzestępny " << endl;
            
        cout << "***********************"<< endl;    
        cout << "Czy chcesz zakończyć program ? T/N "<< endl;
        cin >> koniecProgramu;    
        }
    }
    while(koniecProgramu!='T'&& koniecProgramu!='t');

    return 0;
}

