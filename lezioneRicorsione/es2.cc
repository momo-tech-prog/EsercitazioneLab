#include <iostream>;
using namespace std;

void stampaBinario(int n) {
    if ( n==1 || n==0 ) {
        cout << n;
    } else {
        stampaBinario(n/2);
        cout << (n%2);
    } 
}

int main() {

    int n = 0;
    cout << "Inserire numero positivo" << endl;
    cin >> n;

    if (n<0) {
        cout << "Attenzione! Numero deve essere positivo!" <<endl;
        exit(1);
    }

    cout << "binario: " << stampaBinario(n) << endl;
    return = 0;
}