/******************************************************************************

C++ programowanie  obiektowe Wyklad Funkcje Zaprzyjzanione

*******************************************************************************/
#include <iostream>
using namespace std;

class Rachunek 
{
 private: 
    string numer;
    string daneWlasciciela;
 public:  
    Rachunek(string numer, string daneWlasciciela) 
    :numer(numer),daneWlasciciela(daneWlasciciela)
    {
    }     
    // funkcja stała nie zmiania wartosc bloku
    void Drukuj() const
         {
            cout<<endl;
            cout<<endl<<"Numer: "<<numer; 
            cout<<endl<<"Dane Wlasciciela: "<<daneWlasciciela;
         } 
        // jezeli chcemy aby funkcja ktura jest poza klasa , mogla uzywac skladowych prywatnych tej klasy to powinna byc zaprzyjazniona z ta klasa  
    friend void PoleceniePrzelewu(Rachunek r);
    };// tu jest koniec klasy 
void PoleceniePrzelewu(Rachunek r)
{
    cout<<endl<<"Polecenie przelewu: ";
    cout<<endl<<"Numer rachunku do przelewu: "<<r.numer; // che uzyc pola prywatnego
}

int main()
{
    cout<<"Wyklad 3";
    Rachunek r1("1","Wlasciciel 1"); 
    r1.Drukuj();
    PoleceniePrzelewu(r1);
    
    return 0;
}
