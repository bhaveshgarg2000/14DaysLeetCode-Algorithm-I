class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // size if the nums array
        int n = nums.size();
        // taking modulus with with size of the array 
        k = k % n;
        // reversing the whole array
        reverse(nums.begin(),nums.end());
        // reversing the firts k elements of the array
        reverse(nums.begin(),nums.begin()+k);
        // reversing the (n-k) elemenst of an array
        reverse(nums.begin()+k,nums.end());
    }
};