/******************************************************************************

C++ programowanie  obiektowe Wyklad Dziedziczenie kilkupokoleniowe

*******************************************************************************/
#include <iostream>
using namespace std;

class Osoba 
{
    private:
        string imie;
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
    
};
class PracownikEtatowy:public Pracownik
{
    private:
        double placaBrutto;
    public:
        PracownikEtatowy(string imie,string nazwisko,string stanowisko,double placaBrutto)
        :Pracownik(imie,nazwisko,stanowisko),placaBrutto(placaBrutto)
        {
        }
        void Drukuj() const
            {
                Pracownik::Drukuj();
                cout<<endl<<"Placa Brutto"<<placaBrutto;
            }
};
class PracownikGodzinowy :public Pracownik
{
    private:
        double liczbaGodzin;
        double stawkaGodzinowa;
    public:
        PracownikGodzinowy(string imie,string nazwisko,string stanowisko,double liczbaGodzin,double stawkaGodzinowa)
        :Pracownik(imie,nazwisko,stanowisko),liczbaGodzin(liczbaGodzin),stawkaGodzinowa(stawkaGodzinowa)
        {
        }
        void Drukuj() const
        {
            Pracownik::Drukuj();// wywolanie metody Drukuj() z klasy Pracownik, wyswietlenie nazwiska i stanowiska
            cout<<endl<<"Liczba godzin: "<<liczbaGodzin;
            cout<<endl<<"Stawka Godzinowa"<<stawkaGodzinowa;
        }
        double LiczWynagrodznie()
        {
            return liczbaGodzin*stawkaGodzinowa;
        }
};
int main()
{
    Pracownik p1("Tomasz","Saran","Kierownik");
    p1.Drukuj();
    cout<<endl;
    PracownikEtatowy pe1("Adam","Etatowy","Kierownik",6000);
    pe1.Drukuj();
    cout<<endl;
    PracownikGodzinowy pg1("Marian","Godzinowy","Kierownik",100,6000);
    pg1.Drukuj();
    cout<<endl;
    cout<<endl<<"Wynagrodznie godzinowego: "<<pg1.LiczWynagrodznie();
    
    
    
    return 0;
}

