#include <iostream>
using namespace std;
int x = 4;
double myFunction(int a,double b){
    return x+a+b/2;
}
int main(){
    cout << "x = " << x++ << "\n";
    int x = 10;
    cout << "Result = " << myFunction(x,::x);
    return 0;
}

//x = 4 5+10+5/2=17.5