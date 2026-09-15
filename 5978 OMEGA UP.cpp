#include <iostream>
using namespace std;

int main() {
    string nombre1, nombre2;
    int A, B;

    cin >> nombre1 >> A;
    cin >> nombre2 >> B;

    if (A > B) {
        cout << nombre1 << endl;
    } else {
        cout << nombre2 << endl;
    }

    return 0;
}