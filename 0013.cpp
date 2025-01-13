#include <iostream>
#include <unordered_map>
using namespace std;
unordered_map<char, int> roman = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000},
};
class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        for (int i = 1; i < s.length(); i++) { 
            int x = roman[s[i - 1]], y = roman[s[i]];
            ans += x < y ? -x : x;
        }
        return ans + roman[s.back()];     
    }
};
int main() {
    Solution test;
    string s= "LVIII";
    int m;
    m =test.romanToInt (s);
    cout << m <<endl;
    return 0;
}