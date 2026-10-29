#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int filtraIntervallo(int a[], int n, int x, int y) {
    if (x >= y) {
        return -1;
    }

    int azzeramenti = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] < x || a[i] > y) {
            a[i] = 0.0;
            azzeramenti++;
        }
    }

    return azzeramenti;
}

void riempiArray(int a [], int dim, int n) {
    for (int i=0; i< dim ; i++) {
        a[i] = rand() % (n+1);
    }
}

void stampaArray(int  a[], int dim) {
    cout << "[ ";
    for (int i = 0; i < dim; i++) {
        cout << a[i] << " ";
    }
    cout << "]" << endl;
}

int main() {
    srand(time(NULL));

    int DIM = 6;
    int a[DIM];

    riempiArray(a, DIM, 10);

    cout << "Array originale:" << endl;
    stampaArray(a, DIM);

    int x, y;
    cout << "Inserisci x: ";
    cin >> x;
    cout << "Inserisci y: ";
    cin >> y;

    int risultato = filtraIntervallo(a, DIM, x, y);

    if (risultato == -1) {
        cout << "Errore " << endl;
    } else {
        cout << "Numero di elementi azzerati: " << risultato << endl;
        cout << "Array modificato:" << endl;
        stampaArray(a, DIM);
    }

    return 0;
}