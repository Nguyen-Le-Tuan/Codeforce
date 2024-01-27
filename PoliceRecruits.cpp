#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int ans = 0, police = 0;
    while (n--){
        int temp;
        cin >> temp;
        if (temp == -1){
            if (!police) ans++;
            else police--;
        }
        else police += temp;
    }
    cout << ans;
}