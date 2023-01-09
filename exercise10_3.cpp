#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    srand(time(0));

    int x = 10*(rand()%5-2);
    //x = {-20 -10 0 10 20}

    int y = (rand()%2)+(rand()%2);
    //y = {(0 1) + (0 1)} = {0 1 2}

    int z = pow(10,rand()%4);
    //z = {1 10 100 1000}

    return 0;
}