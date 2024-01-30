#include <iostream>

using namespace std;

int ucln(int a, int b){
    int uoc;
    int smaller = a < b ? a : b;
    for (int i = 1; i <= smaller; i++){
        if (a % i  == 0 && b % i == 0) uoc = i;
    }
    return uoc;
}


int main(){
    int y, w; cin >> y >> w;
    int larger = y > w ? y : w;
    int dem = 7 - larger;
    int temp = ucln(dem, 6);
    if (dem == 0) cout << "0/1";
    else if (dem == 6) cout << "1/1";
    else{
        cout << dem  / temp << "/" << 6  / temp; 
    }


}