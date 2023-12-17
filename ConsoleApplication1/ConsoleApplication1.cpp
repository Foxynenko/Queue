#include <iostream>
#include <unordered_map>

using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> charCount;

    // Лічильник кількості входжень кожного символу в рядок
    for (char c : s) {
        charCount[c]++;
    }

    // Пошук першого неповторюваного символу
    for (int i = 0; i < s.length(); ++i) {
        if (charCount[s[i]] == 1) {
            return i;
        }
    }

    return -1; // Якщо немає неповторюваного символу
}

int main() {
    // Приклад 1
    string s1 = "leopard";
    cout << "Example 1: " << firstUniqChar(s1) << endl;

    // Приклад 2
    string s2 = "loveleopard";
    cout << "Example 2: " << firstUniqChar(s2) << endl;

    // Приклад 3
    string s3 = "aabb";
    cout << "Example 3: " << firstUniqChar(s3) << endl;

    return 0;
}
