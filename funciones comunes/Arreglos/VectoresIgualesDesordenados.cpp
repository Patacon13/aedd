#include <iostream>
using namespace std;

void llenaVector(int [], int);
void calculaFrecuencias(int [], int[], int);
bool sonIgualesFrecuencias(int [], int [], int);

int main() {
    //Poniendo {} a la derecha del vector se inicializan todos sus elementos en 0
    int frecuenciasA[10000] {}, frecuenciasB[10000] {}, vectorA[10000], vectorB[10000], n;
    cin >> n;

    llenaVector(vectorA, n);
    llenaVector(vectorB, n);

    calculaFrecuencias(vectorA, frecuenciasA, n);
    calculaFrecuencias(vectorB, frecuenciasB, n);

    if (sonIgualesFrecuencias(frecuenciasA, frecuenciasB, 10000)) {
        cout << "Son iguales" << endl;
    }
    else {
        cout << "No son iguales" << endl;
    }
}

void llenaVector(int vector[], int tl) {
    for (int i = 0; i < tl; i++) {
        cin >> vector[i];
    }
}

void calculaFrecuencias(int vector[], int frecuencias[], int tl) {
    for (int i = 0; i < tl; i++) {
        frecuencias[vector[i]]++; //Si encuentro un "3" en el vector, frecuencias[3] se va a incrementar (es un ejemplo puntual)
    }
}

bool sonIgualesFrecuencias(int frecuenciasA[], int frecuenciasB[], int numeroMaximo) {  //numeroMaximo es el mayor número que puede aparecer en los vectores
    int i = 0;
    bool sonIguales = true;
    while (i < numeroMaximo && sonIguales) {
        if (frecuenciasA[i] != frecuenciasB[i]) sonIguales = false;
        i++;
    }
    return sonIguales;
}
