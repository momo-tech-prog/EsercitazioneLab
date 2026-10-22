#include <iostream>
using namespace std;

int main() {

	char carattere;
	cout << "Inserisci un carattere in minuscolo ";
	cin >> carattere;
	carattere -= ('a' - 'A');
	cout << "Il carattere in maiuscolo è skibidi " << carattere << endl;


	char carattere2;
	cout << "Inserisci un carattere in maiuscolo ";
	cin >> carattere2;
	carattere2 -= ('A' - 'a');
	cout << "Il carattere in minuscolo è skibidi " << carattere2 << endl;
	return 0;
}
