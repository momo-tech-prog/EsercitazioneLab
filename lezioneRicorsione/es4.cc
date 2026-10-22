#include <iostream>
using namespace std;

int sommaPari(int n) {
    int somma = 0;
    if (n%2 == 1) {
        n--;
    }

    if (n==0) {
        return somma;
    } else {
        somma = n + sommaPari(n-2);
    }

    return somma;
    
}


int main () {
    int n = 0;
    cout << "Inserire un numero";
    cin >> n;

    cout << "Somma: " << sommaPari(n);
    return 0;
}