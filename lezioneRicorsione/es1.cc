#include <iostream>
using namespace std;


int divisione (int dividendo, int divisore, int &resto) {

    int quoziente;

    if (dividendo < divisore) {
        resto = dividendo;
        quoziente = 0;
    } else {
        dividendo = dividendo - divisore;
        quoziente = 1 + divisione (dividendo-divisore,divisore,resto);
    }

}

int main () {
    int dividendo = 0,divisore = 0,resto = 0;

    int segno = 1;

    cout << "Inserire dividendo: ";
    cin >> dividendo;

    cout << "Inserire divisore: ";
    cout >> divisore;


    if (divisore == 0) {
        cout << "Attenzione Divisione per zero" ;
        exit (1);
    }

    if (dividendo < 0 && divisore > 0) {
        dividendo = - dividendo;
        segno = -1;
    } else if (dividendo > 0 && divisore < 0) {
        divisore = - divisore;
        segno = -1;
    } else if (dividendo < 0 && divisore < 0) {
        divisore = - divisore;
        dividendo = - dividendo;
    }

    int quoziente = divisione(dividendo,divisore,resto);
    cout << "Quoziente: " << quoziente*segno << endl;
    cout << "resto: " << resto;
    return 0; 

}