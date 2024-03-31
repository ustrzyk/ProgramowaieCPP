
/******************************************************************************

Tomasz Saran grupa B CW6 zadanie 6

Napisz funkcję, która sprawdza czy podany przez użytkownika hasło jest prawidłowe i wypisze 
na ekranie „logowanie poprawne” lub „ błędne hasło”. Gdy hasło jest błędne program pyta o ponowne
wprowadzenia hasła. Hasło podajemy jako parametr funkcji.

*******************************************************************************/
#include <iostream>
//#include <cmath>
#include <string>
using namespace std;

void sprawdzHaslo(string a) 
{
    string dobreHaslo = "haslotomka";
    
    while (a != dobreHaslo) 
        {
        cout << "Bledne haslo " << endl;
        cout << "Podaj haslo jeszcze raz" << endl;
        cin >> a;
        }
    cout << "Logowanie poprawne " << endl;
}


int main() {
    
    string mojeHaslo;
    char koniecProgramu;
    
    
    do{
        cout << "Podaj haslo by uruchomic program "<<endl;
        cin >> mojeHaslo ; 
        sprawdzHaslo(mojeHaslo);
        
        cout << "***********************"<< endl;    
        cout << "Czy chcesz zakończyć program ? T/N "<< endl;
        cin >> koniecProgramu;    
            
            
        }
        while(koniecProgramu!='T'&& koniecProgramu!='t');

    return 0;
}

