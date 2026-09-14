#include <iostream>
using namespace std;
int main () {
    int X = 10;
    int Y = 5;
    X = X + Y;
    Y = X - Y;
    X = X - Y;
    cout << X << " " << Y << endl;
    return 0;
}