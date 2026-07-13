#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> freq;

        // Count characters in s
        for (char c : s) {
            freq[c]++;
        }

        // Subtract counts using t
        for (char c : t) {
            freq[c]--;
        }

        // Check if all counts are zero
        for (auto &entry : freq) {
            if (entry.second != 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    string s, t;
    cout << "Enter the 2 strings:" << endl;
    cin >> s >> t;

    Solution sol;
    bool res = sol.isAnagram(s, t);

    if (res) {
        cout << "The entered strings are anagrams" << endl;
    } else {
        cout << "The entered strings are not anagrams" << endl;
    }
}

