/******************************************************************************

Tomasz saran grupa B 

Napisz program w którym znajduje się 10 imion w tablicy, 
po podaniu przez użytkownika imienia sprawdza czy takie imię znajduje się w tablicy.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() 
{
    char koniecProgramu;
    string szukaneImie;
    string imionaStudentow[10] = {"Marian", "Waldek", "Ola", "Maria", "Mikolaj",
    "Dariusz", "Ewa", "Filip", "Grażyna","Barbara"};
    
    do 
    {
        bool znalezioneImie = false;

        cout << "Podaj imię: ";
        cin >> szukaneImie;

        for (int i = 0; i < 10; i++)
        {
            if (imionaStudentow[i] == szukaneImie)
            {
                znalezioneImie = true;
                break;
            }
        }

        if (znalezioneImie)  
            cout << "Imię " << szukaneImie << " znajduje się w tablicy." << endl;
        else 
            cout << "Imię " << szukaneImie << " nie znajduje się w tablicy." << endl;
        
        cout << "Czy chcesz zakonczyc program? (t/n): ";
        cin >> koniecProgramu;
    } while (koniecProgramu != 't');
    
    return 0;
}


