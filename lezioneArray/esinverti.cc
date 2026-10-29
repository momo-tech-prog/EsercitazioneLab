#include <iostream>
#include <cstdlib>
#include <ctime>   
using namespace std;

void riempiArray(int a[], int dim) {
    for (int i = 0; i < dim; i++) {
        a[i] = rand() % 10;
    }
}

void stampaArray(int a[], int dim) {
    cout << "Array con dimensione : " << dim << " [ ";
    for (int i = 0; i < dim; i++) {
        cout << a[i] << " ";
    }
    cout << "]" << endl;
}

void invertiArray(int a[], int dim) {
    for (int i = 0; i < dim / 2; i++) {
        int temp = a[i];
        a[i] = a[dim - 1 - i];
        a[dim - 1 - i] = temp;
    }
}

int main() {
    srand(time(NULL));
    
     int DIM = 10;
    int a[DIM];

    riempiArray(a, DIM);
  
    cout << "Array originale:" << endl;
    stampaArray(a, DIM);

    invertiArray(a, DIM);

    cout << "Array invertito:" << endl;
    stampaArray(a, DIM);

    return 0;
}