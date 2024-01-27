#include <iostream>
#include <string>
using namespace std;

string lowercase(string s){
    string s_temp;
    for (int i = 0; i < s.length(); i++){
        char a = tolower(s[i]);
        s_temp += a;
    }
    return s_temp;
}

string arrange(string a){
    int min_index = 0;
    for (int i = 0; i < a.length(); i++){
        min_index = i;
        for (int j = i + 1; j < a.length(); j++){
            if (a[min_index] > a[j]) min_index = j;
        }
        char temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
    return a;
}

int main(){
    string s1, s2;
    cin >> s1; cin >> s2;
    s1 = lowercase(s1); 
    //s1 = arrange(s1);
    s2 = lowercase(s2); 
    //s2 = arrange(s2);
    if (s1 > s2 ) cout << 1;
    else if (s1 < s2) cout << -1;
    else cout << 0;
    
}