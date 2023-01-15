class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        // loop for calculating the square root of the all elements of the array
        for(int i = 0;i<n;i++){
            nums[i] *= nums[i];
        }
        // array to sort in ascending order
        sort(nums.begin(),nums.end());
        return nums;
    }
};