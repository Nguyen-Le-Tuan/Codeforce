#include <iostream>
#include <string>
using namespace std;

int main(){
    string s; cin >> s;
    string t; cin >> t;
    int instructions = t.length();
    int pos = 1;
    int kiem_soat = 0;
    for (int i = 0; i < instructions; i++){
        if (s[kiem_soat] == t[i]){
                pos++;
                kiem_soat++;
            }
    }
    cout << pos;
}