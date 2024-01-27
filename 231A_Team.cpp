#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int kq = 0;
    for (int i = 0 ; i < n; i++){
        int sum = 0;
        int s;
        for (int j = 0; j < 3; j++){
            cin >> s;
            sum += s;
        }
        if (sum >= 2) kq+=1;
    }
    cout << kq << endl;
}