/*
    Vanya and Fences
        https://codeforces.com/contest/677/problem/A
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, h; cin >> n >> h;
    int count_1 = 0, count_2 = 0;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        if (a > h) count_2++;
        else count_1++;
    }
    cout << 1*count_1 + 2*count_2;
    
}
