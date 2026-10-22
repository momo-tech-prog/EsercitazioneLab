#include <iostream>

using namespace std;

int main() {
    int a, numeroSucc, numeroPrec;
    cout << "Inserisci un numero a: ";
    cin >> a;

    numeroSucc = ++a;
    numeroPrec = ----a;

    cout << "Il numero precedente " << numeroPrec << endl;
    cout << "Il numero successivo " << numeroSucc << endl;
   
}