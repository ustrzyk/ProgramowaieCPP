/******************************************************************************

C++ programowanie  obiektowe Wyklad Destruktor

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
    {
    Rachunek r1("1","Wlasciciel 1"); 
    r1.Drukuj();    
    }
    cout<<endl<<"aaa";
    
    
    return 0;
}
