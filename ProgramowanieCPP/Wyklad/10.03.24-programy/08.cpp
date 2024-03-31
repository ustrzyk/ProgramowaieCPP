
   
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
        :nazwa(_nazwa),kod(_kod),cena(_cena),ilosc(_ilosc) //lista inicjalizacyjna
         {
            //nazwa=_nazwa;
           // kod=_kod;
            //cena=_cena;
            //ilosc=_ilosc;
         }
    Towar() // to jest konstruktor bezparametryczny
         :Towar("","0",0,0)  //w drugim konstrukotrze wyswoluje pierwszy konstruktor
         {
         }
    Towar(string _nazwa, string _kod, double _cena) 
        :Towar(nazwa,kod,cena,111) // w trzecim konstruktorze wywoluje pierwszy konstruktor
         {
            //nazwa=_nazwa;
            //kod=_kod;
            //cena=_cena;
            //ilosc=1;
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
    
    Towar t2("Towar 2","T2",1); // tu podajemy tyle konkretnych danych ile wygal konstruktor
    t2.Wyswietl();
    
    Towar t3; // tu podajemy tyle konkretnych danych ile wygal konstruktor
    t3.Wyswietl();
    
    
    
return 0;
}

