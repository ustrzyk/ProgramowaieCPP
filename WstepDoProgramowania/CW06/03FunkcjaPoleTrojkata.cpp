
/******************************************************************************

Tomasz Saran grupa B CW6 zadanie 3

zrobiłem to już w zadaniu 1. wiec zrobie to dla trujkata.

Napisz program z funkcją wyliczającą pole prostokąta.

Zmodyfikuj zadanie nr1 tak aby wartości boków były dodawane do funkcji jaki jej parametry
poleprostokata(a,b);


*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;


float poleTrojkata(float a,float b,float c) // kozystam ze wzoru Herona.
{
    float s=0,pole=0;
   
    s = (a + b + c) / 2;
    pole = sqrt(s * (s - a) * (s - b) * (s - c));

return(pole);    
}

bool sprawdzanieLiczb(int a,int b, int c)
{
    bool prawda;
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) prawda = true;
     else prawda = false;

return(prawda); 
}



int main() {
    
    int liczba,a,b,c;
    float pole;
    char koniecProgramu;
    
    
    do{
        cout << "Podaj długości boków trojkata: "<<endl;
        cin >> a >> b >> c; 
        if (sprawdzanieLiczb(a,b,c)==false) 
        cout << "Blędne dane, podaj inne boki trojkata" << endl;
        else 
            {
            pole=poleTrojkata(a,b,c);
            cout << "Pole trojkata wynosi: " << pole << endl;
            cout << "***********************"<< endl;    
            cout << "Czy chcesz zakończyć program ? T/N "<< endl;
            cin >> koniecProgramu;    
            }
            
        }
        while(koniecProgramu!='T'&& koniecProgramu!='t');

    return 0;
}







