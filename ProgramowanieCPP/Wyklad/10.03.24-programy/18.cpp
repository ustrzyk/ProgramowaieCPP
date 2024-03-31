/******************************************************************************

C++ programowanie  obiektowe Wyklad Obiekty dynamiczene Obiekt anonimowy

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
    Rachunek("1","Wlasciciel 1").Drukuj(); // obiekt anonimowy
    
    return 0;
}
