#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int liczba1 = 10;
    int liczba2 = 20;

    int dodawanie = liczba1 + liczba2;
    int odejmowanie = liczba1 - liczba2;
    int mnożenie = liczba1 * liczba2;
    float dzielenie = (float)liczba1 / (float)liczba2;
    float pierwaiastekLiczba1 = sqrt(liczba1);
    float pierwaiastekLiczba2 = sqrt(liczba2);
    double potegaLiczba1 = pow(liczba1, 2);
    double potegaLiczba2 = pow(liczba2, 2);

    cout << "Dodawanie = " << dodawanie << endl;
    cout << "Odejmowanie = " << odejmowanie << endl;
    cout << "Mnozenie = " << mnożenie << endl;
    cout << "Dzielenie = " << dzielenie << endl;
    cout << "Pierwiastek kwadratowy liczby1 = " << pierwaiastekLiczba1 << endl;
    cout << "Pierwiastek kwadratowy liczby2 = " << pierwaiastekLiczba2 << endl;
    cout << "Potęgowanie do 2 liczby1 = " << potegaLiczba1 << endl;
    cout << "Potęgowanie do 2 liczby2 = " << potegaLiczba2 << endl;

    system("pause");

    return 0;
}

//Przestrzeń nazw: using namespace co to jest i dlaczego stosujemy
//Typy danych w c++:
//Proste i zlozone
//Typy proste:
//-Integer (int) - liczby calkowite, 
//-String - typ tekstowy
//-Char
//-Typ znakowy
//-Float