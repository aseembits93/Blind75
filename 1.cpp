#include <unordered_map>
#include <vector>
#include <iostream>

std::vector<int> twoSum(std::vector<int> &nums, int target)
{
    std::unordered_map<int, int> hashTable;

    for (int i = 0; i < nums.size(); ++i)
    {
        int complement = target - nums[i];

        if (hashTable.find(complement) != hashTable.end())
        {
            return {hashTable[complement], i};
        }

        hashTable[nums[i]] = i;
    }

    // No solution found, return an empty vector or handle it as needed
    return {};
}

int main()
{
    std::vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    std::vector<int> result1 = twoSum(nums1, target1);

    std::cout << "Example 1: " << result1[0] << ", " << result1[1] << std::endl;

    // Repeat similar steps for the other examples

    return 0;
}