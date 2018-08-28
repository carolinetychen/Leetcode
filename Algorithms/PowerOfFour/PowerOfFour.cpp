class Solution {
public:
    bool isPowerOfFour(int num) {
        int mask = 0x55555555;
        // num: check num is not 0
        // !(num & (num - 1)): check if only 1 bit is set
        // mask & num: check if no of 0 bits is even
        return (num && !(num & (num - 1)) && (mask & num));
    }
};