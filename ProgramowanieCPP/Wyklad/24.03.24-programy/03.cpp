/******************************************************************************

C++ programowanie  obiektowe Wyklad Funkcje Wirtualne 1

*******************************************************************************/
#include <iostream>
using namespace std;

class Osoba 
{
    private: //enkapsulacja
        string imie;
    protected:    // pole bedzie uzywane w klasie w Osoba i klasach dziedzieczacaych Pracownik
        string nazwisko;
    public:
        Osoba(string imie,string nazwisko)
        :imie(imie),nazwisko(nazwisko)
        {
        }
        void Drukuj() const
        {
            cout<<endl<<"Imie i nazwisko: "<<imie<<" "<<nazwisko;
        }
};

class Pracownik: public Osoba 
{
    private:
        string stanowisko;
    public:
        Pracownik(string _imie,string _nazwisko,string _stanowisko)
        :Osoba(_imie,_nazwisko),stanowisko(_stanowisko)//konstruktor najpierw wywoła konstruktor macierzysty Osoba , 
        //pózniej sam sie wywoła
        {
        }
        void Drukuj() const
        {
            Osoba::Drukuj();
            cout<<endl<<"Stanowisko: "<<stanowisko;
        }
        void DrukujNazwiskoStanowisko()
        {
            cout<<endl<<"Nazwisko ze stanowiskiem: "<<nazwisko<<" "<<stanowisko;
        }
    
};

int main()
{
    Osoba o1("Adam","Osoba");
    Pracownik p1("Tomasz","Saran","Kierownik");
    cout<<endl;
    
    //wskaznik na Osoba wskazuje na Osoba
    Osoba *wskaznik1=&o1;
    wskaznik1->Drukuj();
    
    //wskaznik na Osoba wskazuje na Pracownik
    Osoba *wskaznik2=&p1;
    wskaznik2->Drukuj();
    
    //wskaznik na Pracownik wskazuje na Osoba !!! tak nie mozna !!
    //Pracownik *wskaznik3=&o1;
    //wskaznik3->Drukuj();
    
    
    
    return 0;
}

