#include <vector>
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
class Solution
{
public:
      vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> d;
        for (int i = 0;; ++i) {
            int x = nums[i];
            int y = target - x;
            if (d.count(y) > 0) {
                return {y , nums[i]};
            }
            d[x] = i;
        }
    }
};
int main()
{
    Solution test1;
    std::vector<int> nums;
    std::vector<int> demo2;
    demo2.push_back(3);
    demo2.push_back(11);
    demo2.push_back(7);
    demo2.push_back(5);
    nums =demo2;
    int target =10;
    std::unordered_map<int, int> d;
    std::vector<int> demo1;
    demo1 = test1.twoSum(nums, target);
    for (int element : demo1){
        std::cout <<element << "  ";
    }
    std::cout << std::endl;
    return 0;
}