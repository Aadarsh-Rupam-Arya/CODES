
#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> num_indices;
    std::vector<int> result;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (num_indices.find(complement) != num_indices.end()) {
            result.push_back(num_indices[complement]);
            result.push_back(i);
            return result;
        }
        num_indices[nums[i]] = i;
    }

    return result; // Return an empty vector if no solution is found
}

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> result = twoSum(nums, target);

    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}