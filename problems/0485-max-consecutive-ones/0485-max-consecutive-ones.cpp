class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int countResult = 0;
        int tempCount = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==1){
                tempCount++;
                if(countResult<tempCount){
                    countResult = tempCount;
                }
            }
            else{tempCount = 0;}
        }
        return countResult;
    }
};