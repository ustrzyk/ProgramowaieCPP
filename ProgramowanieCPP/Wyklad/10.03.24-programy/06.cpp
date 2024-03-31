/******************************************************************************

// ten sam program ale napisany obiektowo ,public, private + konstruktor + konstruktor bezparametryczny

*******************************************************************************/
#include <iostream>
using namespace std;

class Towar // poczatek klasy zdefiniowany za pomoca class, domyslnie ma wszystko przywatne
{
 private: // ta bedzie uzywane w tej klasie
    string nazwa;
    string kod;
    double cena;
    double ilosc;
 public:  // to bedzie wydziane w klasie i poza klasa
    Towar(string _nazwa, string _kod, double _cena, double _ilosc) // to jest konstruktor
         {
            nazwa=_nazwa;
            kod=_kod;
            cena=_cena;
            ilosc=_ilosc;
         }
    Towar() // to jest konstruktor bezparametryczny
         {
            nazwa="bezparametryczny";
            kod="0";
            cena=0;
            ilosc=0;
         }
    Towar(string _nazwa, string _kod, double _cena) // to jest konstruktor 
         {
            nazwa=_nazwa;
            kod=_kod;
            cena=_cena;
            ilosc=1;
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
    
    Towar t3; // tu podajemy tyle konkretnych danych ile wygal konstruktor
    t3.Wyswietl();
    
    Towar t2("Towar 3","T2",3333); // tu podajemy tyle konkretnych danych ile wygal konstruktor
    t2.Wyswietl();
    
    return 0;
}

