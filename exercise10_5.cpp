#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int N;

int FindRandom() {
    int random;
    return random = rand() % N + 1;
}

int main() {
    srand(time(0));

    do {
        cout << "Enter N: ";
        cin >> N;
    } while(N <= 1);

    double prop[N];
    prop[0] = (100*(0.5))/(1-pow(0.5, N));
    for(int i = 1; i <= N; i++) {
        prop[i] = prop[i-1]*0.5;
    }

    for(int i = 0; i < N; i++) {
        cout << "Propability of " << i+1 << " is " << prop[i] << "%" << endl;
    }

    return 0;
}