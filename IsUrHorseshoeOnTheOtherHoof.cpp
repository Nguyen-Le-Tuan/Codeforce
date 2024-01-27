#include <iostream>

int main() {
    int colors[4], unique_colors = 0;
    for(int i = 0; i < 4; i++) {
        std::cin >> colors[i];
    }
    for(int i = 0; i < 4; i++) {
        bool is_unique = true;
        for(int j = 0; j < i; j++) {
            if(colors[i] == colors[j]) {
                is_unique = false;
                break;
            }
        }
        if(is_unique) {
            unique_colors++;
        }
        std::cout << "Lan thu " << i << " thi: unique = " << unique_colors << '\n';
    }
    std::cout << 4 - unique_colors;
}
