#include <iostream>
#include <string>
using namespace std;

string vowels = "ueoaiyYUEOAI";

bool trunglap(char s){
    for (int i = 0; i < vowels.length(); i++){
        if (s == vowels[i]) return false;
    }
    return true;
}

string remove_vowels(string s){
    string kq;
    for (int i = 0; i < s.length(); i++){
        if(trunglap(s[i])) kq+=s[i];
    }
    return kq;
}

string lowercase(string s){
    for (int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

int main(){
    string s; cin >> s;
    string kq = lowercase(remove_vowels(s));
    for (int i = 0; i < kq.length(); i++){
        cout << '.' << kq[i];
    }
    
}