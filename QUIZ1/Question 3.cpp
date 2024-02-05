#include <iostream>
#include<iostream>
#include <vector>
#include <unordered_set>

bool containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> seen;

    for (int num : nums) {
        if (seen.find(num) != seen.end()) {
            return true;
        }
        seen.insert(num);
    }

    return false;
}

int main() {
    // Example usage
    std::vector<int> nums = {1, 2, 3, 4, 5, 1};  // Replace with your data
    if (containsDuplicate(nums)) {
        std::cout << "Duplicates found!" << std::endl;
    } else {
        std::cout << "No duplicates found." << std::endl;
    }

    return 0;
}
