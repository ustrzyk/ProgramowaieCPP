/******************************************************************************

// ten sam program ale napisany obiektowo (wyswietl i wpisz jest wewnatrz klasy). 
tak bedziemy programowac

*******************************************************************************/
#include <iostream>
using namespace std;

struct Pracownik // poczatek klasy zdefiniowany za pomoca struct
{
    string imie;
    string nazwisko;
    double placa;
 
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
};    // koniec klasy zdefiniowany za pomoca struct

int main()
{
    cout<<"Wyklad 1";
    Pracownik p1; // to jest pierwysz obiekt klasy Pracownik
    p1.Wpisz();
    p1.Wyswietl();

    return 0;
}