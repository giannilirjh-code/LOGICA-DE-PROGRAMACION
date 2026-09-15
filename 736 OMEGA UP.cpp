#include <iostream>
using namespace std;

int main() {
    string p1, p2, p3;
    cin >> p1 >> p2 >> p3;

    if (p1 == "vertebrado") {
        if (p2 == "ave") {
            if (p3 == "carnivoro") {
                cout << "aguia" << endl;
            } else { // onivoro
                cout << "pomba" << endl;
            }
        } else { // mamifero
            if (p3 == "onivoro") {
                cout << "homem" << endl;
            } else { // herbivoro
                cout << "vaca" << endl;
            }
        }
    } else { // invertebrado
        if (p2 == "inseto") {
            if (p3 == "hematofago") {
                cout << "pulga" << endl;
            } else { // herbivoro
                cout << "lagarta" << endl;
            }
        } else { // anelideo
            if (p3 == "hematofago") {
                cout << "sanguessuga" << endl;
            } else { // onivoro
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}