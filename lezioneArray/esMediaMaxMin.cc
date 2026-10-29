#include <iostream>
#include <cstdlib> // Per rand() e srand()
#include <ctime>   // Per time()
using namespace std;

void riempiArray(int a [], int dim) {
    for (int i=0; i< dim ; i++) {
        a[i] = rand() % (10);
    }
}

void stampaArray(int a [], int dim) {
    cout << "Array con dimensione : "<< dim << " [ ";
    for (int i = 0 ; i<dim; i++) {
        cout <<a[i] << ", ";
    }
    cout << "]" << endl;
}

float calcolaMedia (int &max, int &min, int dim, int a[]) {
    float media = 0.0;

    for (int i=0; i<dim; i++){
        media += a[i];
        if (a[i] > max) {
            max=a[i];
        }    
        if (a[i] < min) {
            min=a[i];
        }
    }
    return (media/dim);
}


int main () {
    srand(time(NULL));
    int a[5];
 
    int max=0;
    int min=0;

    riempiArray(a,5);
  
    stampaArray(a,5);


    cout << "La media è: " << calcolaMedia(max,min,5,a) << endl;
    cout << "Il massimo è: " << max << endl;
    cout << "Il minimo è: " <<min<<endl;

}