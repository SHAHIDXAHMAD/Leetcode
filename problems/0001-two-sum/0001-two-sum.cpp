// Using Hashing
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        
        for (int i = 0; i < nums.size(); i++) {
            int needed = target - nums[i];
            
            if (seen.find(needed) != seen.end()) {
                return {seen[needed], i};
            }
            
            seen[nums[i]] = i;
        }
        
        return {};
    }
};

//BRUTE FORCE METHOD
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         for(int j=0;j<n;j++){
//             for(int i=j+1;i<n;i++){
//                 if(nums[j]+nums[i]== target){
//                     return {j,i};
//             }
//         }
//         }
//         return {};
//     }
// };