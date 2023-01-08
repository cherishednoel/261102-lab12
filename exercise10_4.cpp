#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int numm5_p5[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};

int main() {
    srand(time(0));

    int a = rand() % 100 + 1;
    cout << a << endl;

    int b = rand() % 12 + 1;
    cout << 2*b << endl;

    int c = rand() % 10;
    cout << numm5_p5[c] << endl;

    int d = rand() % 10 + 1;
    cout << pow(2, d) << endl;

    return 0;
}