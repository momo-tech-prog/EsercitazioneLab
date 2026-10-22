#include <iostream> 
#include <cmath> 
using namespace std;

float distanzaPunti(float x1, float y1, float x2, float y2);


int main() {
    float x1,y1,x2,y2;

    cout << "Inserisci la x del primo punto: ";
    cin >> x1;

    cout << "Inserisci la y del primo punto: ";
    cin >> y1;

    cout << "Inserisci la x del secondo punto: ";
    cin >> x2;

    cout << "Inserisci la y del secondo punto: ";
    cin >> y2;

    
    cout <<  "La distanza tra due punti è " << distanzaPunti(x1,y1,x2,y2) << endl;
    

    return 0;

}


float distanzaPunti(float x1, float y1, float x2, float y2) {
    float distanza = sqrt(pow((y2-y1),2) + pow((x2-x1),2));
    return distanza;
}