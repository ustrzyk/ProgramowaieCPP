/******************************************************************************

Tomasz saran grupa B 

Napisz program który ma trzy tablice jednowymiarowe, 
jedną z imionami uczniów a drugą i trzecią z ocenami uczniów. 
Po podaniu nr w dzienniku program wypisuje imię i oceny ucznia.


*******************************************************************************/

#include <iostream>
using namespace std;

int main() 
{
    
    char koniecProgramu;
    string imionaStudentow[] = {"Marian", "Waldek", "Ola", "Maria", "Mikolaj"};
    int oceny01[] = {4, 3, 3, 2, 5};
    int oceny02[] = {3, 5, 3, 4, 3};
    int numerStudenta;
    do 
    {
            
    cout << "Podaj numer ucznia: ";
    cin >> numerStudenta;

    cout << "Imię ucznia: " << imionaStudentow[numerStudenta - 1] << endl;
    cout << "Oceny ucznia: " << oceny01[numerStudenta - 1] << ", " << oceny02[numerStudenta - 1] << endl;

        
        cout << "Czy chcesz zakonczyc program? (t/n): ";
        cin >> koniecProgramu;
    } while (koniecProgramu != 't');
    
    return 0;
}


