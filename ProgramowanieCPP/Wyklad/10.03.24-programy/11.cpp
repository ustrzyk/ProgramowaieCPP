/******************************************************************************

ten sam program ale napisany obiektowo  Funkcje Statyczne

*******************************************************************************/
#include <iostream>
using namespace std;

class Towar 
{
 private: 
    string nazwa;
    string kod;
    //static int liczbaTowarow; // to jest pole statyczne czyli jego wartosc jest wspolna dla wszystkich obiektów klasy Towar
    
 public:  
    static int liczbaTowarow;
    Towar(string nazwa, string kod) 
    :nazwa(nazwa),kod(kod)
    {
        liczbaTowarow++;
    }     
    
    void Wyswietl()
         {
            cout<<endl;
            cout<<endl<<"Nazwa: "<<nazwa; 
            cout<<endl<<"Kod: "<<kod;
         } 
    // funkcja statyczna uzywa tylko skladowych statycznych   
    // dzieki temu ze funkcja jest statyczna moze byc urzyuwana na rzecz całej klasy nie obiektu
    static int GetLiczbaTowarow()
    {
        return liczbaTowarow;
    }
}; // koniec obiektu Towar 

// pole statyczne musi miec ustalona poczatkowa wartosc poza klasa
int Towar::liczbaTowarow=0;

int main()
{
    cout<<"Wyklad 2";
    Towar t1("Towar 1","T1"); 
    t1.Wyswietl();
    
    Towar t2("Towar 2","T2"); 
    t2.Wyswietl();
    
    cout<<endl<<"Liczba towarow z obiektu T1: "<<t1.GetLiczbaTowarow();
    cout<<endl<<"Liczba towarow z obiektu T2: "<<t2.GetLiczbaTowarow();
    // Funkcje Statyczne moga byc wywolywanye na rzecz calej klasy
    cout<<endl<<"Liczba towarow z klasy Towar: "<<Towar::GetLiczbaTowarow();
    
    return 0;
}
