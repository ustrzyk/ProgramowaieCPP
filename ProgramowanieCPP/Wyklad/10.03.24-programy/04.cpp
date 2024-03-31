/******************************************************************************

// ten sam program ale napisany obiektowo ,public, private

*******************************************************************************/
#include <iostream>
using namespace std;

class Pracownik // poczatek klasy zdefiniowany za pomoca class, domyslnie ma wszystko przywatne
{
    private: //wszytko nizej jest prywatne, bedzie dostepne tylko w tej klacie    
        string imie;
        string nazwisko;
        double placa;

    public: // wszystko ponizej jest public, czyli dostepne wszedzie  
        void Wyswietl()
        {
            cout<<endl;
            cout<<endl<<"Imie : "<<imie;
            cout<<endl<<"Nazwisko : "<<nazwisko;
            cout<<endl<<"Placa : "<<placa;
        }
    
        void Wpisz() // & bo się zmienia
        {
            cout<<endl;
            cout<<endl<<"Podaj imie : ";
            cin>>imie;
            cout<<endl<<"Podaj nazwisko : ";
            cin>>nazwisko;
            cout<<endl<<"Podaj place : ";
            cin>>placa;
        }
};    // koniec klasy zdefiniowany za pomoca klas

int main()
{
    cout<<"Wyklad 1";
    Pracownik p1; // to jest pierwysz obiekt klasy Pracownik
    p1.Wpisz();
    p1.Wyswietl();
    
    Pracownik p2; // to jest pierwysz obiekt klasy Pracownik
    p2.Wpisz();
    p2.Wyswietl();
    //cout<<endl<<p1.imie;

    return 0;
}