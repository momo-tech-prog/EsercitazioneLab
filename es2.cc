#include <iostream>
using namespace std;

int main() {
	int a, b,max,min;

    cout << "Inserisci un numero a ";
	cin >> a;
    cout << "Inserisci un numero b ";
	cin >> b;
 
	max = (a>b) * a + (b>a) * b;
    min = (a<b) * a + (b<a) * b;
    
    cout << "il massimo è " << max << endl;

    cout << "il minimo è " << min << endl;

	return 0;
}

