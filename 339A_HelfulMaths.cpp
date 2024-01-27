// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main(){
//     string s;
//     cin >> s;
//     s.erase(remove(s.begin(), s.end(), '+'), s.end());
//     int min_index = 0;
//     for (int i = 0; i < s.length(); i++){
//         min_index = i;
//         for (int j = i + 1; j < s.length(); j++){
//             if (s[min_index] > s[j]) min_index = j;
//         }
//         char temp = s[i];
//         s[i] = s[min_index];
//         s[min_index] = temp;
//     }
//     for (int i = 1; i < s.length(); i+=2){
//         s.insert(i, "+");
//     }
//     cout << s;
//     //1 1 1 2 2 2 2 2 2 2 2  3  3
//     //0 1 2 3 4 5 6 7 8 9 10 11 12
// }

//CACH 2
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::string s;
    std::cin >> s;

    std::vector<int> numbers;
    for (char c : s) { // For each character c in string s
        if (c != '+') { //If character is not a "+"
            numbers.push_back(c - '0'); // Subtract '0' from the character to convert it from a char to an int, and add it to the end of the 'numbers' vector
        }
    }

    std::sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i];
        if (i != numbers.size() - 1) {
            std::cout << "+";
        }
    }

    return 0;
}
