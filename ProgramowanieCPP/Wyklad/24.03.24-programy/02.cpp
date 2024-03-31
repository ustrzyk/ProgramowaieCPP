/******************************************************************************

C++ programowanie  obiektowe Wyklad Dziedziczenie protected

*******************************************************************************/
#include <iostream>
using namespace std;

class Osoba 
{
    private:
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
        :Osoba(_imie,_nazwisko),stanowisko(_stanowisko)
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
    Pracownik p1("Tomasz","Saran","Kierownik");
    p1.Drukuj();
    p1.DrukujNazwiskoStanowisko();
    cout<<endl;
    
    
    return 0;
}

