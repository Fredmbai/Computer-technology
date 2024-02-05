#include <iostream>
#include <vector>
#include <algorithm>

void rotateArray(std::vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;

    std::rotate(nums.begin(), nums.end() - k, nums.end());
}

int main()
    {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int k = 2;
    
    rotateArray(nums, k);

    for (int num : nums) {
        std::cout << num << " ";
    }

    return 0;
}
