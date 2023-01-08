#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int even2_24[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24};
int numm5_p5[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};

int main() {
    srand(time(0));

    int a = rand() % 100 + 1;
    cout << a << endl;

    int b = rand() % 11;
    cout << even2_24[b] << endl;

    int c = rand() % 10;
    cout << numm5_p5[c] << endl;

    

    return 0;
}