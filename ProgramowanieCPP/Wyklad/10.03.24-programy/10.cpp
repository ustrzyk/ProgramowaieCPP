
   
/******************************************************************************

ten sam program ale napisany obiektowo  Pole Statyczne

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
    Towar(string xxxnazwa, string xxxkod) 
    :nazwa(xxxnazwa),kod(xxxkod)
    {
        liczbaTowarow++;
    }     
    
    void Wyswietl()
         {
            cout<<endl;
            cout<<endl<<"Nazwa: "<<nazwa; 
            cout<<endl<<"Kod: "<<kod;
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
    
    
    cout<<endl<<"Liczba towarow t1 = "<<t1.liczbaTowarow;
    cout<<endl<<"Liczba towarow t1 = "<<t2.liczbaTowarow;
    // pole ststyczne mozna wywolywac dla obiektu , ale mozna tez dla klasy operatorem zakresu
    cout<<endl<<"Liczba towarow z klasy Towar = "<<Towar::liczbaTowarow;
    
    return 0;
}


