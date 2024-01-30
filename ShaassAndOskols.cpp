#include <iostream>
#include <vector>
using namespace std;
// Lí do sai: Chưa xử lí được đoạn mà chim bay đi. Trong khi đoạn code dưới xử lí bằng cách để trống ô số 0 và ô số n để lưu các biến
// khi chim bay đi.
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
//Cách giải đúng
/*
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,m,a[101]={0};
	int x,y,i;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	cin>>m;
	for(i=1;i<=m;i++){
		cin>>x>>y;
		a[x-1]+=y-1;
		a[x+1]+=a[x]-y;
		a[x]=0;
	}
	for(i=1;i<=n;i++)
		cout<<a[i]<<endl;
}
*/