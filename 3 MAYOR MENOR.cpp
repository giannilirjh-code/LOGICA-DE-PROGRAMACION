#include <iostream>
using namespace std;

int main() {
    int a, b, mayor, menor;
    bool aEsMayor;

    cout << "Ingrese a: ";
    cin >> a;

    cout << "Ingrese b: ";
    cin >> b;

    aEsMayor = a > b;

    mayor = a * aEsMayor + b * (!aEsMayor);
    menor = a * (!aEsMayor) + b * aEsMayor;

    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;

    return 0;
}