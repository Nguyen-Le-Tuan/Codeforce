#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a;
    int temp;
    for (int i = 0; i < n; i++){
        cin >> temp;
        a.push_back(temp);
    }
    int min_index = 0;
    for (int i = 0; i < a.size(); i++){
        min_index = i;
        for (int j = i+1; j < a.size(); j++){
            if (a[j] < a[min_index]) min_index = j;
        }
        int temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << ' ';
    }
}