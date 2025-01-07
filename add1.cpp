#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
        /// @brief
        /// @param nums
        /// @param target
        /// @return
        vector<int> twoSum(vector<int> &nums, int target)
        {
                int a = nums.size();
                for (int i = 0; i < a; i++)
                {
                        for (int j = i + 1; j < a; j++)
                        {
                                if (nums[i] + nums[j] == target)
                                {
                                        return {nums[i], nums[j]};
                                }
                        }
                }
                return {};
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
    std::vector<int> demo1;
    demo1 = test1.twoSum(nums, target);
    for (int element : demo1){
        std::cout <<element << "  ";
    }
    std::cout << std::endl;
    return 0;
}