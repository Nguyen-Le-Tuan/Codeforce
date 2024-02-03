#include <iostream>
#include <string>
using namespace std;
int main(){
    char set_distinct[26];
    int len = 0;
    bool distinct = true;
    string s; getline(cin, s);
    for (int i = 0; i < s.length(); i++){
        distinct = true;
        for (int j = 0; j < len; j++){
            if (s[i] == set_distinct[j]) distinct = false;
        }
        if ((s[i] >= 97 && s[i] <= 122) && distinct == true){
            set_distinct[len] = s[i];
            len++;
        }
    }
    cout << len;
}