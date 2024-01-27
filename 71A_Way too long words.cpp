#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> data;
    for (int i = 0; i < n; i++){
        string d;
        cin >> d;
        data.push_back(d);
    }
    for (int i = 0; i < data.size(); i++){
        if (data[i].length() > 10){
            cout << data[i][0] << data[i].length() - 2 << data[i][data[i].length() - 1] << '\n';
        }
        else{
            cout << data[i] << '\n';
        }
    }
}