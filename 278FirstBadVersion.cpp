// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        int mid = low + (high - low)/2;
        while(low <= high){
            if(!isBadVersion(mid)){
                low = mid+1;
            }
            if(isBadVersion(mid)){
                high = mid -1;
            }
            mid = low + (high - low)/2;
        }
        return low;
    }
};