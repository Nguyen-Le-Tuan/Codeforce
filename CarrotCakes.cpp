#include <iostream>
using namespace std;
int main(){
    int n,t,k,d;
    cin >> n >> t >> k >> d;
    int T1 =  t*( (n/k) + (n%k!=0));
    int T2 =  d + t*(( n-(d/t)*k )/(2*k) +(( n-(d/t)*k )%(2*k)!=0));
    if(T2 < T1) cout << "YES";
    else cout << "NO";
    return 0;
}