class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};
/*
Brute Force Approach:
first take all the non-zeros element from nums, then put them into temp array
then put them back from left side of nums array and fills up all the remaining elements with 0
*/
