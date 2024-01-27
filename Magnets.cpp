#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<string> figures;
    vector<int> kq;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        figures.push_back(s);
    }
    int dem = 0;
    int tam = 0;
    int temp = 0;
    while (temp < n){
        for (int i = tam; i < n; i++){
            if (figures[i] != figures[tam]){
                dem++;
                tam = i;
                break;
            }
            temp++;
        }
    }
    cout << dem + 1;
}