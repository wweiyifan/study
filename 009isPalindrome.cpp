#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
     if(x<0 || (x%10 ==0&&x!=0)){
        return false;
     }  
     string str =to_string(x);
     int right =0,left=str.length()-1;
     while(right<left){
        if(str[right]!=str[left]){
            return false;
        }
        left--;
        right++;
     } 
     return true;
    }
};
int main(){
    Solution test1;
    int a =121;
    int b =-121;
    int c=10;
    bool d;
    int x;
    x =a;
    d =test1.isPalindrome(x);
    cout << d <<endl;
    x =b;
    d =test1.isPalindrome(x);
    cout << d <<endl;
    x =c;
    d =test1.isPalindrome(x);
    cout << d <<endl;
    return 0;

}