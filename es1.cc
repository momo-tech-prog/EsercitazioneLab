#include <iostream>
using namespace std;

int main() {
	int a, b;
    int valore_assoluto = 0;

    cout << "Inserisci un numero a ";
	cin >> a;
    cout << "Inserisci un numero b ";
	cin >> b;

	valore_assoluto = (a-b)*((a>b) - (b>a)) ;

    cout << "il risultato è " << modulo << endl;
	return 0;
}

