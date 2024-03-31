
/******************************************************************************

Tomasz Saran grupa B CW6 zadanie 7

Napisz funkcje, który wczyta trzy liczby a następnie sprawdzi czy stanowią one trójkę pitagorejską.
Czyli sprawdzi czy suma kwadratów dwóch mniejszych liczb jest równa kwadratowi liczby największej.
Liczby 3, 4 oraz 5 stanowią taką trójkę. W przypadku podania trójki pitagorejskiej należy wyświetlić
komunikat „Liczby stanowią trojkę pitagorejska”, w przeciwnym razie „To nie jest trojka pitagorejska”. 
W programie należy założyć, że użytkownik wpisze liczby w dowolnej kolejności, np. 5, 3, 4.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;


int najwiekszaLiczba(int a, int b, int c) 
{
int max = a;
if (b > max) max = b;
if (c > max) max = c;
return max;
}


bool czyTrojkaPitagorasa(int a, int b, int c) 
{
    int najwieksza = najwiekszaLiczba(a,b,c);
    int sumaKwadratow = 0;
    if (najwieksza == a) sumaKwadratow = b * b + c * c;
    else if (najwieksza == b) sumaKwadratow = a * a + c * c;
    else sumaKwadratow = a * a + b * b;
    
    if (najwieksza * najwieksza == sumaKwadratow) return true;
        else return false;
}


bool sprawdzanieLiczb(int a,int b, int c)
{
    bool prawda;
    if (a > 0 && b > 0 && c > 0) prawda = true;
     else prawda = false;

return(prawda); 
}



int main() {
    
int a,b,c;
char koniecProgramu;
    
    
do{
    cout << "Podaj trzy liczby: "<< endl;
    cin >> a >> b >> c;
    if (sprawdzanieLiczb(a,b,c)==false) 
    cout << "Blędne dane" << endl;
    else 
        {
        if (czyTrojkaPitagorasa(a, b, c)) cout << "Liczby stanowia trojke pitagorejska." << endl;
        else cout << "To nie jest trojka pitagorejska." << endl;
            
        cout << "***********************"<< endl;    
        cout << "Czy chcesz zakończyć program ? T/N "<< endl;
        cin >> koniecProgramu;    
        }
    }
    while(koniecProgramu!='T'&& koniecProgramu!='t');

    return 0;
}

