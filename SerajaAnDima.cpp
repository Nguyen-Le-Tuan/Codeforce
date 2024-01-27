#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
    }
    int sereja_score = 0, dima_score = 0;
    int left = 0, right = n - 1;
    bool turn = true;  // true for Sereja, false for Dima

    while (left <= right) {
        int current_card;
        if (cards[left] > cards[right]) {
            current_card = cards[left];
            left++;
        } else {
            current_card = cards[right];
            right--;
        }
        if (turn) {
            sereja_score += current_card;
        } else {
            dima_score += current_card;
        }   
        turn = !turn;
    }

    cout << sereja_score << " " << dima_score << endl;

    return 0;
}
