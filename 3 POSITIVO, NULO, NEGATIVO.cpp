#include <iostream>
using namespace std;

int main() {
    int NUM;
    cin >> NUM;

    if (NUM > 0) {
        cout << "positivo";
    }
    else {
        if (NUM == 0) {
            cout << "nulo";
        }
        else {
            cout << "negativo";
        }
    }

    return 0;
}