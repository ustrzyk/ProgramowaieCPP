/******************************************************************************
1. Klasa to zbiór danych składowych i funkcji składowych logiczie ze sobą powiązanych.
2. Klasę można definiować za pomocą słów kluczowych struck lub class.
3. Na podstawie klasy można tworzyć obiekty, czyli konkretnych reprezentanów danej klasy. Obiektów dana klasa moze miec nieskończenie wiele.
4. Roznica miedzy programowaniem strukturalnym a obiektami:

Sa trzy metody przekazywania parametrów do metod:
- przez wartość, Pracownik p; ,nie zmienia się
- przez referencje, Pracownik &p; zmienia
- przez wskaznik, Pracownik *p; zmienia


Funkcja wpisz i wyswietl jest poza klasą . Tak nie bedziemy programować !!!!!

*******************************************************************************/
#include <iostream>
using namespace std;

struct Pracownik
{
    string imie;
    string nazwisko;
    double placa;
};

void Wyswietl(Pracownik p)
{
  cout<<endl;
  cout<<endl<<"Imie : "<<p.imie;
  cout<<endl<<"Nazwisko : "<<p.nazwisko;
  cout<<endl<<"Placa : "<<p.placa;
}

void Wpisz(Pracownik &p) // & bo się zmienia
{
  cout<<endl;
  cout<<endl<<"Podaj imie : ";
  cin>>p.imie;
  cout<<endl<<"Podaj nazwisko : ";
  cin>>p.nazwisko;
  cout<<endl<<"Podaj place : ";
  cin>>p.placa;
}

int main()
{
    cout<<"Wyklad 1";
    Pracownik p; // tw..
    Wpisz(p);
    Wyswietl(p);

    return 0;
}