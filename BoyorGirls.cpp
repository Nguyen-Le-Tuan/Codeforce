#include <iostream>
#include <string>
using namespace std;

bool trunglap(string ketqua, char s){
    for (int i = 0; i < ketqua.length(); i++){
        if (s == ketqua[i]) return false;
    }
    return true;
}

int main(){
    string s; cin >> s;
    string kq;
    int dem;
    for (int i = 0; i < s.length(); i++){
        if (trunglap(kq, s[i])) kq += s[i];
    }
    if (kq.length() % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
}