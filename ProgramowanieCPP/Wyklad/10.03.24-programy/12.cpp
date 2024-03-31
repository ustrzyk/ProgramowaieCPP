/******************************************************************************

C++ programowanie  obiektowe Wyklad Funkcje i Obiekty Stałe

*******************************************************************************/
#include <iostream>
using namespace std;

class Towar 
{
 private: 
    string nazwa;
    string kod;
 public:  
    Towar(string nazwa, string kod) 
    :nazwa(nazwa),kod(kod)
    {
    }     
    // funkcja stała nie zmiania wartosc bloku
    void Wyswietl() const
         {
            cout<<endl;
            cout<<endl<<"Nazwa: "<<nazwa; 
            cout<<endl<<"Kod: "<<kod;
         } 
   
}; // koniec obiektu Towar 

int main()
{
    cout<<"Wyklad 2";
    // to jest obiekt staly , moze wywolywac tylko funkcje stale
    const Towar t1("Towar 1","T1"); 
    t1.Wyswietl();
    
    Towar t2("Towar 2","T2"); 
    t2.Wyswietl();
    
    return 0;
}
