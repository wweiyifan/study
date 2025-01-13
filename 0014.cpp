#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n == 0) return "";
        if(n == 1) return strs[0];
        sort(strs.begin(),strs.end());
        for(int i = 0;i < min(strs[0].length(),strs[n-1].length());i++){
            if(strs[0][i] != strs[n-1][i]) return strs[0].substr(0,i);
        }
        return strs[0].length() > strs[n-1].length()?strs[n-1]:strs[0];
    }
}; 
int main (){
    vector<string> strs;
    Solution test;
    string a;
    strs.push_back("flower");
    strs.push_back("flow");
    strs.push_back("flight");
    a =test.longestCommonPrefix(strs);
    cout << a <<endl;
    return 0;

}