/******************************************************************************

C++ programowanie  obiektowe Wyklad Obiekty dynamiczene Operator NEW

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
        cout<<endl<<"To ja twoj konstruktor rachunku numeru: "<< numer;
    }     
    
    void Drukuj() 
         {
            cout<<endl;
            cout<<endl<<"Numer: "<<numer; 
            cout<<endl<<"Dane Wlasciciela: "<<daneWlasciciela;
         } 
    ~Rachunek() 
    {
        cout<<endl<<"To ja twoj dekonstruktor rachunku numeru: "<< numer;
    }     
};    
int main()
{
    cout<<"Wyklad 3";
    // dynamicze tworzenie rachunku 
    Rachunek *r1=new Rachunek("1","Wlasciciel 1");
    r1->Drukuj();//jak mamy wskaznik to zamiast . jest ->
    delete r1;// kasuje obiekt r1 , to ja decyduje kiedy wywoluje sie destruktor
    
    return 0;
}
