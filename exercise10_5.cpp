//challlenging problem
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int N;
    do {
        cout << "Enter N: ";
        cin >> N;
    } while(N <= 1);

    srand(time(0));
    int R = rand() % N + 1;

    return 0;
}