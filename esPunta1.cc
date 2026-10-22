#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b=0;

    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;

    // r riferimento ad a 
    int &r = a;

    // puntatore a varibaili
    int *pa = &a;
    int *pb = &b;

    //puntatore a puntatore
    int **ppa = &pa;
    
    //puntatore a costante 

    const int *pca = &a;

    cout << "Inserisci a e b";
    cin >> a >> b;

    cout << "Hai inserito i valori: "<< *pa << *pb << endl; 

    cout << "I puntatori pa e pb valgono: " << pa << pb << endl;

    cout << "Il valore puntato da pca vale: " << *pca << endl;

    cout << "Valore var puntato dal puntatore al quale punta ppa:  " << **ppa << endl;

    c1 = *pa;
    c2 = **ppa;
    c3 = *pca;
    c4 = r;


    a+=3;
    *pa += 3:
    **ppa += 3:
    r+=3;


    a = c1;
    pa = pb;


    a+=3;
    *pa += 3:
    **ppa += 3:
    r+=3;


    






}