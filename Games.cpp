#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n; cin >> n;
    int dem = 0;
    vector<int> h, a;
    for (int i = 0; i < n; i++){
        int h_temp; cin >> h_temp; h.push_back(h_temp);
        int a_temp; cin >> a_temp; a.push_back(a_temp);
    }
    for (int i = 0; i < h.size(); i++){
        for (int j = 0; j < a.size(); j++){
            if (i != j && h[i] == a[j]) dem++;
        }
    }
    cout << dem;
    

}