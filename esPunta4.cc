#include <iostream> 
#include <cmath> 
using namespace std;

float trova_minimo(float a, float b, float c);
float trova_massimo(float a, float b, float c);
float differenza(float max, float min);


int main() {
    float a,b,c;

    cout << "Inserisci a";
    cin >> a;


    cout << "Inserisci b";
    cin >> b;


    cout << "Inserisci c";
    cin >> c;

    cout << "Il minimo è: " << trova_minimo(a,b,c) << endl;

    cout << "Il massimo è: " << trova_massimo(a,b,c) << endl;


    cout << "La differenza è: " << differenza(trova_massimo(a,b,c),trova_minimo(a,b,c)) << endl;
}

float trova_minimo(float a, float b, float c) {
    float min=b;
    if (a<b && a<c) {
        min = a;
    } else if (c>b && c>a ){
        min = c;
    }
    return min;
}

float trova_massimo(float a, float b, float c) {
    float max=b;
    if (a>b && a>c) {
        max = a;
    } else if (c>b && c>a ){
        max = c;
    }
    return max;
}

float differenza(float max, float min) {
    float diff = max-min;
    return diff;
}