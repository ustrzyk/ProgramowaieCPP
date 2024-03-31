/******************************************************************************

C++ programowanie  obiektowe Wyklad Dziedziczenie

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
//Pracownik jest osoba, zatem pracownik moze dziedziczyc po Osoba
class Pracownik: public Osoba //Oznacza ze Pracownik dziedziczy po osoba
// dzieki dziedziczeni wszystko z Osoba przeszło do Pracownik
{
    private:
        string stanowisko;
        double placa;
    public:
        Pracownik(string _imie,string _nazwisko,string _stanowisko,double _placa)
        :Osoba(_imie,_nazwisko),stanowisko(_stanowisko),placa(_placa) //lista inicjalizacyjna
        //wywoluje ona konstruktor z klasy Osoba ktora wypelnia pola imie i nazwisko
        {
            //imie=_imie;
            //nazwisko=_nazwisko;
            //stanowisko=_stanowisko;
            //placa=_nazwisko;
        }
        void Drukuj() const
        {
            Osoba::Drukuj();//to jest wywolanie funkcji Drukuj klasy Osoba, c
            // zyli wydrukowanie imie i nazwiska pracownika
            cout<<endl<<"Stanowisko: "<<stanowisko;
            cout<<endl<<"Placa: "<<placa;
        }
    
};

int main()
{
    Pracownik p1("Tomasz","Saran","Kierownik",6000);
    p1.Drukuj();
    
    return 0;
}

