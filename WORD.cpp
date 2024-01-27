#include <iostream>
#include <string>
using namespace std;

string lowercase(string s){
    for (int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

string capital(string s){
    for (int i = 0; i < s.length(); i++){
        s[i] = toupper(s[i]);
    }
    return s;
}

int main(){
    string s; cin >> s;
    int count_capital = 0, count_lower = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] >= 65 && s[i] <= 90) count_capital++;
        else count_lower++;
    }
    if (count_capital > count_lower){
        s = capital(s);

        cout << s;
    }
    else{
        s = lowercase(s);
        cout << s;
    }
}