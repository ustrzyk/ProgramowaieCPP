
/******************************************************************************

Tomasz Saran grupa B CW7 zadanie 1

Wykorzystując pętle, warunki i switch'a napisz program, który oblicza pole i obwód trójkąta, kwadratu i prostokąta.
Użytkownik ma wybierać co chce obliczyć oraz podawać dane do obliczeń. Po obliczeniu program ma zapytać czy użytkownik 
chce coś obliczyć czy nie. Jeśli tak to znów wyświetla się menu wyboru, jeśli nie to koniec programu.

Zmodyfikuj zadanie z ćwiczeń nr 5 obliczające pole i obwód kwadratu, prostokąta, trójkąta tak aby wszystkie obliczenia 
były w funkcjach zwracających wartość. A tylko odpowiednie funkcje były wywołane w switch.

Próbowałem na wskaznikach zrobić ale nie poszło :() problem mam z typami danych int i float
na float wszystko zrobic ? ale tak nie chce prosze o wskazuówki lub coś prostrzego rzebym sobie pocwiczył

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

// Zmieniam typy zwracane i argumentów na wskaźniki
int* obwodTrojkata(int* a,int* b,int* c)
{
    int* obwod = new int; // Tworzę nowy wskaźnik i alokuję pamięć
    *obwod = *a + *b + *c; // Przypisuję wartość do miejsca wskazywanego przez wskaźnik

return(obwod);    
}

int* obwodKwadratu(int* a)
{
    int* obwod = new int;
    *obwod = 4*(*a);

return(obwod);    
}

int* obwodProstokata(int* a,int* b)
{
    int* obwod = new int;
    *obwod = 2*(*a) + 2*(*b);

return(obwod);    
}

float* poleTrojkata(float* a,float* b,float* c) // kozystam ze wzoru Herona.
{
    float* s = new float;
    float* pole = new float;
   
    *s = (*a + *b + *c) / 2;
    *pole = sqrt(*s * (*s - *a) * (*s - *b) * (*s - *c));

return(pole);    
}

int* poleKwadratu(int* a)
{
    int* pole = new int;
    *pole = (*a)*(*a);

return(pole);    
}

int* poleProstokata(int* a,int* b)
{
    int* pole = new int;
    *pole = (*a)*(*b);

return(pole); 
}

bool sprawdzanieLiczb(int* a)
{
    bool prawda;
    if (*a > 0 ) prawda = true;
     else prawda = false;

return(prawda); 
}

bool sprawdzanieLiczb(int* a,int* b)
{
    bool prawda;
    if (*a > 0 && *b > 0) prawda = true;
     else prawda = false;

return(prawda); 
}

bool sprawdzanieLiczb(int* a,int* b, int* c)
{
    bool prawda;
    if (*a > 0 && *b > 0 && *c > 0 && *a + *b > *c && *a + *c > *b && *b + *c > *a) prawda = true;
     else prawda = false;

return(prawda); 
}

int main()
{
    int a,b,c,wybor,obwod;
    float pole;
    char koniecProgramu;
    do
    {
    cout << " Wybierz co chcesz obliczyć: " << endl ;
    cout << " 1. Obwód trójkąta " << endl ;
    cout << " 2. Obwód kwadratu " << endl ;
    cout << " 3. Obwód prostokąta " << endl ;
    cout << " 4. Pole trójkąta " << endl ;
    cout << " 5. Pole kwadratu " << endl ;
    cout << " 6. Pole prostokąta " << endl ;
    cin >> wybor;
    
    switch(wybor)
    {
        case 1:
        {
            //int a,b,c,obwod;
            cout << " Podaj długości boków trójkąta: " << endl ;
            cin >> a >> b >> c ;
            if (sprawdzanieLiczb(&a,&b,&c) == false) cout << " Blędne dane " << endl ;
            else
            {
                obwod = *obwodTrojkata(&a,&b,&c); // Odbieram wartość zwracaną przez wskaźnik
                cout << " Obwód trójkąta wynosi: " << obwod << endl ;
            }
            break;
        }
        case 2:
        {
            //int a,obwod;
            cout << " Podaj długość boku kwadratu: " << endl ;
            cin >> a ;
            if (sprawdzanieLiczb(&a) == false) cout << " Blędne dane " << endl ;
            else
            {
                obwod = *obwodKwadratu(&a);
                cout << " Obwód kwadratu wynosi: " << obwod << endl ;
            }
            break;
        }
        case 3:
        {
            //int a,b,obwod;
            cout << " Podaj długości boków prostokata: " << endl ;
            cin >> a >> b ;
            if (sprawdzanieLiczb(&a,&b) == false) cout << " Blędne dane " << endl ;
            else
            {
                obwod = *obwodProstokata(&a,&b);
                cout << " Obwód prostokata wynosi: " << obwod << endl ;
            }
            break;
        }
        case 4:
        {
            //float a,b,c,pole;
            cout << " Podaj długości boków trójkąta: " << endl ;
            cin >> a >> b >> c ;
            if (sprawdzanieLiczb(&a,&b,&c) == false) cout << " Blędne dane " << endl ;
            else
            {
                pole = *poleTrojkata(&a,&b,&c);
                cout << " Pole trójkąta wynosi: " << pole << endl ;
            }
            break;
        }
        case 5:
        {
            //int a,pole;
            cout << " Podaj długość boku kwadratu: " << endl ;
            cin >> a ;
            if (sprawdzanieLiczb(&a) == false) cout << " Blędne dane " << endl ;
            else
            {
                pole = *poleKwadratu(&a);
                cout << " Pole kwadratu wynosi: " << pole << endl ;
            }
            break;
        }
        case 6:
        {
            //int a,b,pole;
            cout << " Podaj długości boków prostokata: " << endl ;
            cin >> a >> b ;
            if (sprawdzanieLiczb(&a,&b) == false) cout << " Blędne dane " << endl ;
            else
            {
                pole = *poleProstokata(&a,&b);
                cout << " Pole prostokata wynosi: " << pole << endl ;
            }
            break;
        }
        default: cout << " Nieprawidłowa operacja " << endl ;
        break;
    }
    cout << " *********************** " << endl ;
    cout << " Czy chcesz zakończyć program ? T/N " << endl ;
    cin >> koniecProgramu;
    }while(koniecProgramu != 'T' && koniecProgramu != 't');
    return 0;
}

