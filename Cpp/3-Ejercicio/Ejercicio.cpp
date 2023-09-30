/* Escribe un programa que lea la entrada estandar
dos numeros y muestre en la salida estandar su suma, resta, multiplicacion y division. */

#include<iostream>

using namespace std;

int main(){
    int n1, n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

    cout << "Digita un numero: \n";
    cin >> n1;

    cout << "Digita otro numero: \n";
    cin >> n2;

    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;

    cout << "Esta es la Suma: "<<suma<<endl;
    cout << "Esta es la Resta: "<<resta<<endl;
    cout << "Esta es la Multiplicacion: "<<multiplicacion<<endl;
    cout << "Esta es la Division: "<<division<<endl;

    return 0;
}