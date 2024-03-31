
/******************************************************************************

Tomasz Saran grupa B CW6 zadanie 1

Napisz program z funkcją wyliczającą pole prostokąta.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;


int poleProstokata(int a,int b)
{
    int pole = 0;
    pole = a*b;

return(pole); 
}


bool sprawdzanieLiczb(int a,int b)
{
    bool prawda;
    if (a > 0 && b > 0) prawda = true;
     else prawda = false;

return(prawda); 
}



int main() {
    
    int liczba,a,b;
    float pole;
    char koniecProgramu;
    
    
    do{
        cout << "Podaj długości boków prostokata: "<<endl;
        cin >> a >> b; 
        if (sprawdzanieLiczb(a,b)==false) 
        cout << "Blędne dane" << endl;
        else 
            {
            pole=poleProstokata(a,b);
            cout << "Pole prostokata wynosi: " << pole << endl;
            cout << "***********************"<< endl;    
            cout << "Czy chcesz zakończyć program ? T/N "<< endl;
            cin >> koniecProgramu;    
            }
            
        }
        while(koniecProgramu!='T'&& koniecProgramu!='t');

    return 0;
}






