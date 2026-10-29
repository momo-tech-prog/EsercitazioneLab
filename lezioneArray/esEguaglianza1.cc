#include <iostream>
#include <cstdlib> // Per rand() e srand()
#include <ctime>   // Per time()
using namespace std;

void riempiArray(int a [], int dim, int n) {
    for (int i=0; i< dim ; i++) {
        a[i] = rand() % (n+1);
    }
}

void stampaArray(int a [], int dim) {
    cout << "Array con dimensione : "<< dim << " [ ";
    for (int i = 0 ; i<dim; i++) {
        cout <<a[i] << ", ";
    }
    cout << "]" << endl;
}

int confrontaArray (int a[], int b[], int dim) {
    int ctr = 0;
    for (int i = 0; i < dim; i++) {
        if (a[i] == b[i]) {
            ctr+=1;
        }
    }    
    return ctr;
}

int main () {
    srand(time(NULL));
    int a[5];
    int b[5]z;

    riempiArray(a,5,7);
    riempiArray(b,5,7);
    stampaArray(a,5);
    stampaArray(b,5);

    cout << " Il numero di valori uguali alla stessa pos sono: " << confrontaArray(a,b,5) << endl; 
}