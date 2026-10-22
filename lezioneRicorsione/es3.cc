#include <iostream>
using namespace std;

int sommaCifre(int n) {
    int somma = 0;
    if (n==0) {
        return somma;

    } else {
        somma = n%10 + sommaCifre(n/10);
    }
    return somma;
}

int main() {
    int n;
    cout << "Inserire un numero: ";
    cin >> n ;

    if (n<0) {
        n = -n;
    }

    cout << "La somma delle cifre è: " << sommaCifre(n);

}