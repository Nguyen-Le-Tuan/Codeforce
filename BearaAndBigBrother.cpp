#include <iostream>

using namespace std;

int main(){
    int a,b; cin >> a >> b;
    int years = 0;
    int substraction = a - b;
    while (substraction <= 0){
        years++;
        a = 3*a;
        b = 2*b;
        substraction = a - b;
    }
    cout << years;
}