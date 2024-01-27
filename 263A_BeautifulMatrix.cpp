#include <iostream>
#include <cmath>
using namespace std;
#define MAX 5
int main(){
    int a[MAX][MAX];
    int position[2];
    for (int i = 0; i < MAX; i++){
        for (int j = 0; j < MAX; j++){
            cin >> a[i][j];
            if (a[i][j] == 1){
                position[0] = i + 1;
                position[1] = j + 1;
            }
        }
    }
    int y_axis = abs(position[0] - 3);
    int x_axis = abs(position[1] - 3);
    cout << abs(y_axis + x_axis);

}