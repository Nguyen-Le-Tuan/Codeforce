#include <iostream>
#include <string>
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    int dem = 0;
    for (int i = 0; i < s.length(); i++){
        if (i != s.length() - 1){
            if (s[i] != s[i+1]) continue;
            dem += 1;
        }
    }
    cout << dem;
}