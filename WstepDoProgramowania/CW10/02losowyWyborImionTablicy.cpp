/******************************************************************************

Tomasz saran grupa B 

Napisz program który losuje imiona wcześniej wpisane 
do tablicy jednowymiarowej np. 10 elementowej.


*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() 
{
    
    char koniecProgramu;
    string imionaStudentow[10] = {"Marian", "Waldek", "Ola", "Maria", "Mikolaj",
    "Dariusz", "Ewa", "Filip", "Grażyna","Barbara"};
    
    do 
    {
        srand(time(NULL));
        int losoweImie = rand() % 10;
    
        cout << "Wylosowane imię to: " << imionaStudentow[losoweImie] << endl;
        
        cout << "Czy chcesz zakonczyc program? (t/n): ";
        cin >> koniecProgramu;
    } while (koniecProgramu != 't');
    
    return 0;
}

