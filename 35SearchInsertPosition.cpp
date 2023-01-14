class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int lo = 0;
        int hi = nums.size() - 1;
        while (lo <= hi)
        {
            int mid = (hi + lo) / 2;
            if (target < nums[mid])
                hi = mid - 1;
            else if (target > nums[mid])
                lo = mid + 1;
            else
                return mid;
        }
        // return low to find the position where we want insert our element in array
        return lo;
    }
};