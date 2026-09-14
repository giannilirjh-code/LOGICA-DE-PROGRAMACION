#include <iostream>
using namespace std;

int main() {
    int edad;
    bool VIP;

    cin >> edad >> VIP;

    bool ingresa = edad >= 18 && VIP;

    cout << ingresa << endl;

    return 0;
}