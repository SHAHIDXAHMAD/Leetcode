class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        if (k == 0) return;

        int l = 0, r = n - 1;
        while (l < r) swap(nums[l++], nums[r--]);

        l = 0; r = k - 1;
        while (l < r) swap(nums[l++], nums[r--]);

        l = k; r = n - 1;
        while (l < r) swap(nums[l++], nums[r--]);
    }
};
/*
Brute Force Approach:
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
         int x = k%n;
        if(x){
            vector<int> temp(x);
        for(int i=n-x;i<n;i++){
            temp[i-(n-x)]=nums[i];
        }
        for(int i=(n-1)-x;i>=0;i--){
            nums[i+x]=nums[i];
        }
        for(int i=0;i<x;i++){
            nums[i]=temp[i];
        }
    }
    }
};
*/