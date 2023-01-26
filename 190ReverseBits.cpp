class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        // int ans = 0;
        // for(int i = 0;i<32;i++){
        //     // right Shift of the integer with i and '&' operation with 1;
        //     int bit = ( n >> i) & 1;
        //     // 31 times left shift & performed 'OR' operation with ans ansd stored in ans 
        //     ans = ans | (bit << 31 - i);
        // }
        // return ans;


        int ans = 0;
        for(int i = 0; i<32;i++){
            int lsb = n & 1;
            int reverseLSB = lsb << (31 - i);
            ans = ans | reverseLSB;
            n = n >> 1;
        }
        return ans;
    }
};