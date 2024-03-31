
   
/******************************************************************************

// ten sam program ale napisany obiektowo ,public, private + konstruktor + this

*******************************************************************************/
#include <iostream>
using namespace std;

class Towar 
{
 private: 
    string nazwa;
    string kod;
    double cena;
    double ilosc;
 public:  
    Towar(string nazwa, string kod, double cena, double ilosc) 
    {
        this->nazwa=nazwa;
        this->kod=kod;
        this->cena=cena;
        this->ilosc=ilosc;
    }     
    
    void Wyswietl()
         {
            cout<<endl;
            cout<<endl<<"Nazwa: "<<nazwa; 
            cout<<endl<<"Kod: "<<kod;
            cout<<endl<<"Cena: "<<cena;
            cout<<endl<<"Ilosc: "<<ilosc; 
         }     
};    // koniec klasy zdefiniowany za pomoca klas

int main()
{
    cout<<"Wyklad 2";
    Towar t1("Towar 1","T1",1,1); // tu podajemy tyle konkretnych danych ile wygal konstruktor
    t1.Wyswietl();
    
    
return 0;
}
