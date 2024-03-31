/******************************************************************************

C++ programowanie  obiektowe Wyklad Obiekty Konstruktor Kopiujacy

*******************************************************************************/
#include <iostream>
using namespace std;

class Rachunek 
{
 private: 
    string numer;
    string daneWlasciciela;
 public:  
    Rachunek(string numer, string daneWlasciciela) 
    :numer(numer),daneWlasciciela(daneWlasciciela)
    {
    }     
    Rachunek(Rachunek &wzor) // konstruktor kopiujacy
    {
        numer=wzor.numer;
        daneWlasciciela=wzor.daneWlasciciela;
    }
    void Drukuj() 
         {
            cout<<endl;
            cout<<endl<<"Numer: "<<numer; 
            cout<<endl<<"Dane Wlasciciela: "<<daneWlasciciela;
         } 
};    
int main()
{
    cout<<"Wyklad 3";
    Rachunek r1("1","Wlasciciel 1"); 
    r1.Drukuj();
    
    Rachunek r2(r1); // tu tworzymy rachunek r2 taki sam jak r1. przy pomocy konstruktora kopiujacego
    r2.Drukuj();
    
    return 0;
}
