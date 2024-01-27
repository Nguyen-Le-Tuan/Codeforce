#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string s; cin >> s;
    int n = s.length();
    int start = 97;
    int end;
    int j = 0, dem = 0;
    while (n--){
        end = abs(s[j] - start) ;
        if (26 - end < end){
            dem += (26 - end);
        }
        else dem += end;
        start = s[j];
        j++;
    }
    cout << dem;
}
