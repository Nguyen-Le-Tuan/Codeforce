#include <iostream>
using namespace std;
#define MAX 100
int main(){
    int k,n;
    cin >> n >> k;
    int a[MAX];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int point = a[k-1];
    int dem = 0;
    for (int i = 0; i < n; i++){
        if (a[i] >= point && a[i] > 0) dem++;
    }
    cout << dem;
}