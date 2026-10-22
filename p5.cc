#include <iostream;
using namespace std;
int main() {

	int sec;
	cout << "Inserisci i secondi da mezzanotte ";
	cin >> sec;
	int ore =  (sec/3600);
	int min = ((sec - (3600 * ore))/60);
	sec = ((sec - (3600 * ore) - (60*min)));
	
	cout << "l'orario è " << ore << ":" << min << ":" << sec << endl;
	
}
