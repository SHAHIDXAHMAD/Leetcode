class Solution {
private:
    void quickSort3Way(vector<int>& arr, int low, int high) {
        if (low >= high) return;

        int pivot = arr[low + rand() % (high - low + 1)];
        int lt = low, i = low, gt = high;

        while (i <= gt) {
            if (arr[i] < pivot) swap(arr[lt++], arr[i++]);
            else if (arr[i] > pivot) swap(arr[i], arr[gt--]);
            else i++;
        }

        quickSort3Way(arr, low, lt - 1);
        quickSort3Way(arr, gt + 1, high);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        srand(time(0)); // Seeds the random generator for pivot selection
        quickSort3Way(nums, 0, nums.size() - 1);
        return nums;
    }
};