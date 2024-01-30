#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> m;
    int x, y;
    for (int i = 1; i <= m; i++){
        cin >> x >> y;
        a[x-2] += y-1;
        a[x] += a[x-1] - y;
        a[x-1] = 0;
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
}