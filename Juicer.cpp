#include <iostream>

using namespace std;

int main(){
    int n, b, d; cin >> n >> b >> d;
    long long int sum = 0;
    int dem = 0;
    for (int i = 0; i < n; i++){
        long long int x; cin >> x;
        if (x <= b) sum += x; 
        if (sum > d){
            dem++;
            sum = 0;
        }
    }
    cout << dem;
}